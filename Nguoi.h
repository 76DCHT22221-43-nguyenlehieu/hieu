#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
#include <string>
using namespace std;

class Nguoi
{
protected:
    string HoTen;
    int NamSinh;

public:
    Nguoi(string HoTen = "", int NamSinh = 0);

    virtual void xuat();

    virtual ~Nguoi();
};

#endif