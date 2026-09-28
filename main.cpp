#include <iostream>
#include <string>

#include "NhanVienVanPhong.h"
#include "NhanVienKinhDoanh.h"
#include "TruongPhong.h"

using namespace std;

int main()
{
    int n;

    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    NhanVien** ds = new NhanVien*[n];

    for (int i = 0; i < n; i++)
    {
        int loai;

        cout << "\nNhan vien thu " << i + 1 << endl;
        cout << "1. Nhan vien van phong" << endl;
        cout << "2. Nhan vien kinh doanh" << endl;
        cout << "3. Truong phong" << endl;
        cout << "Chon: ";
        cin >> loai;

        string HoTen, MaNV;
        int NamSinh;
        double LuongCoBan;

        cin.ignore();

        cout << "Ho ten: ";
        getline(cin, HoTen);

        cout << "Nam sinh: ";
        cin >> NamSinh;

        cout << "Ma nhan vien: ";
        cin >> MaNV;

        cout << "Luong co ban: ";
        cin >> LuongCoBan;

        if (loai == 1)
        {
            int SoNgayLamViec;

            cout << "So ngay lam viec: ";
            cin >> SoNgayLamViec;

            ds[i] = new NhanVienVanPhong(
                HoTen, NamSinh, MaNV,
                LuongCoBan, SoNgayLamViec
            );
        }
        else if (loai == 2)
        {
            double DoanhSo;

            cout << "Doanh so: ";
            cin >> DoanhSo;

            ds[i] = new NhanVienKinhDoanh(
                HoTen, NamSinh, MaNV,
                LuongCoBan, DoanhSo
            );
        }
        else
        {
            double PhuCapQuanLy;
            int SoNamKinhNghiem;

            cout << "Phu cap quan ly: ";
            cin >> PhuCapQuanLy;

            cout << "So nam kinh nghiem: ";
            cin >> SoNamKinhNghiem;

            ds[i] = new TruongPhong(
                HoTen, NamSinh, MaNV,
                LuongCoBan, PhuCapQuanLy,
                SoNamKinhNghiem
            );
        }
    }

    cout << "\n========== DANH SACH ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n----- Nhan vien " << i + 1 << " -----\n";
        ds[i]->xuat();
    }

    for (int i = 0; i < n; i++)
    {
        delete ds[i];
    }

    delete[] ds;

    return 0;
}