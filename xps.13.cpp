#include <iostream>
using namespace std;

// do while loop lesson
int main()
{
    int a = 1;

    int giaithua = 1;
    do
    {
        giaithua *= a;
        a++;
    } while (a <= 10);
    cout << "Giai thua cac chu so tu 1 den 10 la: " << giaithua << endl;

    //practice
    // number guess game
    int jackpot = 777;
    int number;
    cout << "CHAO MUNG DEN GAME DOAN SO MAY MAN \n" << "Vui long nhap so (1-999) cua ban: ";
    cin >> number;
    while (true) {
        if (number<jackpot)
        {
            cout << "Hay chon so lon hon: ";
            cin >> number;
        }
        else if (number>jackpot)
        {
            cout << "Hay chon so nho hon: ";
            cin >> number;
        }
        else
        {
            cout << "Chuc mung ban da doan dung! ";
            break;
        }
    }

    // Atm system simulator
    long long Sodu = 5213000000;
    long long ruttien;
    int matkhau;
    float x;
    cout << "Chao mung den quy khach den ATM\n" << "Vui long nhap mat khau the: ";
    cin >> matkhau;
    while (matkhau != 3835) {
        cout << "Mat khau sai, vui long thu lai: ";
        cin >> matkhau;
   }
    do
    {
        cout << "Chao mung den voi giao dien atm. Nhap cac so tuong ung theo huong dan sau: \n" << "1. Xem so du\n2. Rut tien\n3. Dang xuat the\n" << "Moi nhap so: ";
        cin >> x;
        if (x == 1)
        {
            cout << "So du hien tai cua ban la: " << Sodu << " dong\n";
        }
        else if (x == 2)
        {
            cout << "Vui long nhap so tien ban muon rut: ";
            cin >> ruttien;
            while (ruttien > Sodu) {
                cout << "So du cau ban khong du, xin vui long nhap lai: ";
                cin >> ruttien;
            }
            Sodu -= ruttien;;
            cout << "Rut thanh cong, so du cua ban la: " << Sodu << " dong\n";
        }
    } while (x!=3);
    cout << "Da dang xuat!\n";

    // convert that number into a number with its digits reversed (example: 1234 to 4321)
    int n;
    int chusocuoi;
    int sodao = 0;
    cout << "Moi nhap vao so tu nhien bat ky: ";
    cin >> n;
    while (n > 0) {
        chusocuoi = n % 10;
        n /= 10;
        sodao = sodao * 10 + chusocuoi;
    }
    cout << "Tong cac chu so cua so nay la: " << sodao << endl;
}
