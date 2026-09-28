#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "Nguoi.h"

class NhanVien : virtual public Nguoi
{
protected:
    string MaNV;
    double LuongCoBan;

public:
    NhanVien(string HoTen = "", int NamSinh = 0,
             string MaNV = "", double LuongCoBan = 0);

    virtual double TinhLuong() = 0;

    virtual void xuat();

    virtual ~NhanVien();
};

#endif