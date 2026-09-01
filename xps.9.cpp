#include <iostream>
#include <cmath>
using namespace std;

// if else lesson + comprehensive practicing
int main()
{
    //applied exercises (if - else if - else)
    double dt, dv, da, dc, dtong;
    cout << "Moi nhap vao diem toan: ";
    cin >> dt;
    cout << "Moi nhap vao diem van: ";
    cin >> dv;
    cout << "Moi nhap vao diem anh: ";
    cin >> da;
    cout << "Moi nhap vao diem chuyen: ";
    cin >> dc;
    dtong = (dt + dv + da) + (dc * 2);
    if (dtong >= 35.75 && dt >= 1 && da >= 1 && dv >= 1 && dc >= 1)
    {
        cout << "Chuc mung ban da do truong THPT Chuyen Nguyen Hue. " << endl << "Vui long xac nhan tren he thong va den nhan lop vao ngay 3/8/2026. \n";
        cout << "Tran trong thong bao" << endl;;
    }
    else if (dtong >= 35.75 && (dt < 1 || dv < 1 || da < 1 || dc < 1))
    {
        cout << "Rat tiec phai thong bao tuy ban du diem do nhung bi diem liet nen se bi danh truot theo BGD So Ha Noi. \n";
        cout << "Chuc may man lan sau." << endl;
    }
    else if (dtong < 35.75 && (dt + da + dv) >= 26)
    {
        cout << "Rat tiec ban da khong do chuyen nhung it nhat ban da du diem de vao truong cong lap top 1 Ha Noi" << endl;
    }
    else
    {
        cout << "Rat tiec ban da truot chuyen \n";
        cout << "Ban Vu Binh Minh do chuyen muon gui loi den ban rang: 'Ban khong hoc thi phai CHIU!'" << endl;
    }

// practice

// Calculate the sum and difference of user input values
    double x, y, tong, hieu;
    cout << "Moi nhap vao tong: ";
    cin >> tong;
    cout << "Moi nhap vao hieu: ";
    cin >> hieu;
    x = (tong + hieu) / 2;
    y = (tong - hieu) / 2;
    cout << "Gia tri cua x la: " << x <<  endl;
    cout << "Gia tri cua y la: " << y << endl;

// Calculate BMI
    double cc, cn, BMI;
    cout << "Moi nhap vao can nang(kg): ";
    cin >> cn;
    cout << "Moi nhap vao chieu cao(m): ";
    cin >> cc;
    BMI = cn / (cc*cc);
    cout << "BMI cua ban la: " << BMI << endl;
    if (BMI <15)
    {
        cout << "Than hinh qua gay \n";
    }
    else if (BMI >= 15 && BMI<16)
    {
        cout << "Than hinh gay \n";
    }
    else if (BMI>=16 && BMI<18.5)
    {
        cout << "Than hinh hoi gay \n";
    }
    else if (BMI>=18.5 && BMI<25)
    {
        cout << "Than hinh binh thuong \n";
    }
    else if (BMI>=25 && BMI<30)
    {
        cout << "Than hinh hoi beo \n";
    }
    else if (BMI>=30 && BMI<35)
    {
        cout << "Than hinh beo \n";
    }
    else
    {
        cout << "Than hinh qua beo \n";
    }

// Check whether a year is a leap year
    int nam;
    cout << "Vui long nhap nam muon kiem tra: ";
    cin >> nam;
    if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
    {
        cout << "Nam cnay la nam nhuan \n";
    }
    else
    {
        cout << "Nam nay la nam khong nhuan \n";
    }

// Determine the number of days in a month
    int thang;
    cout << "Moi nhap vao thang muon kiem tra: ";
    cin >> thang;
    if (thang == 1 || thang == 3|| thang == 5||thang == 7||thang == 8|| thang == 10|| thang == 12)
    {
        cout << "Thang nay co 31 ngay \n";
    }

    else if (thang == 2)
    {
        cout << "Vui long nhap nam ";
        cin >> nam;
        if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
        {
            cout << "Thang nay co 29 ngay \n";
        }
        else
        {
            cout << "Thang nay co 28 ngay \n";
        }
    }
    else if (thang == 4|| thang == 6|| thang == 9|| thang == 11)
    {
        cout << "Thang nay co 30 ngay \n";
    }
    else
    {
        cout << "Mot nam chi co 12 thang thoi. \n";
    }

// Solve a quadratic equation using the discriminant
    double delta;
    double a, b, c, x1, x2;
    cout << "Ta co pt: ax^2 + bx + c =0 " << endl;
    cout << "Vui long nhap gia tri cua a (a khac 0): ";
    cin >> a;
    cout << "Vui long nhap gia tri cua b: ";
    cin >> b;
    cout << "Vui long nhap gia tri cua c: ";
    cin >> c;
    delta = b * b - 4 * a * c;
    if (delta>0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh cua ban co 2 nghiem pb la: " << x1 << " va " << x2 << endl;
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        cout << "Phuong trinh cua ban co nghiem kep la: x1 = x2 = " << x1 << endl;
    }
    else
    {
        cout << "Phuong trinh vo nghiem ";
    }
}
