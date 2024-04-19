#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
class KhachHang
{
    int MaKhachHang;
    string HoTen;
    string DiaChi;
    string SoDienThoai;
    public:
        KhachHang(int=0, string="null",string="null",string="null" );
        ~KhachHang();
        
        int getMaKhachHang() const;
        string getHoTen() const;
        string getDiaChi() const;
        string getSoDienThoai() const;

        void setMaKhachHang(int Id);
        void setHoTen(string);
        void setDiaChi(string);
        void setSoDienThoai(string);

        friend ostream& operator<< (ostream& , const KhachHang&);
        friend istream& operator>> (istream& , KhachHang&);
        void DocTuFile (string );
};