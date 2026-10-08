#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sensor.h"

int ReadLightSensor(void)
{
    return rand() % 101;
}

int ReadHumanSensor(void)
{
    return rand() % 2;
}

void SetLed(int state)
{
    if(state == 1)
        printf("照明灯打开\n");
    else
        printf("照明灯关闭\n");
}

int main(void)
{
    int light_val, human_exist;
    srand((unsigned)time(NULL));
    while(1)
    {
        light_val = ReadLightSensor();
        human_exist = ReadHumanSensor();
        printf("当前光照：%d，是否有人：%d\n", light_val, human_exist);

        if(light_val < 50 && human_exist == 1)
        {
            SetLed(1);
        }
        else
        {
            SetLed(0);
        }
    }
    return 0;
}