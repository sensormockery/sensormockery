#ifndef _MOCK
#define _MOCK

enum WaveType
{
    Sawtooth,
    Rectangular,
    Triangular,
    Sine
};

double getNormVal(double x, enum WaveType type);

double mock(double x, double periodLen, enum WaveType type, double low, double high);

double accelerometerMock(double x, enum WaveType type, double noiseCoeff);

#endif