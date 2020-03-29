#pragma once

#ifndef myFirstClass_hpp
#define myFirstClass_hpp

#include <stdio.h>
#include <math.h>
#include <iostream>

class myFirstClass{
    float yeah = 1;
    float noh = 2;
    int maybe = 3;


    public:
    float hiThere = 100.5;
    float myOtherFunc(float x, float y){
        return x * y;
    }
};

#endif 