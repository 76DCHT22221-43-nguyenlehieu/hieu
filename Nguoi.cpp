#include "Nguoi.h"

Nguoi::Nguoi(string HoTen, int NamSinh)
{
    this->HoTen = HoTen;
    this->NamSinh = NamSinh;
}

void Nguoi::xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Nam sinh: " << NamSinh << endl;
}

Nguoi::~Nguoi()
{
}