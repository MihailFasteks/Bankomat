//
//  main.cpp
//  Bank
//
//  Created by Michalis on 25.09.2023.
//

#include <iostream>
#include "bankomat.hpp"
#include <string.h>
using namespace std;
int main() {
    Bankomat a;
    a.Init("F10567", 0, 10, 10000);
    a.Print();
    a.banknoteInput();
    a.Print();
    a.takeOFFmoney();
    a.Print();
    double current=a.GetCurrent();
    string s=to_string(current);
    cout<<s<<endl;
    return 0;
}
