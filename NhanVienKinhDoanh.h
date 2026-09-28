#ifndef NHANVIENKINHDOANH_H
#define NHANVIENKINHDOANH_H

#include "NhanVien.h"

class NhanVienKinhDoanh : public NhanVien
{
private:
    double DoanhSo;

public:
    NhanVienKinhDoanh(string HoTen = "", int NamSinh = 0,
                      string MaNV = "", double LuongCoBan = 0,
                      double DoanhSo = 0);

    double TinhLuong();

    void xuat();
};

#endif