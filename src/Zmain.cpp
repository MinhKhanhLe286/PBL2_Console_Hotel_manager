#include"QUANLYKhach.h"
#include"QUANLYPhong.h"
#include"QUANLYDichVu.h"
#include"DatPhong.h"
// #include"SDatPhong.h"

void ThemKhachHang(QLKhachHang&);
void ThemPhong(QuanLyPhong& );
void ThemDichVu(QuanLyDichVu&);
void XuatThongTin(QLKhachHang& , QuanLyPhong&,QuanLyDichVu& DsDichVu );
void EditThongTin(QLKhachHang&, QuanLyPhong&, QuanLyDichVu& DsDichVu);
void XoaDoiTuong(QLKhachHang&, QuanLyPhong& , QuanLyDichVu& DsDichVu);
void ThemDatPhong(QLKhachHang& , QuanLyPhong& ,vector<DatPhong>&);
void HienThiDanhSachDatPhong(vector<DatPhong>&);
//void ChinhSuaDatPhong(vector<DatPhong>&);
void Menu(QLKhachHang& Dskh , QuanLyPhong& DsPhong , QuanLyDichVu& DsDichVu, vector<DatPhong>& qldp)
{
    bool okkk = true; int luachon;
    while (okkk)
    {
        system("cls");
        cout<<"\t============================================"<<endl;
        cout<<"\t*  CHUONG TRINH QUAN LY PHONG KHACH SAN    *" << endl;
        cout<<"\t============================================"<<endl;
        cout<< "\t1)Them Khach Hang" << endl;
        cout<< "\t2)Them Phong Khach San "<< endl;
        cout<< "\t3)Them Dich Vu "<< endl;
        cout<< "\t4)Xuat Thong Tin "<< endl;
        cout<< "\t5)Edit Thong tin"<< endl;
        cout<< "\t6)Xoa Doi Tuong "<< endl;
        cout<< "\t7)Dat Phong"<< endl;
        cout<< "\t8)Hien thi cac phong da dat "<< endl;
        cout<< "\t0)Exit "<< endl;
        cout<< ""<< endl;
        cout<< "Nhap Lua Chon: "; cin>> luachon;
        
        switch (luachon)
        {
        case 1:
            system("cls");
            ThemKhachHang(Dskh);
            break;
        case 2:
            system("cls");
            ThemPhong(DsPhong);
            break;
        case 3:
            system("cls");
            ThemDichVu(DsDichVu);
            break;
        case 4:
            XuatThongTin(Dskh, DsPhong, DsDichVu);
            break;
        case 5:
            system("cls");
            EditThongTin(Dskh,DsPhong,DsDichVu);
            break;
        case 6:
            XoaDoiTuong(Dskh,DsPhong, DsDichVu);
            break;
        case 7:
            ThemDatPhong(Dskh,DsPhong,qldp);
            break;
        case 8:
            system("cls");
            HienThiDanhSachDatPhong(qldp);
            break;
        case 0:
            okkk = false;
            break;   
        default:
            cout<<"Khong co lua chon tren";
            system("pause");
            cout << endl;
            break;
        }
    }  
}
int main()
{
    QLKhachHang qlkh;  QuanLyPhong qlphong; QuanLyDichVu qldv;
    vector<DatPhong> qldp;
    Menu(qlkh, qlphong, qldv, qldp);

    
    cout <<"Chuong tring da ket thuc \n       Cam on da su dung dich vu";
    return 0;
}
void EditThongTin(QLKhachHang& DsKH, QuanLyPhong& DsPhong, QuanLyDichVu& DsDv)
{
    bool ok=true; int lc;
    while (ok)
    {
        cout <<"\tChinh sua thong tin"<< endl;
        cout<<"1)Sua chua thong tin khach hang "<< endl;
        cout<<"2)Sua chua thong tin phong"<< endl;
        cout<<"3)Sua chhua thong tin dich vu"<< endl;
        cout<<"4)exit "<< endl;
        cout<<endl;
        cout<<"Nhap lua chon: "; cin>> lc;
        switch (lc)
        {
        case 1:
            DsKH.ChinhSuaKhachHang();
            break;
        case 2:
            DsPhong.ChinhSuaPhong();
            break;
        case 3:
            DsDv.ChinhSuaDichVu();
        case 4:
            ok = false;
            break;
        default:
            cout<<"Khong co lua chon  tren "<< endl;
            break;
        }
    } 
}
// void ChinhSuaDatPhong(vector<DatPhong>& dsdp)
// {
//     bool ok = true;
//     if (dsdp.size() == 0)
//     {
//         cout << "Danh sanh khanh hang dang rong\nHay them khach hang roi thu lai " << endl;
//         exit;
//     }
//     else
//     {
//         while (ok)
//         {
//             int maDP;
//             int dem = 1;
//             cout << "Nhap ma DatPhong: ";
//             cin >> maDP;
//             cin.ignore();
//             for (int i = 0; i < dsdp.size(); i++)
//             {
//                 if (dsdp[i].getMaDat() == maDP)
//                 {
//                     int luachon;
//                     string newN;
//                     // cout<< "Nhap ma khach hang hop le " <<endl;
//                     cout << "\t###### BANG CHINH SUA THONG TIN ########" << endl;
//                     cout << "\t1) Chinh sua Ngay Nhan phong" << endl;
//                     cout << "\t2) Chinh sua Ngay Tra phong" << endl;
//                     cout << "\t3) Chinh sua So Dien Thoai khach hang" << endl;
//                     cout << endl;
//                     cout << "Nhap lua chon: ";
//                     cin >> luachon;
//                     switch (luachon)
//                     {
//                     case 1:
//                         cout << "Nhap Ho Ten moi cua khach hang" << endl;
//                         getline(cin >> ws, newN);
//                         dsdp[i].setHoTen(newN);
//                         cout << "Chinh sua thanh cong" << endl;
//                         break;
//                     case 2:
//                         cout << "Nhap Dia Chi Moi cua khach hang" << endl;
//                         getline(cin >> ws, newN);
//                         dsKhachHang[i].setDiaChi(newN);
//                         cout << "Chinh sua thanh cong" << endl;
//                         break;
//                     case 3:
//                         cout << "So Dien Thoai Moi cua khach hang" << endl;
//                         getline(cin >> ws, newN);
//                         dsKhachHang[i].setSoDienThoai(newN);
//                         cout << "Chinh sua thanh cong" << endl;
//                         break;
//                     default:
//                         cout << "Khong co lua chon tren" << endl;
//                         system("pause");
//                         break;
//                     }
//                     ok = false;
//                     break;
//                 }
//                 else
//                 {
//                     dem = i + 1;
//                 }
//             }
//             if (dem == dsKhachHang.size())
//             {
//                 cout << "\tID khach hang khong ton tai trong danh sach quan li" << endl;
//                 cout << "Nhan 1 phim bat ki thu lai " << endl;
//                 cout << "Nhan phim 0 de thoat ";
//                 char luachon;
//                 cout << endl;
//                 cout << "Nhap Lua chon: ";
//                 cin >> luachon;
//                 switch (luachon)
//                 {
//                 case '0':
//                     ok = false;
//                     break;

