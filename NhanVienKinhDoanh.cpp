#include "NhanVienKinhDoanh.h"
#include <iomanip>

NhanVienKinhDoanh::NhanVienKinhDoanh(string HoTen, int NamSinh,
                                     string MaNV, double LuongCoBan,
                                     double DoanhSo)
    : Nguoi(HoTen, NamSinh),
      NhanVien(HoTen, NamSinh, MaNV, LuongCoBan)
{
    this->DoanhSo = DoanhSo;
}

double NhanVienKinhDoanh::TinhLuong()
{
    return LuongCoBan + DoanhSo * 0.1;
}

void NhanVienKinhDoanh::xuat()
{
    NhanVien::xuat();
    cout << "Doanh so: " << DoanhSo << endl;
	cout << fixed << setprecision(0);
    cout << "Luong: " << TinhLuong() << endl;
}