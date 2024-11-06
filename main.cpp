//=====[Libraries]=============================================================

#include "smart_home_system.h"
#include "mbed.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    printf("%s\n", "Hello World");
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}