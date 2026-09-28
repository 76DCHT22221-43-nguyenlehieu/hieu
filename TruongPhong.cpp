#include "TruongPhong.h"
#include<iomanip>

TruongPhong::TruongPhong(string HoTen, int NamSinh,
                         string MaNV, double LuongCoBan,
                         double PhuCapQuanLy,
                         int SoNamKinhNghiem)
    : Nguoi(HoTen, NamSinh),
      NhanVien(HoTen, NamSinh, MaNV, LuongCoBan),
      QuanLy(HoTen, NamSinh, PhuCapQuanLy)
{
    this->SoNamKinhNghiem = SoNamKinhNghiem;
}

double TruongPhong::TinhLuong()
{
    return LuongCoBan
         + PhuCapQuanLy
         + SoNamKinhNghiem * 500000;
}

void TruongPhong::xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Nam sinh: " << NamSinh << endl;
    cout << "Ma nhan vien: " << MaNV << endl;
    cout << "Luong co ban: " << LuongCoBan << endl;
    cout << "Phu cap quan ly: " << PhuCapQuanLy << endl;
    cout << "So nam kinh nghiem: " << SoNamKinhNghiem << endl;
    cout << fixed << setprecision(0);
    cout << "Luong: " << TinhLuong() << endl;
}