#include "QUANLYKHACH.h"
QLKhachHang ::QLKhachHang()
{
}
QLKhachHang ::~QLKhachHang()
{
    dsKhachHang.clear();
}
void QLKhachHang ::ThemKhachHang()
{
    KhachHang Kh; 
    bool ok=true;
    if (dsKhachHang.size() == 0)
    {
        cin>> Kh;
        dsKhachHang.push_back(Kh);
        exit;
    }
    else
    {
        bool okk = true; int dem;
        while(ok)
        {
            cout << "Nhap Thong Tin Khach Hang: "<<endl;
            cin >> Kh;
            for(int i =0 ; i<dsKhachHang.size(); i++)
            {
                if(Kh.getMaKhachHang() == dsKhachHang[i].getMaKhachHang())
                {
                    cout << "Ma Khach Hang da bi trung" << endl << endl;
                    okk = false;
                    break;
                }
                else
                {
                    dem = i+1;
                    cout <<endl;
                }
            }
            if(dem == dsKhachHang.size())
            {
                cout << "Them Khach Hang thanh cong" << endl;
                dsKhachHang.push_back(Kh);
                return;
            }
            if(okk == false)
            {
                char luachon;
                cout<<"Nhan 1 phim bat ky de thu lai"<<endl;
                cout<<"Nhap 0 de thoat "<<endl;
                cout << endl;
                cout<<"Nhap Lua Chon: ";
                cin>>luachon;
                switch (luachon)
                {
                case '0':
                    ok=false;
                    break;
                
                default:
                    ok=true;
                    break;
                }
            }
        }
    }
}
void QLKhachHang ::XoaKhachHang()
{
    int dem = 1;
    bool ok = false; 
    bool okk = true;
    if (dsKhachHang.size() == 0)
    {
        cout << "Danh sanh khanh hang dang rong\nHay them khach hang roi thu lai " << endl;
        exit;
    }
    else
    {
        while(okk)
        {
            int IDkhachhang; int csremove;
            cout << "Nhap ma Khach Hang can xoa: ";
            cin >> IDkhachhang;
            for (int i = 0; i < dsKhachHang.size(); i++)
            {
                if (dsKhachHang[i].getMaKhachHang() == IDkhachhang)
                {
                    csremove=i;
                    ok = true;
                    break;
                }
                else
                {
                    dem = i + 1;
                }
            }
            if(ok == true)
            {
                vector<KhachHang> newDs;
                for(int i=0 ; i< csremove; i++)
                {
                    newDs.push_back(dsKhachHang[i]);
                }
                for (int i = csremove+1 ; i<dsKhachHang.size();i++)
                {
                    newDs.push_back(dsKhachHang[i]);
                }
                dsKhachHang.clear();
                dsKhachHang = newDs;
                newDs.clear();
                okk = false;
                break;
                system("pause");
            }
            if (dem == dsKhachHang.size())
            {
                cout << "\tID khach hang khong ton tai trong danh sach quan li" << endl;
                cout << "Nhan 1 phim bat ki thu lai " << endl;
                cout << "Nhan phim 0 de thoat ";
                char luachon;
                cout << endl;
                cout << "Nhap Lua chon: ";
                cin >> luachon;
                switch (luachon)
                {
                case '0':
                    okk = false;
                    break;

                default:
                    okk = true;
                    break;
                }
            }
        }
    }
}
void QLKhachHang ::ChinhSuaKhachHang()
{
    bool ok = true;
    if (dsKhachHang.size() == 0)
    {
        cout << "Danh sanh khanh hang dang rong\nHay them khach hang roi thu lai " << endl;
        exit;
    }
    else
    {
        while (ok)
        {
            int maKh;
            int dem = 1;
            cout << "Nhap ma Khach Hang: ";
            cin >> maKh;
            cin.ignore();
            for (int i = 0; i < dsKhachHang.size(); i++)
            {
                if (dsKhachHang[i].getMaKhachHang() == maKh)
                {
                    int luachon;
                    string newN;
                    // cout<< "Nhap ma khach hang hop le " <<endl;
                    cout << "\t###### BANG CHINH SUA THONG TIN ########" << endl;
                    cout << "\t1) Chinh sua Ho Ten khach hang" << endl;
                    cout << "\t2) Chinh sua Dia Chi khach hang" << endl;
                    cout << "\t3) Chinh sua So Dien Thoai khach hang" << endl;
                    cout << endl;
                    cout << "Nhap lua chon: ";
                    cin >> luachon;
                    switch (luachon)
                    {
                    case 1:
                        cout << "Nhap Ho Ten moi cua khach hang" << endl;
                        getline(cin >> ws, newN);
                        dsKhachHang[i].setHoTen(newN);
                        cout << "Chinh sua thanh cong" << endl;
                        break;
                    case 2:
                        cout << "Nhap Dia Chi Moi cua khach hang" << endl;
                        getline(cin >> ws, newN);
                        dsKhachHang[i].setDiaChi(newN);
                        cout << "Chinh sua thanh cong" << endl;
                        break;
                    case 3:
                        cout << "So Dien Thoai Moi cua khach hang" << endl;
                        getline(cin >> ws, newN);
                        dsKhachHang[i].setSoDienThoai(newN);
                        cout << "Chinh sua thanh cong" << endl;
                        break;
                    default:
                        cout << "Khong co lua chon tren" << endl;
                        system("pause");
                        break;
                    }
                    ok = false;
                    break;
                }
                else
                {
                    dem = i + 1;
                }
            }
            if (dem == dsKhachHang.size())
            {
                cout << "\tID khach hang khong ton tai trong danh sach quan li" << endl;
                cout << "Nhan 1 phim bat ki thu lai " << endl;
                cout << "Nhan phim 0 de thoat ";
                char luachon;
                cout << endl;
                cout << "Nhap Lua chon: ";
                cin >> luachon;
                switch (luachon)
                {
                case '0':
                    ok = false;
                    break;

                default:
                    ok = true;
                    break;
                }
            }
        }
    }
}
void QLKhachHang ::DsDocTuFile()
{
    ifstream fileInput;
    fileInput.open("D:\\MyPbl2\\File\\KhachHang.txt");
    if (fileInput.fail())
    {
        cout << "Khong the mo file KhachHang";
        exit;
    }
    else
    {
        string line;
        KhachHang kh;
        while (getline(fileInput, line))
        {
            kh.DocTuFile(line);
            dsKhachHang.push_back(kh);
        }
        fileInput.close();
    }
}
void QLKhachHang ::XuatDSKhachHang()
{
    cout << "\t####### DANH SACH KHACH  HANG #########" << endl;
    cout << left << setw(9) << "MA KHACH" << setw(18) << "  HO TEN"
         << setw(15) << "DIA CHI " << setw(10) << " SO DIEN THOAI " << endl;
    for (int i = 0; i < dsKhachHang.size(); i++)
    {
        cout << dsKhachHang[i] << endl;
    }
}
