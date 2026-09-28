#include "NhanVienVanPhong.h"
#include<iomanip>

NhanVienVanPhong::NhanVienVanPhong(string HoTen, int NamSinh,
                                   string MaNV, double LuongCoBan,
                                   int SoNgayLamViec)
    : Nguoi(HoTen, NamSinh),
      NhanVien(HoTen, NamSinh, MaNV, LuongCoBan)
{
    this->SoNgayLamViec = SoNgayLamViec;
}

double NhanVienVanPhong::TinhLuong()
{
    return LuongCoBan + SoNgayLamViec * 200000;
}

void NhanVienVanPhong::xuat()
{
    NhanVien::xuat();
    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
    cout << fixed << setprecision(0);
    cout << "Luong: " << TinhLuong() << endl;
}