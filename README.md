# cJSON Library Sample in C
Quick sample of using cJSON Library in C.

```make
# compile using gcc on Linux
gcc main.c cjson/cJSON.c -o jsontest
./jsontest
```

## Output
```bash
{
        "devicename":   "sukesh",
        "settings":     {
                "brightness":   128,
                "theme":        "dark",
                "timezone":     "+5:30",
                "weather":      "bangalore,india"
        }
}
Brightness value: 128
After update
{
        "devicename":   "sukesh",
        "settings":     {
                "brightness":   250,
                "theme":        "light",
                "timezone":     "+5:30",
                "weather":      "bangalore,india"
        }
}
```

## Credits
cJSON on [Github](https://github.com/DaveGamble/cJSON)
