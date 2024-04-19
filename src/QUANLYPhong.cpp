#include "QUANLYPhong.h"
QuanLyPhong ::QuanLyPhong()
{

}
PhongKhachSan& QuanLyPhong :: operator=(int index)
{
    return Dsphong[index];
}
QuanLyPhong ::~QuanLyPhong()
{
    this->Dsphong.clear();
}
int QuanLyPhong :: getsize()
{
    return Dsphong.size();
}
void QuanLyPhong :: ThemPhong()
{
    PhongKhachSan phong; 
    bool ok=true;
    if (Dsphong.size() == 0)
    {
        cin>> phong;
        Dsphong.push_back(phong);
        exit;
    }
    else
    {
        bool okk = true; int dem;
        while(ok)
        {
            cout << "Nhap Thong Tin Phong Can Them: "<<endl;
            cin >> phong;
            for(int i =0 ; i<Dsphong.size(); i++)
            {
                if(phong.getMaPhong() == Dsphong[i].getMaPhong())
                {
                    cout << "Ma Phong  da bi trung" << endl << endl;
                    okk = false;
                    break;
                }
                else
                {
                    dem = i+1;
                }
            }
            if(dem == Dsphong.size())
            {
                cout << "Them Phong thanh cong" << endl;
                Dsphong.push_back(phong);
                return;
            }
            if(okk == false)
            {
                char luachon;
                cout<<"Nhan 1 phim bat ky de them lai"<<endl;
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
void QuanLyPhong :: XoaPhong()
{
    int dem = 1;
    bool ok = false; 
    bool okk = true;
    if (Dsphong.size() == 0)
    {
        cout << "Danh sanh Phong dang rong\nHay them khach hang roi thu lai " << endl;
        exit;
    }
    else
    {
        while(okk)
        {
            int IDphong; int csremove;
            cout << "Nhap ma Phong can xoa: ";
            cin >> IDphong;
            for (int i = 0; i < Dsphong.size(); i++)
            {
                if (Dsphong[i].getMaPhong() == IDphong)
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
                vector<PhongKhachSan> newDs;
                for(int i=0 ; i< csremove; i++)
                {
                    newDs.push_back(Dsphong[i]);
                }
                for (int i = csremove+1 ; i<Dsphong.size();i++)
                {
                    newDs.push_back(Dsphong[i]);
                }
                Dsphong.clear();
                Dsphong = newDs;
                newDs.clear();
                okk = false;
                break;
                system("pause");
            }
            if (dem == Dsphong.size())
            {
                cout << "\tMa Phong khong ton tai trong danh sach " << endl;
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
void QuanLyPhong :: ChinhSuaPhong()
{
    bool ok = true;
    if (Dsphong.size() == 0)
    {
        cout << "Danh sanh Phong dang rong\nHay them khach hang roi thu lai " << endl;
        exit;
    }
    else
    {
        while (ok)
        {
            int maKh;
            int dem = 1;
            cout << "Nhap ma Phong Can Cinh Sua: ";
            cin >> maKh;
            cin.ignore();
            for (int i = 0; i < Dsphong.size(); i++)
            {
                if (Dsphong[i].getMaPhong() == maKh)
                {
                    int luachon;
                    string newN; double giaN;
                    // cout<< "Nhap ma khach hang hop le " <<endl;
                    cout << "\t###### BANG CHINH SUA THONG TIN ########" << endl;
                    cout << "\t1) Chinh sua loai Phong" << endl;
                    cout << "\t2) Chinh sua Gia Phong" << endl;
                    cout << endl;
                    cout << "Nhap lua chon: ";
                    cin >> luachon;
                    switch (luachon)
                    {
                    case 1:
                        cout << "Nhap loai Phong moi" << endl;
                        getline(cin >> ws, newN);
                        Dsphong[i].setLoaiPhong(newN);
                        cout << "Chinh sua thanh cong" << endl;
                        break;
                    case 2:
                        cout << "Nhap Gia Phong Moi " << endl;
                        cin>>giaN;
                        Dsphong[i].setGiaPhong(giaN);
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
            if (dem == Dsphong.size())
            {
                cout << "\tMa Phong khong ton tai trong danh sach quan li" << endl;
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
void QuanLyPhong :: DsDocTuFile()
{
    ifstream fileInput;
    fileInput.open("D:\\MyPbl2\\File\\PhongKhachSan.txt");
    if (fileInput.fail())
    {
        cout << "Khong the mo file Phong Khach San";
        exit;
    }
    else
    {
        string line;
        PhongKhachSan kh;
        while (getline(fileInput, line))
        {
            kh.DocTuFile(line);
            Dsphong.push_back(kh);
        }
        fileInput.close();
    }
}
void QuanLyPhong :: XuatPhongSuDung()
{
    for(int i=0 ; i<Dsphong.size() ;i++)
    {
        if(Dsphong[i].getTrangThai() == 1)
        {
            cout << Dsphong[i] <<  endl;
        }
    }
}
void QuanLyPhong :: XuatAllPhong()
{
    cout<<left<<setw(10) << "Ma Phong" << setw(11) <<"Loai Phong"
        << setw(8) << "    Gia" << setw(15) << "   Trang Thai" << endl;
    for(int i=0 ; i<Dsphong.size() ;i++)
    {
       cout << Dsphong[i] << endl;
    }    
}