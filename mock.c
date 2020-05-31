#include "mock.h"
#include <math.h>

double getNormVal(double x, enum WaveType type)
{
    if (type == Sawtooth)
    {
        return fmod(x, 1.0f);
    }

    if (type == Rectangular)
    {
        double xt = fmod(x, 2.0f);
        if (xt <= 1.0f)
            return 1;
        else
            return 0;
    }

    if (type == Triangular)
    {
        double xt = fmod(x, 2.0f);
        if (xt <= 1.0f)
            return xt;
        else
            return 2 - xt;
    }

    if (type == Sine)
    {
        return sin(x * M_PI);
    }
}

double mock(double x, double periodLen, enum WaveType type, double low, double high)
{
    double normVal = getNormVal(x * periodLen, type);
    double height = high - low;

    return getNormVal(x * periodLen, type) * height + low;
}

double accelerometerMock(double x, enum WaveType type, double noiseCoeff)
{
    return mock(x, 1, type, 9.7, 9.9);
}