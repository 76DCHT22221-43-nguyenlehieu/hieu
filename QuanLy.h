#ifndef QUANLY_H
#define QUANLY_H

#include "Nguoi.h"

class QuanLy : virtual public Nguoi
{
protected:
    double PhuCapQuanLy;

public:
    QuanLy(string HoTen = "", int NamSinh = 0,
           double PhuCapQuanLy = 0);

    virtual void xuat();

    virtual ~QuanLy();
};

#endif