#ifndef DATPHONG_H
#define DATPHONG_H

#include <iostream>
#include <string>
using namespace std;

class DatPhong
{
private:
    int maDat;
    int maPhong;
    int maKhach;
    std::string ngayDat;
    std::string ngayTra;

public:
    // Getter methods
    int getMaDat() const;
    int getMaPhong() const;
    int getMaKhach() const;
    string getNgayDat() const;
    string getNgayTra() const;

    // Setter methods
    void setMaDat(int maDat);
    void setMaPhong(int maPhong);
    void setMaKhach(int maKhach);
    void setNgayDat(string ngayDat);
    void setNgayTra(string ngayTra);
};

#endif // DATPHONG_H
