#ifndef TIMECOUNTER_H
#define TIMECOUNTER_H

#include <chrono>

class TimeCounter {
public:
    TimeCounter();

    void startCount();

    double timeElapsed();

private:
    std::chrono::high_resolution_clock::time_point startTime;

    static std::chrono::high_resolution_clock::time_point getTime();
};

#endif
