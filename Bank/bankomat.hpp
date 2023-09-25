//  bankomat.hpp
//  Bank
//
//  Created by Michalis on 25.09.2023.
//

#ifndef bankomat_hpp
#define bankomat_hpp

//#include <stdio.h>

#endif /* bankomat_hpp */
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Bankomat
{
    string iden_code;
    double current_sum;
    double min_sum;
    double max_sum;
public:
    void Init(string c, double s, double minS, double maxS);
    void banknoteInput();
    void takeOFFmoney();
    void Print();
    double GetCurrent();
};
