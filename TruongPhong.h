#ifndef TRUONGPHONG_H
#define TRUONGPHONG_H

#include "NhanVien.h"
#include "QuanLy.h"

class TruongPhong : public NhanVien, public QuanLy
{
private:
    int SoNamKinhNghiem;

public:
    TruongPhong(string HoTen = "", int NamSinh = 0,
                string MaNV = "", double LuongCoBan = 0,
                double PhuCapQuanLy = 0,
                int SoNamKinhNghiem = 0);

    double TinhLuong();

    void xuat();
};

#endif