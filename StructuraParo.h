#pragma once
#include<iostream>

class StructuraParo
{
private:
    int first;
    int second; 
public:
   
    void Init(int nominal, int quantity);
    void Read();
    void Display();
    int summa();
};

