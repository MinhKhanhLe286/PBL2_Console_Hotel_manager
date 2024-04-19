#include"PhongKhachSan.h"

// Constructor
PhongKhachSan::PhongKhachSan(int ma, string loai, double gia, bool trangThai)
    : maPhong(ma), loaiPhong(loai), giaPhong(gia), trangThai(trangThai)
{
}
PhongKhachSan :: ~PhongKhachSan()
{
}
// Getter methods
int PhongKhachSan::getMaPhong() const
{
    return maPhong;
}

string PhongKhachSan::getLoaiPhong() const
{
    return loaiPhong;
}

double PhongKhachSan::getGiaPhong() const
{
    return giaPhong;
}

bool PhongKhachSan::getTrangThai() const
{
    return trangThai;
}

// Setter methods
void PhongKhachSan::setMaPhong(int ma)
{
    maPhong = ma;
}

void PhongKhachSan::setLoaiPhong(string loai)
{
    loaiPhong = loai;
}

void PhongKhachSan::setGiaPhong(double gia)
{
    giaPhong = gia;
}

void PhongKhachSan::setTrangThai(bool status)
{
    trangThai = status;
}
ostream& operator<< (ostream& o , const PhongKhachSan& ph)
{
    o<< left << setw(10) << ph.maPhong << setw(15) <<ph.loaiPhong 
        <<setw(10) << ph.giaPhong;
    if(ph.trangThai == 0)
    {
        o <<left << setw(14) << "Trong";
    }
    else if (ph.trangThai ==1)
    {
        o<< left << setw(16) << "Dang Su Dung";
    }
    return o;
}
istream& operator>> (istream& i, PhongKhachSan& ph)
{
    cout << "Nhap ma Phong: ";
    i >> ph.maPhong;
    cout << "Nhap loai Phong(Don, Doi, Gia dinh, VIP, suite): ";
    getline(i>>ws , ph.loaiPhong);
    cout << "Nhap Gia Phong: ";
    i >> ph.giaPhong;
    cout <<"Nhap trang thai Phong: ";
    i>> ph.trangThai;

    return i;
}
void PhongKhachSan ::DocTuFile (string line )
{
    stringstream iss(line);
    iss >> maPhong;
    iss.ignore(1);
    getline(iss, loaiPhong , ',');
    iss.ignore(1);
    iss >> giaPhong;
    iss.ignore(1);
    iss >> trangThai;
    iss.ignore(1);
}