## IoT example project setup

[![iot-project-master](https://github.com/herrera-luis/iot-project-setup/workflows/IoT%20example/badge.svg)](https://github.com/herrera-luis/iot-project-setup/actions)


IoT base project that contains: platformio setup, arduino framework, unit test, integration tests and pipeline for CI & CD 


### Requirements

 * [Arduino Uno Board](https://store.arduino.cc/usa/arduino-uno-rev3)
 * [Visual Studio Code IDE](https://code.visualstudio.com/download)
 * [PlatformIO IDE Extension](https://platformio.org/platformio-ide)

#### Platformio Agent Secret setup

In order to run integration tests you need to do [login on your platformio account](https://docs.platformio.org/en/latest/plus/pio-remote.html) in order to generete the token and then save it as [secret on your github repository](https://docs.github.com/es/free-pro-team@latest/actions/reference/encrypted-secrets) 

### Platforms supported

* atmelavr (uno)
* native

### External Libraries

* ArduinoFake


