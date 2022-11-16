# cJSON based ConfigHelper Library in C++
Simple cJSON based ConfigHelper Library in C++ for IoT needs.

```make
# compile using g++ on Linux
g++ main.cpp cjson/cJSON.c ConfigHelper/ConfigHelper.cpp -o jsonconfig
./jsonconfig
```

## Output
```bash

::******************* Saving json

{
        "devicename":   "MYDEVICE",
        "settings":     {
                "brightness":   128,
                "theme":        "dark",
                "timezone":     "+5:30",
                "weather":      "bangalore, India"
        }
}

::******************* Loading json
{
        "devicename":   "MYDEVICE",
        "settings":     {
                "brightness":   128,
                "theme":        "dark",
                "timezone":     "+5:30",
                "weather":      "bangalore, India"
        }
}

::******************* Saving json

{
        "devicename":   "ESP32-TUX",
        "settings":     {
                "brightness":   250,
                "theme":        "dark",
                "timezone":     "+5:30",
                "weather":      "bangalore, India"
        }
}

```

## Credits
cJSON on [Github](https://github.com/DaveGamble/cJSON)
