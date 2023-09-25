//
//  bankomat.cpp
//  Bank
//
//  Created by Michalis on 25.09.2023.
//
#pragma once

#include "bankomat.hpp"
//#include <iostream>
//#include <string.h>
//using namespace std;

void Bankomat::Init(string c, double s, double minS, double maxS)
{
    iden_code=c;
    current_sum=s;
    min_sum=minS;
    max_sum=maxS;
}
void Bankomat::Print()
{
    cout<<"Identify code of bankomat "<<iden_code<<endl;
    cout<<"Current sum is "<<current_sum<<endl;
    cout<<"Min sum for taking off "<<min_sum<<endl;
    cout<<"Max sum fo taking off "<<max_sum<<endl;
}
double Bankomat::GetCurrent()
{
    return current_sum;
}
void Bankomat::banknoteInput()
{
    double add_sum;
    cout<<"Input your sum to add:";
    cin>>add_sum;
    current_sum=+add_sum;
}
void Bankomat::takeOFFmoney()
{
    int del_sum;
    cout<<"Ваша сумма должна быть кратна 10!"<<endl;
    do {
        cout<<"Input your sum to take off:";
        cin>>del_sum;
        if ((del_sum<min_sum)||(del_sum>max_sum)||(del_sum>current_sum)||(del_sum%10!=0))
        {
            cout<<"Wrong input! Try again!"<<endl;
        }
    }while((del_sum<min_sum)||(del_sum>max_sum)||(del_sum>current_sum));
   int Q[]={1000, 500, 200, 100, 50, 20, 10};
    int x=0;

    for (int i=0; i<7;i++)
    {
        x+=del_sum/Q[i];
        del_sum %=Q[i];
if (x>0)
{
    cout<<"Выдано "<<x<<" купюр(а) с номиналом "<<Q[i]<<endl;
    x=0;
}
    }
    cout<<"Ваш остаток: "<<del_sum<<endl;
    cout<<"Остаток будет зачислен на счет банкомата в качестве комиссии."<<endl;
    current_sum+=del_sum;
}

