#pragma once

class Esp8266Timer
{
public:
    Esp8266Timer();
    virtual void tick() = 0;
    virtual bool timeElapsed(unsigned long prvTime, unsigned long interval) = 0;
    unsigned long getCurTime();
protected:
    unsigned long curTime;
};

class Esp8266TimerMicro : public Esp8266Timer
{
public:
    Esp8266TimerMicro();

    void tick();
    bool timeElapsed(unsigned long prvTime, unsigned long interval);
};

class Esp8266TimerMill : public Esp8266Timer
{
public:
    Esp8266TimerMill();

    void tick();
    bool timeElapsed(unsigned long prvTime, unsigned long interval);
};

class Esp8266TimerSecond : public Esp8266Timer
{
public:
    Esp8266TimerSecond();

    void tick();
    bool timeElapsed(unsigned long prvTime, unsigned long interval);
};