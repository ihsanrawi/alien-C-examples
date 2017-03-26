//
//  main.cpp
//  Alien
//
//  Copyright © 2017 Flavio. All rights reserved.
//

#include <iostream>
#include "Alien.hpp"

int main(int argc, const char * argv[]) {
    
    Alien et1(100, 40, "ET1");
    Alien et2(130, 23, "ET2");
    Alien et3(130, 23);
    
    et1.CalcLightYears();
    et2.CalcLightYears();
    et3.CalcLightYears();
}
