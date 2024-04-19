#include "QUANLYDichVu.h"
QuanLyDichVu:: QuanLyDichVu()
{

}
QuanLyDichVu:: ~QuanLyDichVu()
{
    DsDichVu.clear();
}
void QuanLyDichVu:: ThemDichVu()
{
    DichVu dv; 
    bool ok=true;
    if (DsDichVu.size() == 0)
    {
        cin>> dv;
        DsDichVu.push_back(dv);
        return;
    }
    else
    {
        bool okk = true; int dem;
        while(ok)
        {
            cout << "Nhap Thong Tin Dich Vu: "<<endl;
            cin >> dv;
            for(int i =0 ; i<DsDichVu.size(); i++)
            {
                if(dv.getTenDichVu() == DsDichVu[i].getTenDichVu())
                {
                    cout << "Ten Dich Vu da bi trung" << endl << endl;
                    okk = false;
                    break;
                }
                else
                {
                    dem = i+1;
                    cout <<endl;
                }
            }
            if(dem == DsDichVu.size())
            {
                cout << "Them Dich Vu Moi thanh cong" << endl;
                DsDichVu.push_back(dv);
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

void QuanLyDichVu:: ChinhSuaDichVu()
{
    bool ok = true;
    if (DsDichVu.size() == 0)
    {
        cout << "Danh sanh Dich Vu dang rong\nHay them khach hang roi thu lai " << endl;
        exit;
    }
    else
    {
        while (ok)
        {
            int maDv;
            int dem = 1;
            cout << "Nhap ma Dich Vu Can Cinh Sua: ";
            cin >> maDv;
            cin.ignore();
            for (int i = 0; i < DsDichVu.size(); i++)
            {
                if (DsDichVu[i].getMaDichVu() == maDv)
                {
                    int luachon;
                    string newN; double giaN;
                    // cout<< "Nhap ma khach hang hop le " <<endl;
                    cout << "\t###### BANG CHINH SUA THONG TIN ########" << endl;
                    cout << "\t1) Chinh sua Ten Dich Vu" << endl;
                    cout << "\t2) Chinh sua Gia Dich Vu" << endl;
                    cout << endl;
                    cout << "Nhap lua chon: ";
                    cin >> luachon;
                    switch (luachon)
                    {
                    case 1:
                        cout << "Nhap loai Dich Vu moi" << endl;
                        getline(cin >> ws, newN);
                        DsDichVu[i].setTenDichVu(newN);
                        cout << "Chinh sua thanh cong" << endl;
                        break;
                    case 2:
                        cout << "Nhap Gia Dich Vu moi " << endl;
                        cin>>giaN;
                        DsDichVu[i].setGiaDichVu(giaN);
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
            if (dem == DsDichVu.size())
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
void QuanLyDichVu:: XoaDichVu()
{
    int dem = 1;
    bool ok = false; 
    bool okk = true;
    if (DsDichVu.size() == 0)
    {
        cout << "Danh sanh Dich Vu dang rong\nHay them khach hang roi thu lai " << endl;
        exit;
    }
    else
    {
        while(okk)
        {
            int IDdichvu; int csremove;
            cout << "Nhap ma Dich can xoa: ";
            cin >> IDdichvu;
            for (int i = 0; i < DsDichVu.size(); i++)
            {
                if (DsDichVu[i].getMaDichVu() == IDdichvu)
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
                vector<DichVu> newDs;
                for(int i=0 ; i< csremove; i++)
                {
                    newDs.push_back(DsDichVu[i]);
                }
                for (int i = csremove+1 ; i<DsDichVu.size();i++)
                {
                    newDs.push_back(DsDichVu[i]);
                }
                DsDichVu.clear();
                DsDichVu = newDs;
                newDs.clear();
                okk = false;
                break;
                system("pause");
            }
            if (dem == DsDichVu.size())
            {
                cout << "\tMa Dich Vu khong ton tai trong danh sach quan li" << endl;
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
void QuanLyDichVu:: DsDocTuFileDv()
{
    ifstream file;
    file.open("D:\\MyPbl2\\File\\DichVu.txt");
    if (file.fail())
    {
        cout << "Khong the mo file DichVu";
        exit;
    }
    else
    {
        string line;
        DichVu dv;
        while (getline(file, line))
        {
            dv.DocTuFile(line);
            DsDichVu.push_back(dv);
        }
        cout<< "Doc File Thanh Cong" << endl;
        file.close();
    }
}
void QuanLyDichVu :: XuatDSDichVu()
{
    cout<< "########### DANH SACH DICH VU DANG CO ###############"<<endl;
    cout <<left << setw(8)<< "MaDv" << setw(14)<<"Ten Dich Vu"<< setw(8) << "Gia DichVu" << endl;
    for(int i=0 ; i<DsDichVu.size(); i++)
    {
        cout << DsDichVu[i] << endl;
    }
}
