#pragma once

#include <iostream>
using namespace std;


class Bottle{
    private:
    long double Volume; // Объём 
    long double FillingPer; // Процент наполнения
    
    public:
    Bottle(): Volume(0), FillingPer(0) {}
    Bottle(long double v): Volume(v), FillingPer(0) {}
    Bottle(long double v, long double f): Volume(v), FillingPer(f) {}
    void GetBottle();
    void PrintBottle();
    friend int DataValidation(Bottle a, Bottle b);
    friend void VolumeComparison(Bottle a, Bottle b);
    friend void FullnessComparison(Bottle a, Bottle b);
    Bottle operator+ (Bottle capacity2);
    Bottle operator- (Bottle capacity2);
    void operator>(Bottle capacity2);
    void operator<(Bottle capacity2);
    ~Bottle(){}
};

Bottle operator"" _bot(long double vol);