#include "DatPhong.h"

// Getter methods
int DatPhong::getMaDat() const
{
    return maDat;
}

int DatPhong::getMaPhong() const
{
    return maPhong;
}

int DatPhong::getMaKhach() const
{
    return maKhach;
}

std::string DatPhong::getNgayDat() const
{
    return ngayDat;
}

std::string DatPhong::getNgayTra() const
{
    return ngayTra;
}

// Setter methods
void DatPhong::setMaDat(int maDat)
{
    this->maDat = maDat;
}

void DatPhong::setMaPhong(int maPhong)
{
    this->maPhong = maPhong;
}

void DatPhong::setMaKhach(int maKhach)
{
    this->maKhach = maKhach;
}

void DatPhong::setNgayDat(string ngayDat)
{
    this->ngayDat = ngayDat;
}

void DatPhong::setNgayTra(string ngayTra)
{
    this->ngayTra = ngayTra;
}
