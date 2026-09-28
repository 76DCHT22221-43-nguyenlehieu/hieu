#include "QuanLy.h"

QuanLy::QuanLy(string HoTen, int NamSinh,
               double PhuCapQuanLy)
    : Nguoi(HoTen, NamSinh)
{
    this->PhuCapQuanLy = PhuCapQuanLy;
}

void QuanLy::xuat()
{
    Nguoi::xuat();
    cout << "Phu cap quan ly: " << PhuCapQuanLy << endl;
}

QuanLy::~QuanLy()
{
}