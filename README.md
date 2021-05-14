# Bluetooth pedal for the PG Spark Amp 

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/ad00801aa7b04839934f103c968ede85)](https://app.codacy.com/gh/copych/BT_Spark_pedal?utm_source=github.com&utm_medium=referral&utm_content=copych/BT_Spark_pedal&utm_campaign=Badge_Grade_Settings)
[![](https://www.travis-ci.com/copych/BT_Spark_pedal.svg?branch=master)](https://www.travis-ci.com/github/copych/BT_Spark_pedal)

It now can handle some basic functions:
* One rotary encoder is changing FX parameters like amp's knobs do. A push selects next FX
* Another encoder changes presets: first four is hardware (in-amp), the other 24 are hardcoded yet
* The four buttons switches FX on and off (DRV, MOD, DLY, RVB) or at your choice
* Long pressing the first button invokes amp info screen
* Long pressing the fourth button invokes not-implemented-yet mode ) 
but it's buggy and cut yet.

It's gonna be a standalone bluetooth footswitch for Spark amp to use in "gig mode", ie to switch between tones (4 stored within the amp, and a reasonable number, say 20, 50 or 100 of presets stored in on-board flash), or just turn On/Off effects inside a tone with just one tap.

These presets will probably be accessible via the on-board web server thru WiFi connection (AP/Infrastructure mode). Or in some other way.

## ToDo

* Total bypass: switching all the effects OFF and then return to the previous state
* Storing presets in ESP's filesystem
* Accessing presets thru web-based UI via WiFi
* (?) "Scenes" mode. Remember the setups within one Tone and map them to the buttons. Switching between such scenes should be (or not: subject to test) fast enough to perform live.

## Hardware

Wiring: Coming soon

Hardware in the photos:
* DOIT ESP32 DevKit v1
* 4 buttons
* 2 rotary encoders with buttons
* SSD1306 duo-color OLED display (just top 16 lines of pixels are always yelow, and the rest are always blue, you can't manage individual pixel color)

![](/images/2021-05-09%2018-23-49.JPG)
![](/images/2021-05-09%2018-24-17.JPG)

## Credits/Thanks
* PositiveGrid for their Spark 40 Amp.
* Paul Hamshere https://github.com/paulhamsh/ for his system approach and a great reverse engineering job. This project is based on forked SparkIO, SparkComms and some of his other classes.
* Christopher Cook https://github.com/soundshed for the great desktop app for playing with the amp, and for some code look-up.
* Kevin McGladdery for the pedal example
* FB spark programming group for help and support
