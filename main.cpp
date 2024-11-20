//=====[Libraries]=============================================================

#include "mbed.h"
#include "display.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    printf("%s\n", "Hello World");
    userInterfaceDisplayInit();
    while (true) {
        userInterfaceDisplayUpdate();
        HAL_Delay(SYSTEM_TIME_INCREMENT_MS);
    }
}