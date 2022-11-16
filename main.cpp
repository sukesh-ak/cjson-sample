/*
MIT License

Copyright (c) 2022 Sukesh Ashok Kumar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "stdio.h"

/*
{
    "devicename":   "sukesh",
    "settings":     {
            "brightness":   128,
            "theme":        "dark",
            "timezone":     "+5:30",
            "weather":      "bangalore,india"
    }
}
*/

#include "ConfigHelper/ConfigHelper.hpp"

extern "C" int main()
{
    // Instantiate and setup default values
    ConfigHelper *cfg = new ConfigHelper();
    
    // default - don't persist
    cfg->StorageType = CONFIG_STORE_NONE;  

    // Save settings
    cfg->save_config();   // save default settings

    // Load values
    cfg->load_config();

    // Change device name
    cfg->DeviceName = "ESP32-TUX";
    // Change brightness
    cfg->Brightness=250;

    // Save settings again
    cfg->save_config();

return 0;
}
