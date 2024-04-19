#include"PhongKhachSan.h"
class QuanLyPhong
{
    public:
        vector<PhongKhachSan> Dsphong;
    public:
        QuanLyPhong ();
        ~QuanLyPhong();
        void ThemPhong();
        void XoaPhong();
        void ChinhSuaPhong();
        void DsDocTuFile();
        void XuatPhongSuDung();
        void XuatAllPhong();
        int getsize();
        PhongKhachSan& operator=(int index);
};