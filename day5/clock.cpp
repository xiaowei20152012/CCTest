#include <iostream>
#include <cmath>

using namespace std;

class Clock
{
private:
    int Hour, Minute, Second;
public:
    Clock(int h = 0, int m = 0, int s = 0);

    void showTime();

    Clock &operator++();

    Clock operator++(int);
};

Clock::Clock(int h, int m, int s)
{
    if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
    {
        Hour = h;
        Minute = m;
        Second = s;
    }
}