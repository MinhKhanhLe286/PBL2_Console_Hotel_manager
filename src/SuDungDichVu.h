// #include<iostream>
// #include<iomanip>
// #include<vector>
// #include<string>
// #include<fstream>
// #include<sstream>
// using namespace std;
#include"QUANLYDichVu.h"
#include"QUANLYKhach.h"
class SuDungDichVu : public QLKhachHang, QuanLyDichVu
{
    int maSuDung;
    int maKh;
    int maDv;
    int soLuong;
    string ngaySuDung;
    public:
        SuDungDichVu (int=0, int=0, int =0, int =0, string= "null");
        ~SuDungDichVu();
        int getMaSuDung() const;
        void setMaSuDung(int);
        int getMaKh() const;
        void setMaKh(int );
        int getMaDv() const;
        void setMaDv(int);
    // Getter và Setter cho soLuong
        int getSoLuong() const;
        void setSoLuong(int);
    // Getter và Setter cho ngaySuDung
        string getNgaySuDung() const;
        void setNgaySuDung(string);
        friend ostream& operator<< (ostream& , const SuDungDichVu& );
};