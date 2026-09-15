#include <iostream>
using namespace std;
struct Diachi
{
    char sonha[25];
    char tenduong[250];
    char quan[25];
    char thanhpho[25];
};

struct Congdan 
{
    char ten[100];
    bool gioitinh;
    char tuoi[3];
    char maCCCD[13];
    Diachi Quequan;
    Diachi Diachithuongtru;
}cd1,cd2;

struct book {
    char tensach[100];
    char tacgia[100];
    float giasach;;

}quyen1;

struct Sinhvien {
    int masv;
    char tensv[100];
}sv1;
void nhapdulieu(Sinhvien dsHB[], int total) {
    for (int i = 0; i < total; i++)
    {
        cout << "Thong tin sinh vien nhan hoc bong thu " << i + 1 << ": \n";
        cout << "Ma sinh vien: ";
        cin >> dsHB[i].masv;
        cin.ignore();
        cout << "Ten sinh vien: ";
        gets_s(dsHB[i].tensv, 100);
        cin.ignore();
    }
}
void xuatdulieu(Sinhvien dsHB[], int total) {
    for (int i = 0; i < total; i++)
    {
        cout << dsHB[i].tensv << ", ma sv: " << dsHB[i].masv << "\n";
    }
}

int main() 
{
    Congdan cd3, cd4;
    cd1 = { {"Vu Binh Minh"},{true},{"15"},{"001211009826"},{{"03"},{" Viet Khe"},{" Thuy Nguyen"},{" Hai Phong"}} };
    cout << "THong tin cong dan la: \n";
    cout << "Ten: " << cd1.ten << "\n";
    cout << "Gioi tinh: " << (cd1.gioitinh == true ? "nam" : "nu") << "\n";
    cout << "Tuoi: " << cd1.tuoi << "\n";
    cout << "MA CCCD: " << cd1.maCCCD << "\n";
    cout << "Que quan: " << cd1.Quequan.sonha << cd1.Quequan.tenduong << cd1.Quequan.quan << cd1.Quequan.thanhpho << "\n \n";

    cout << "Moi ban nhap vao ten sach: ";
    gets_s(quyen1.tensach);
    cout << "Moi ban nhap vao ten tac gia: ";
    gets_s(quyen1.tacgia);
    cout << "Moi ban nhap vao gia sach: ";
    cin >> quyen1.giasach;
    book quyen2 = quyen1;
    quyen2.giasach = 195000;
    cout << "Thong tin quyen nhai la: " << "\n";
    cout << "Ten: " << quyen2.tensach << "\n";
    cout << "Tac gia: " << quyen2.tacgia << "\n";
    cout << "Gia: " << quyen2.giasach << "\n";
    cout << "Dia chi o nho bien quyen1 la: " << &quyen1 << "\n";
    cout << "Dia chi o nho bien quyen2 la: " << &quyen2 << "\n";
    cout << "\n";

    const int total = 4;
    Sinhvien dsHB[total];
    nhapdulieu(dsHB, total);
    cout << "Danh sach hoc sinh nhan hoc bong la: \n";
    xuatdulieu(dsHB, total);
    cout << "\n";

    Sinhvien* psv2;
    psv2 = new Sinhvien;
    sv1 = { 2508,"Nguyen Nam Khanh" };
    *psv2 = { 2209,"Vu Binh Minh" };
    cout << "Thong tin sv1 la: " << sv1.tensv << ", ma: " << sv1.masv << "\n";
    cout << "Thong tin sv2 la: " << psv2->tensv << ", ma: " << psv2->masv << "\n";
    Sinhvien* psv1;
    psv1 = &sv1;
    cout << "Thong tin psv1 la: " << psv1->tensv << ", ma: " << psv1->masv << "\n";
    *psv1 = { 2309,"Linh tien te" };
    cout << "Thong tin psv1 sau doi la: " << psv1->tensv << ", ma: " << psv1->masv << "\n";
    cout << "Thong tin sv1 sau doi la: " << sv1.tensv << ", ma: " << sv1.masv << "\n";
}
