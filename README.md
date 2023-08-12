# Chiaki 4 iOS

This is a fork of the Chiaki macOS GUI application with the goal to make it work on iOS.

Current state:

* The discovery manager doesn't work at the moment due to an entitlement issue (https://stackoverflow.com/questions/65490312/multicast-networking-entitlement-on-ios-14). Adding hosts manual should work.
* Videotoolbox doesn't work and will lead to BAD_EXEC errors.
* Audio doesn't work: Audio Format with 2 channels @ 48000 Hz not supported by Audio Device
* Register button is unresponsive. Just enter after typing the pin code

# These scripts are used to build the necessary libraries:

* https://github.com/chrisballinger/Opus-iOS/tree/master
* https://github.com/kewlbear/FFmpeg-iOS-build-script

## About Chiaki

Created by Florian Märkl

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License version 3
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

Additional permission under GNU AGPL version 3 section 7

If you modify this program, or any covered work, by linking or
combining it with the OpenSSL project's OpenSSL library (or a
modified version of that library), containing parts covered by the
terms of the OpenSSL or SSLeay licenses, the Free Software Foundation
grants you additional permission to convey the resulting work.
Corresponding Source for a non-source form of such a combination
shall include the source code for the parts of OpenSSL used as well
as that of the covered work.
