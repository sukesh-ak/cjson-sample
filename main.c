#include "stdio.h"
#include "cjson/cJSON.h"

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
void main()
{
    // Create json file
	cJSON *root=cJSON_CreateObject();
    
    // set root elements
	cJSON_AddItemToObject(root, "devicename", cJSON_CreateString("sukesh"));
    
    // create object on root
    cJSON *settings;
	cJSON_AddItemToObject(root, "settings", settings=cJSON_CreateObject());

    // Create elements
	cJSON_AddNumberToObject(settings,"brightness",128);
	cJSON_AddStringToObject(settings,"theme","dark");
	cJSON_AddStringToObject (settings,"timezone","+5:30");
	cJSON_AddStringToObject(settings,"weather","bangalore,india");   

    // Save json string to variable
    char *rendered = cJSON_Print(root);   // back to string
    printf("%s\n",rendered);

    // Read json variable and parse to cjson object
    cJSON *root_obj = cJSON_Parse(rendered);

    // Get root element item
	cJSON *settings_obj = cJSON_GetObjectItem(root_obj,"settings");
	int Brightness = cJSON_GetObjectItem(settings_obj,"brightness")->valueint;
    printf("Brightness value: %d\n", Brightness);

    // set value of an element
    cJSON_SetIntValue(cJSON_GetObjectItem(settings_obj,"brightness"),250);
    cJSON_SetValuestring(cJSON_GetObjectItem(settings_obj,"theme"),"light");

    // Save json string to variable
    rendered = cJSON_Print(root_obj);

    printf("After update\n%s",rendered);

    // Cleanup
    cJSON_Delete(root_obj);

}
