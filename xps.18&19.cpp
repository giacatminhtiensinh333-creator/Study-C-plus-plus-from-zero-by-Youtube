#include <iostream>
using namespace std;

// pass by value/pass by reference lesson
void thamtri(int a) {
    a = 164;
    cout << "a trong ham tham tri la: " << a << endl;
}
void thamchieu(int &b) {
    b = 1604;
    cout << "b trong ham tham tri la: " << b << endl;
}
void luyentap(int &x, int &y) {
    x = 10;
    y = 5;
    cout << "Gia tri x va y sau khi doi cho la: " << x << "; " << y << endl;
}

int nhan(int x, int y = 11) {
    return x * y;
}

int main()
{
    int a = 102;
    cout << "a truoc khi goi ham tham tri la:  " << a << endl;
    thamtri(a);
    cout << "a sau khi goi ham tham tri la: " << a << endl;
  
    int b = 2209;
    cout << "b truoc khi goi ham tham chieu la:  " << b << endl;
    thamchieu(b);
    cout << "b sau khi goi ham tham chieu la: " << b << endl;

    int x = 5;
    int y = 10;
    cout << "Gia tri x va y truoc khi doi cho la: " << x << "; " << y << endl;
    luyentap(x, y);
    cout << "Vay gia tri x va y la: \n" << "x= " << x << endl << "y= " << y << endl;

    int kq = nhan(13);
    cout << "Ket qua khi khong truyen y la: " << kq << endl;
    int kq2 = nhan(13, 13);
    cout << "ket qua khi co truyen y la: " << kq2 << endl;
}
