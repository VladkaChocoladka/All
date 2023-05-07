#pragma once
#include "skyBodies.h"
class Stars :
    public skyBodies
{
private:
    long long distance;
    char Spectrum;
public:
    //Stars(long long m, long long r, long long v, long long t, string name, long long distance, char Spectrum) :skyBodies(m, r, v, t, name) ;
    Stars(long long m, long long r, long long v, long long t, string name, long long distance, char Spectrum) : skyBodies(m, r, v, t, name)
    {
        this->distance = distance;
        this->Spectrum = Spectrum;
    }
    void setDistance(long long distance);
    void setSpectrum(char Spectrum);

    long long getDistance();
    char getSpectrum();
    
    string Color();
};

