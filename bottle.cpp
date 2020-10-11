#include <iostream>
#include "bottle.h"

using namespace std;

void Bottle::GetBottle(){
    cin >> Volume >> FillingPer;
}

void Bottle::PrintBottle(){
    cout << Volume << " " << FillingPer;
}

Bottle Bottle::operator+ (Bottle capacity2){
    Bottle t;
    t.Volume = Volume;
    t.FillingPer = FillingPer;
    t.FillingPer = (t.Volume * t.FillingPer + capacity2.Volume * capacity2.FillingPer) / Volume;
    if(t.FillingPer > 1){
        t.FillingPer = 1;
    }
    return t; 
}

Bottle Bottle::operator- (Bottle capacity2){
    Bottle t;
    t.Volume = Volume;
    t.FillingPer = FillingPer;
    t.FillingPer = (t.Volume * t.FillingPer - (capacity2.Volume * (1 - capacity2.FillingPer))) / Volume;
    if (t.FillingPer < 0){
        t.FillingPer = 0;
    }
    return t;
}

void Bottle::Bottle::operator>(Bottle capacity2){
    if(Volume > capacity2.Volume){
        cout << "The statement is true!";
    }
    else{
        cout << "The statement is wrong!";
    }
}

void Bottle::Bottle::operator<(Bottle capacity2){
    if(Volume < capacity2.Volume){
        cout << "The statement is true!";
    }
    else{
        cout << "The statement is wrong!";
    }
}

Bottle operator"" _bot(long double vol){
    return Bottle(vol, 1); 
}

