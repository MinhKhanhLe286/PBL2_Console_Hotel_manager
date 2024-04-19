#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
class DichVu
{
    int maDichVu;
    string tenDichVu;
    double giaDichVu;

    public:
        DichVu(int =0, string = "null", double =0);
        ~DichVu();
     // Getter setter
        int getMaDichVu() const;
        void setMaDichVu(int );
        string getTenDichVu() const;
        void setTenDichVu(string);
        double getGiaDichVu() const;
        void setGiaDichVu(double );
        
        friend ostream& operator<< (ostream& , const DichVu&);
        friend istream& operator>> (istream& , DichVu&);
        void DocTuFile (string );
};