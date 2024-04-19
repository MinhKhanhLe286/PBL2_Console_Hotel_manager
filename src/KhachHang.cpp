#include "KhachHang.h"
KhachHang :: KhachHang (int  Ma, string  HoTen, string  DiaChi, string SDT)
{
    this->MaKhachHang = Ma;
    this->HoTen = HoTen;
    this->DiaChi = DiaChi;
    this->SoDienThoai= SDT;
}
KhachHang::~KhachHang()
{

}
int KhachHang :: getMaKhachHang() const
{
    return MaKhachHang;
}
string KhachHang :: getHoTen() const
{
    return HoTen;
}

string KhachHang ::  getDiaChi() const
{
    return DiaChi;
}
string KhachHang :: getSoDienThoai() const 
{
    return SoDienThoai;
}

void KhachHang :: setMaKhachHang(int ID)
{
    this->MaKhachHang = ID;
}
void KhachHang :: setHoTen(string name)
{
    this->HoTen = name;
}

void KhachHang :: setDiaChi(string DC)
{
    this->DiaChi = DC;
}
void KhachHang :: setSoDienThoai(string numberP)
{
    this->SoDienThoai = numberP;
}
ostream &operator<<(ostream& o, const KhachHang& Kh)
{
    o<< left << setw(9) << Kh.MaKhachHang << setw(18) <<Kh.HoTen 
        <<setw(18) << Kh.DiaChi << setw(11) << Kh.SoDienThoai;
    
    return o;
}
istream &operator>>(istream & i, KhachHang & Kh)
{
    cout<< "Nhap Ma Khach Hang: ";
    i >> Kh.MaKhachHang;
    cout << "Nhap Ho Ten: ";
    getline(i >> ws , Kh.HoTen) ; 
    cout << "Nhap Dia Chi: ";
    getline(i >> ws, Kh.DiaChi);
    cout << "Nhap So Dien Thoai: ";
    getline(i >> ws, Kh.SoDienThoai);

    return i;
}
void KhachHang :: DocTuFile(string line)
{
    stringstream iss(line);
    iss >> MaKhachHang;
    iss.ignore(1);
    getline(iss, HoTen , ',');
    iss.ignore(1);
    getline(iss,DiaChi ,',');
    iss.ignore(1);
    getline(iss,SoDienThoai,',') ;
}