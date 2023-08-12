// SPDX-License-Identifier: LicenseRef-AGPL-3.0-only-OpenSSL

#ifndef CHIAKI_CONTROLLERMANAGER_H
#define CHIAKI_CONTROLLERMANAGER_H

#include <chiaki/controller.h>

#include <QObject>
#include <QSet>
#include <QMap>
#include <QString>

#ifdef CHIAKI_GUI_ENABLE_SDL_GAMECONTROLLER
#include <SDL.h>
#include <chiaki/orientation.h>
#endif

#define PS_TOUCHPAD_MAX_X 1920
#define PS_TOUCHPAD_MAX_Y 1079

class Controller;

class ControllerManager : public QObject
{
    Q_OBJECT

    friend class Controller;

    private:
#ifdef CHIAKI_GUI_ENABLE_SDL_GAMECONTROLLER
        QSet<SDL_JoystickID> available_controllers;
#endif
        QMap<int, Controller *> open_controllers;

        void ControllerClosed(Controller *controller);

    private slots:
        void UpdateAvailableControllers();
        void HandleEvents();
#ifdef CHIAKI_GUI_ENABLE_SDL_GAMECONTROLLER
        void ControllerEvent(SDL_Event evt);
#endif

    public:
        static ControllerManager *GetInstance();

        ControllerManager(QObject *parent = nullptr);
        ~ControllerManager();

        QSet<int> GetAvailableControllers();
        Controller *OpenController(int device_id);

    signals:
        void AvailableControllersUpdated();
};

class Controller : public QObject
{
    Q_OBJECT

    friend class ControllerManager;

    private:
        Controller(int device_id, ControllerManager *manager);

#ifdef CHIAKI_GUI_ENABLE_SDL_GAMECONTROLLER
        void UpdateState(SDL_Event event);
        bool HandleButtonEvent(SDL_ControllerButtonEvent event);
        bool HandleAxisEvent(SDL_ControllerAxisEvent event);
#if SDL_VERSION_ATLEAST(2, 0, 14)
        bool HandleSensorEvent(SDL_ControllerSensorEvent event);
        bool HandleTouchpadEvent(SDL_ControllerTouchpadEvent event);
#endif
#endif

        ControllerManager *manager;
        int id;
        ChiakiOrientationTracker orientation_tracker;
        ChiakiControllerState state;
        bool is_dualsense;

#ifdef CHIAKI_GUI_ENABLE_SDL_GAMECONTROLLER
        QMap<QPair<Sint64, Sint64>, uint8_t> touch_ids;
        SDL_GameController *controller;
#endif

    public:
        ~Controller();

        bool IsConnected();
        int GetDeviceID();
        QString GetName();
        ChiakiControllerState GetState();
        void SetRumble(uint8_t left, uint8_t right);
        void SetTriggerEffects(uint8_t type_left, const uint8_t *data_left, uint8_t type_right, const uint8_t *data_right);
        bool IsDualSense();

    signals:
        void StateChanged();
};

/* PS5 trigger effect documentation:
   https://controllers.fandom.com/wiki/Sony_DualSense#FFB_Trigger_Modes

   Taken from SDL2, licensed under the zlib license,
   Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>
   https://github.com/libsdl-org/SDL/blob/release-2.24.1/test/testgamecontroller.c#L263-L289
*/
typedef struct
{
    qint8 ucEnableBits1;                /* 0 */
    qint8 ucEnableBits2;                /* 1 */
    qint8 ucRumbleRight;                /* 2 */
    qint8 ucRumbleLeft;                 /* 3 */
    qint8 ucHeadphoneVolume;            /* 4 */
    qint8 ucSpeakerVolume;              /* 5 */
    qint8 ucMicrophoneVolume;           /* 6 */
    qint8 ucAudioEnableBits;            /* 7 */
    qint8 ucMicLightMode;               /* 8 */
    qint8 ucAudioMuteBits;              /* 9 */
    qint8 rgucRightTriggerEffect[11];   /* 10 */
    qint8 rgucLeftTriggerEffect[11];    /* 21 */
    qint8 rgucUnknown1[6];              /* 32 */
    qint8 ucLedFlags;                   /* 38 */
    qint8 rgucUnknown2[2];              /* 39 */
    qint8 ucLedAnim;                    /* 41 */
    qint8 ucLedBrightness;              /* 42 */
    qint8 ucPadLights;                  /* 43 */
    qint8 ucLedRed;                     /* 44 */
    qint8 ucLedGreen;                   /* 45 */
    qint8 ucLedBlue;                    /* 46 */
} DS5EffectsState_t;

#endif // CHIAKI_CONTROLLERMANAGER_H
