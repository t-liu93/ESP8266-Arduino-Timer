#include <Arduino.h>
#include "esp8266timer.h"

unsigned long Esp8266Timer::getCurTime()
{
    return curTime;
}

Esp8266Timer::Esp8266Timer()
{}

Esp8266TimerMicro::Esp8266TimerMicro()
{
    curTime = micros();
}

void Esp8266TimerMicro::tick()
{
    curTime = micros();
}

bool Esp8266TimerMicro::timeElapsed(unsigned long prvTime, unsigned long interval)
{
    return (curTime - prvTime) > interval;
}

Esp8266TimerMill::Esp8266TimerMill()
{
    curTime = millis();
}

void Esp8266TimerMill::tick()
{
    curTime = millis();
}

bool Esp8266TimerMill::timeElapsed(unsigned long prvTime, unsigned long interval)
{
    return (curTime - prvTime) > interval;
}

Esp8266TimerSecond::Esp8266TimerSecond()
{
    curTime = millis() / 1000;
}

void Esp8266TimerSecond::tick()
{
     curTime = millis() / 1000;
}

bool Esp8266TimerSecond::timeElapsed(unsigned long prvTime, unsigned long interval)
{
    return (curTime - prvTime) > interval;
}