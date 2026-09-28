#include "NhanVien.h"
#include<iomanip>

NhanVien::NhanVien(string HoTen, int NamSinh,
                   string MaNV, double LuongCoBan)
    : Nguoi(HoTen, NamSinh)
{
    this->MaNV = MaNV;
    this->LuongCoBan = LuongCoBan;
}

void NhanVien::xuat()
{
    Nguoi::xuat();
    cout << "Ma nhan vien: " << MaNV << endl;
    cout << fixed << setprecision(0);
    cout << "Luong co ban: " << LuongCoBan << endl;
}

NhanVien::~NhanVien()
{
}