//                 default:
//                     ok = true;
//                     break;
//                 }
//             }
//         }
//     }
// }
void HienThiDanhSachDatPhong(vector<DatPhong>& dsdp)
{
    cout<< left<< setw(9) <<"Ma Dat"<<setw(12)<<"Ma Khach Hang"<< setw(12)<<"Ma Phong"
        <<setw(12)<<"Ngay Dat"<<setw(12)<<"Ngay Tra"<<endl;
    for(int i=0; i<dsdp.size();i++)
    {
        cout<<left<< setw(9) << dsdp[i].getMaDat() << setw(12) <<dsdp[i].getMaKhach() <<setw(12)
            << dsdp[i].getMaPhong()<<setw(9) << dsdp[i].getNgayDat()<< setw(9)
            << dsdp[i].getNgayTra() << endl;
    }
    system("pause");
}
void ThemDatPhong(QLKhachHang& dskh, QuanLyPhong& dsp,vector<DatPhong>& dsdp)
{
    DatPhong dp;int maDat; string ngayDat; bool ok= true;
    int maKhach; int maPhong; string ngayTra;
    cout<<"Nhap ma dat phong: ";
    cin >>maDat;
    while(ok)
    {
        bool okl= false; int dem=0;
        int i;
        cout <<"Nhap ma phong: ";
        cin >> maPhong;
        for(i=0; i<dsp.getsize(); i++)
        {
            if(dsp.Dsphong[i].getMaPhong()==maPhong)
            {
              okl = true;
              break;  
            }
            else{
                dem= i+1;
            }
        }
        if(dem == dsp.Dsphong.size())
        {
            cout <<"Phog Khong tôn tai"<< endl;
            system("pause");
            return ;
        }
        if (okl == true)
        {
            if(dsp.Dsphong[i].getTrangThai()==0)
            {
                cout <<"Phong hop le"<< endl;
                system("pause");
                break;
            }
            else{
                cout<<"Phong da duoc su dung"<< endl;
                system("pause");
                break;
            }
        }
     
    }
    ok = true;
    while(ok)
    {
        bool okl= false;int dem;
        int i;
        std::cout <<"Nhap ma Khach Hang: ";
        cin >> maKhach;
        for(i=0; i<dsp.getsize(); i++)
        {
            if(dskh.dsKhachHang[i].getMaKhachHang()==maKhach)
            {
              okl = true;
              break;  
            }
            else{
                dem = i+1;
            }
        }
        if(okl == true)
        {
            cout << "Ma khach hang hop le:"<< endl;
            ok = false;
        }
        if(dem == dskh.dsKhachHang.size()){
            cout << "Ma khach hang khong ton tai: "<< endl;
            int lc;
                cout <<"1) nhap lai"<< endl;
                cout <<"0) exit"<< endl;
                cout<<"Nhap lua chon"<< endl;
                cin>> lc;
                switch (lc)
                {
                    case 1:
                        ok= true;
                        system("pause");
                        break;
                    case 2:
                        ok = false;
                        return;
                        break;
                    default:
                        cout<<"Lua chon khong hop le"<< endl;
                        break;
                }
        }
    }
    cout <<"nhap ngay dat phong: ";
    getline(cin>> ws,ngayDat);
    cout << "Nhap ngay tra phong: ";
    getline(cin>> ws, ngayTra);
    dp.setMaDat(maDat); dp.setMaKhach(maKhach); dp.setMaPhong(maPhong);
    dp.setNgayDat(ngayDat); dp.setNgayTra(ngayTra);
    dsdp.push_back(dp);
}
void XoaDoiTuong(QLKhachHang& DsKh, QuanLyPhong& DsPhong, QuanLyDichVu& DsDv)
{
    bool okl = true; int luachon;
    while (okl)
    {
        cout << "===== Xoa Doi Tuong ra khoi Danh Sach ====="<< endl;
        cout << "1)Xoa khach Hang " << endl;
        cout << "2)Xoa Phong" << endl;
        cout << "3) Exit"<<endl;
        cout << endl;
        cout << "Nhap Lua Chon: "; cin >> luachon;
        switch (luachon)
        {
        case 1:
            DsKh.XoaKhachHang();
            system("pause");
            cout<<endl;
            break;
        case 2:
            DsPhong.XoaPhong();
            system("pause");
            cout<<endl;
            break;
            
        case 3:
            okl = false;
            break;            
        default:
            cout << "Khong co lua chon tren "<< endl;
            system("pause");
            cout << endl; 
            break;
        }
    }
}
void XuatThongTin(QLKhachHang& Dskh , QuanLyPhong& DsPhong , QuanLyDichVu& DsDv)
{
    bool okl = true; int luachon;
    while (okl)
    {
        cout << "==========Xuat Thong Tin =========="<< endl;
        cout << "1)Xuat Thong Tin khach Hang " << endl;
        cout << "2)Xuat Thong Tin Phong" << endl;
        cout << "3)Xuat Danh Sach Dich Vu" << endl;
        cout << "4) Exit"<< endl;
        cout << endl;
        cout << "Nhap Lua Chon: "; cin >> luachon;
        switch (luachon)
        {
        case 1:
            Dskh.XuatDSKhachHang();
            system("pause");
            cout<<endl;
            break;
        case 2:
            DsPhong.XuatAllPhong();
            system("pause");
            cout<<endl;
            break;
        case 3:
            DsDv.XuatDSDichVu();
            system("pause");
            cout<< endl;
            break; 
        case 4:
            okl = false;
            break;            
        default:
            cout << "Khong co lua chon tren "<< endl;
            system("pause");
            cout << endl;
            break;
        }
    }
    
}
void ThemPhong(QuanLyPhong& dsphong)
{
    bool okl = true; int luachon;
    while (okl)
    {
        cout << "==========Them Phong Khach San =========="<< endl;
        cout << "1)Nhap tu file " << endl;
        cout << "2)Nhap tu ban phim" << endl;
        cout << "3) Exit"<< endl;
        cout << endl;
        cout << "Nhap Lua Chon: "; cin >> luachon;
        switch (luachon)
        {
        case 1:
            dsphong.DsDocTuFile();
            system("pause");
            cout<<endl;
            break;
        case 2:
            dsphong.ThemPhong();
            system("pause");
            cout<<endl;
            break;
        case 3:
            okl = false;
            break;            
        default:
            cout << "Khong co lua chon tren "<< endl;
            system("pause");
            cout << endl;
            break;
        }
    }
}
void ThemKhachHang(QLKhachHang& dskh )
{
    bool okl = true; int luachon;
    while (okl)
    {
        cout << "==========Them Khach Hang =========="<< endl;
        cout << "1)Nhap tu file " << endl;
        cout << "2)Nhap tu ban phim" << endl;
        cout << "3) Exit"<< endl;
        cout << endl;
        cout << "Nhap Lua Chon: "; cin >> luachon;
        switch (luachon)
        {
        case 1:
            dskh.DsDocTuFile();
            system("pause");
            cout<<endl;
            break;
        case 2:
            dskh.ThemKhachHang();
            system("pause");
            cout<<endl;
            break;
        case 3:
            okl = false;
            break;            
        default:
            cout << "Khong co lua chon tren "<< endl;
            system("pause");
            cout << endl;
            break;
        }
    }
}
void ThemDichVu(QuanLyDichVu& DsDv)
{
    bool okl = true; int luachon;
    while (okl)
    {
        cout << "==========Them Dich Vu =========="<< endl;
        cout << "1)Nhap tu file " << endl;
        cout << "2)Nhap tu ban phim" << endl;
        cout << "3) Exit"<< endl;
        cout << endl;
        cout << "Nhap Lua Chon: "; cin >> luachon;
        switch (luachon)
        {
        case 1:
            DsDv.DsDocTuFileDv();
            system("pause");
            cout<<endl;
            break;
        case 2:
            DsDv.ThemDichVu();
            system("pause");
            cout<<endl;
            break;
        case 3:
            okl = false;
            break;            
        default:
            cout << "Khong co lua chon tren "<< endl;
            system("pause");
            cout << endl;
            break;
        }
    }
}