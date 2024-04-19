#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
class PhongKhachSan
{
    int maPhong;
    string loaiPhong;
    double giaPhong;
    bool trangThai;
    public:
        PhongKhachSan(int ma = 0, string loai = "", double gia = 0.0, bool trangThai = false);
        ~PhongKhachSan();
    // Getter methods
        int getMaPhong() const;
        string getLoaiPhong() const;
        double getGiaPhong() const;
        bool getTrangThai() const;
    // Setter methods
        void setMaPhong(int ma);
        void setLoaiPhong(string loai);
        void setGiaPhong(double gia);
        void setTrangThai(bool status);

        friend ostream& operator<< (ostream& , const PhongKhachSan& );
        friend istream& operator>> (istream& , PhongKhachSan& );
        void DocTuFile (string );
};
