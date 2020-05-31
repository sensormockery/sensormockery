#ifndef _MOCK
#define _MOCK

typedef enum WaveType
{
    Sawtooth,
    Rectangular,
    Triangular,
    Sine
} waveType;

double getNormVal(double x, enum WaveType type);

double mock(double x, double periodLen, enum WaveType type, double low, double high);

double accelerometerMock(double x, enum WaveType type, double noiseCoeff);

double gyroscopeMock(double x, enum WaveType type, double noiseCoeff);

#endif