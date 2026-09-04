#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int tong = 0;
    cout << "Moi nhap vao so cac so tu nhien dau tien muon tinh tong: ";
    cin >> n;
    cout << "Moi nhap vao so muon bo qua: ";
    cin >> m;
    cout << "Vay tong cac so cua ban tru so " << m << " la: ";
    for (int i = 1; i <= n; i++)
    {
        if (i==m)
        {
            continue;
        }
        else
        {
            cout << i;
            tong += i; 
            if (i < n && !(i == n - 1 && m == n))
            {
                cout << " + ";
            }
        }
    }
    cout << " = " << tong << endl;
    //break de qua chac khong can on lai

    int g;
    long long giaithua = 1;
    cout << "Moi nhap vao giai thua muon kiem tra: ";
    cin >> g;
    for (int ig = 1; ig <=g; ig++)
    {
        if (g==0)
        {
            cout << "0! = 1 ";
        }
        else
        {
            giaithua *= ig;
        }
    }
    cout << g << "! = " << giaithua << endl;
    
    int a;
    int tong2 = 0;
    cout << "Moi nhap vao so so tu nhien muon tinh tong: ";
    cin >> a;
    for (int ia = 0; ia <= a; ia+=2)
    {
        if (a % 2 != 0)
        {
            cout << "Toi khong tinh so le, hasta la vista baby! \n";
            break;
        }
        else
        {
            tong2 += ia;
        }
    }
    cout << "Tong cac so chan tu 0 den " << a << " la: " << tong2 << endl;

    cout << "Cac so chia het cho 3 tu 10 den 50 la: ";
    for (int i2 = 10; i2 <= 50; i2++)
    {
        if (i2 % 3 == 0)
        {
            cout << i2 << " | ";
        }
    }
    cout << endl;

    int S = 1;
    int s = 1;
    cout << "Tong S = 1! + 2! + 3! +...+ 10! = ";
    for (int is = 1; is <= 10; is++)
    {
        s *= is;
        cout << s << " + ";
        S += s;
    }
    cout << "= " << S << endl;

    cout << "Cac so hoan hao trong pham vi 1-1000 la: ";
    for (int sohoanhao = 1; sohoanhao <= 1000; sohoanhao++)
    {
        int tonguoc = 0;
        for (int iperfect = 1; iperfect < sohoanhao; iperfect++)
        {
            if (sohoanhao % iperfect == 0)
            {
                tonguoc += iperfect;
            }
        }
        if (tonguoc == sohoanhao)
        {
            cout << sohoanhao << " | ";
        }
    }
    cout << endl;

    int x, t;
    do
    {
        cout << "Moi nhap vao so nguyen duong muon kiem tra (lon hon 1): ";
        cin >> x;
        while (x < 2)
        {
            cout << "Gia tri khong hop le, vui long thu lai: ";
            cin >> x;
        }
        bool kq = true;
        for (int ix = 2; ix*ix <= x; ix++)
        {
            if (x % ix == 0)
            {
                kq = false;
                break;
            }
        }
        if (kq)
        {
            cout << "Day la so nguyen to\n";
        }
        else
        {
            cout << "Day khong phai la so nguyen to\n";
        }
        cout << "Nhap 1 de tiep tuc kiem tra\nNhap 2 de thoat\n Moi nhap so: ";
        cin >> t;
    } while (t==1);
    cout << "Da thoat! ";
}