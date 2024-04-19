#include"SuDungDichVu.h"
SuDungDichVu:: SuDungDichVu(int maSd, int maKh, int madv, int sl, string date)
{
    this->maSuDung = maSd;
    this->maKh = maKh;
    this->maDv = maDv;
    this->soLuong = sl;
    this->ngaySuDung = date;
}
SuDungDichVu::~SuDungDichVu()
{

}
int SuDungDichVu:: getMaSuDung() const
{
    return maSuDung;
}
void SuDungDichVu::setMaSuDung(int ma)
{
    this->maSuDung = ma;
}
int SuDungDichVu:: getMaKh() const
{
    return this->maKh;
}
void SuDungDichVu:: setMaKh(int ma)
{
    this->maKh = ma;
}
int SuDungDichVu:: getMaDv() const
{
    return maDv;
}
void SuDungDichVu:: setMaDv(int maDv)
{
    this->maDv = maDv;
}
// Getter và Setter cho soLuong
int SuDungDichVu:: getSoLuong() const
{
    return soLuong;
}
void SuDungDichVu:: setSoLuong(int soLuong)
{
    this->soLuong = soLuong;
}
// Getter và Setter cho ngaySuDung
string SuDungDichVu:: getNgaySuDung() const
{
    return ngaySuDung ;
}
void SuDungDichVu:: setNgaySuDung(string ngaySuDung)
{
    this->ngaySuDung = ngaySuDung;
}
ostream& operator<< (ostream& o, const SuDungDichVu& suD)
{
    o << left << setw(5)<<suD.maDv << setw(5) <<suD.maKh
    << setw(5)<< suD.maDv<<setw(5) <<suD.soLuong<<setw(12) << suD.ngaySuDung;

    return o;
}