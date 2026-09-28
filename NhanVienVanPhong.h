#ifndef NHANVIENVANPHONG_H
#define NHANVIENVANPHONG_H

#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien
{
private:
    int SoNgayLamViec;

public:
    NhanVienVanPhong(string HoTen = "", int NamSinh = 0,
                     string MaNV = "", double LuongCoBan = 0,
                     int SoNgayLamViec = 0);

    double TinhLuong();

    void xuat();
};

#endif