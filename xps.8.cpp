#include <iostream>
using namespace std;

int main()
{
	// big practice after a week
	// Bai 1
	// Calculate per-person contribution
	double N;
	double K;
	cout << "Moi nhap vao so nguoi trong nhom: ";
	cin >> N;
	cout << "Moi nhap vao so tien quyen gop duoc: ";
	cin >> K;
	double q = K / N;
	cout << "So tien TB moi nguoi quyen gop la: " << q << endl;

	// Bai 2
	// Convert seconds to H:M:S
	int S;
	int s;
	int h;
	int p;
	int P;
	cout << "Vui long nhap vao so giay: ";
	cin >> S;
	h = S / 3600;
	P = S % 3600;
	p = P / 60;
	s = S % 60;
	cout << "So giay tuong ung la: " << h << " Gio " << p << " Phut " << s << " Giay " << endl;

	// Bai 3
	// Convert Celsius to Fahrenheit and Kelvin
	double C;
	double F;
	cout << "VUi long nhap vao nhiet do: ";
	cin >> C;
	F = C * (9.0 / 5.0) + 32;
	K = C + 273.15;
	cout << "Nhiet do cua ban tuong ung: " << F << " Do F , " << K << " Do K " << endl;

	// Bai 4
	// Check grade criteria
	double dt, dv, da;
	cout << "Vui long nhap vao diem toan: ";
	cin >> dt;
	cout << "Vui long nhap vao diem van: ";
	cin >> dv;
	cout << "Vui long nhap vao diem anh: ";
	cin >> da;

	cout << "Hoc sinh co dat tieu chi 1 khong: (1 co, 0 khong) " << bool(dt + dv + da >= 24 && dt >= 6.5 && dv >= 6.5 && da >= 6.5) << endl;
	cout << "Hoc sinh co dat tieu chi 2 khong: " << bool(dt >= 9 || dv >= 9 || da >= 9) << endl;
	cout << "Hoc sinh co dat tieu chi 3 khong: " << bool(((dt + dv + da) / 3) >= 8) << endl;

	//bai 6
	// Evaluate an expression with a, b, and c
	double a,b, c;
	cout << "Moi nhap vao gia tri cua a: ";
	cin >> a;
	cout << "Moi nhap vao gia tri cua b: ";
	cin >> b;
	cout << "Moi nhap vao gia tri cua c: ";
	cin >> c;
	p = ((a + b) / c) * ((a - c) / (b + 1.0)) + (a * b * c);
	cout << "Gia tri cua P la: " << p << endl;

	// Bai 5
	// Character and ASCII manipulation
	char l;
	cout << "Moi nhap vao 1 ky tu: ";
	cin >> l;
	char l1 = (int)l + 1;
	char l3 = (int)l - 32;
	cout << "Ky tu dung sau no trong bang ASCII la: " << l1 << endl;
	cout << "Ma dang so cua ky tu la: " << (int)l << endl;
	cout << "Dang chu hoa cua ky tu la " << l3 << endl;

}





