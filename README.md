## MIT-App-Inventor-with-Firebase

### About
A simple smart home setup for controlling appliances from Android app.

### Hardware Requirements
* [Amica NodeMCU](https://www.amazon.in/ESP8266-Development-board-Original-Stock/dp/B01MZ1E8QR)
* [2 channel Relay Module with optocoupler](https://www.amazon.in/KTC-CONS-Labs-Optocoupler-5V/dp/B0725YKVJS/ref=sr_1_4?crid=23EAHP69N17D2&dchild=1&keywords=2+channel+relay+module&qid=1591991121&s=industrial&sprefix=2+channel+rel%2Cindustrial%2C306&sr=1-4)

### Software Requirements
* [Arduino IDE](https://www.arduino.cc/en/main/software)
* [MIT App Inventor](http://ai2.appinventor.mit.edu/)

### Usage
**Setting up the Arduino**
* In the smart_room.ino file edit the firebase authentication details and Wifi settings.
* Import the zip files for [ArduinoJson](http://downloads.arduino.cc/libraries/github.com/bblanchon/ArduinoJson-5.13.2.zip) and [firebase-arduino](https://github.com/FirebaseExtended/firebase-arduino) in the code.
* Upload the code to the NodeMCU board

**Setting up the App**
* Download .aia file and import it into [MIT App Inventor](http://ai2.appinventor.mit.edu/), then edit the Firebase URL
* Build the .apk file, and install.

### Issues
* NodeMCU causes some trouble with 5 GHz wifi band, so use the 2.4 GHz wifi band.
* There are some bugs with latest versions of ArduinoJSON, use version [5.13.2](http://downloads.arduino.cc/libraries/github.com/bblanchon/ArduinoJson-5.13.2.zip)
