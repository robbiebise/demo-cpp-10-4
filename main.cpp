#include <iostream>
#include <cstring>
#include "functions.h"

int main()
{
    int values[5] = {1,2,3,4,5};
    double avg = getAverage(values, 10);
    char array[10];
    void *pos = memchr(array, '@', 42);
    std::cout << avg;
    constexpr auto maxSize = 3;
    auto myData[maxSize] = {1, 2, 3};
    for(const auto i = 0; i < maxSize; ++i) {
      myData[i] = i;
    }
}

