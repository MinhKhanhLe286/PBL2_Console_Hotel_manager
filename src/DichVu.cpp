#include"DichVu.h"
DichVu :: DichVu(int ma, string name, double gia)
{
    this->maDichVu = ma;
    this->tenDichVu = name;
    this->giaDichVu = gia;
}
DichVu :: ~DichVu()
{

}
int DichVu::getMaDichVu() const {
    return maDichVu;
}
void DichVu::setMaDichVu(int ma) {
    maDichVu = ma;
}

string DichVu::getTenDichVu() const {
    return tenDichVu;
}
void DichVu::setTenDichVu(string ten) {
    tenDichVu = ten;
}
double DichVu::getGiaDichVu() const {
    return giaDichVu;
}
void DichVu::setGiaDichVu(double gia) {
    giaDichVu = gia;
}
ostream& operator<< (ostream& o , const DichVu& dv)
{
    o<< left << setw(5)<< dv.maDichVu << setw(18)<< dv.tenDichVu << setw(8) << dv.giaDichVu; 
    return o;
}
istream& operator>> (istream& i, DichVu& dv)
{
    cout<< "Nhap ma dich vu: "; 
    cin >> dv.maDichVu;
    cout<< "Nhap ten dich Vu: ";
    getline(cin >> ws, dv.tenDichVu);
    cout <<"Nhap gia dich vu: ";
    cin >> dv.giaDichVu;

    return i;
}
void DichVu :: DocTuFile (string line)
{
    istringstream iss(line);
    iss >> maDichVu;
    iss.ignore();
    getline(iss,tenDichVu,',');
    iss >> giaDichVu;
}
