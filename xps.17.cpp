#include <iostream>
#include<cmath>
using namespace std;

int cong(int x, int y);
void xinchao(string gioitinh);

void giaipt(double a, double b, double c);

double timX1(double a1, double b1, double delta);
double timX2(double a1, double b1, double delta);

int Cong(int m, int n);
int Tru(int m, int n);
int Nhan(int m, int n);
double Chia(double m, double n);

int main()
{
	int kq = cong(1, 2);
	int kq2 = cong(112, 32);
	cout << "kq = " << kq << endl;
	cout << "kq2 = " << kq2 << endl;
	xinchao("nam");
	xinchao("nu");

	cout << "Voi a=1, b=2, c=3 thi: ";
	giaipt(1, 2, 3);
	cout << "Voi a=1, b=2, c=1 thi: ";
	giaipt(1, 2, 1);
	cout << "Voi a=1, b=2, c=-3 thi: ";
	giaipt(1, 2, -3);
	double x, y, z;
	cout << "Moi nhap vao gia tri a, b, c cua pt bac 2 muon giai: \n";
	cout << "a= ";
	cin >> x;
	cout << "b= ";
	cin >> y;
	cout << "c= ";
	cin >> z;
	giaipt(x, y, z);

	double a1, b1, c1;
	cout << "Moi nhap vao a, b, c: \n";
	cout << "a= ";
	cin >> a1;
	cout << "b= ";
	cin >> b1;
	cout << "c= ";
	cin >> c1;
	double delta= b1 * b1 - 4.0 * a1 * c1;
	if (delta>0)
	{
		double x1 = timX1(a1, b1, delta);
		double x2 = timX2(a1, b1, delta);
		cout << "x1= " << x1 << endl;
		cout << "x2= " << x2 << endl;
	}
	else if (delta==0)
	{
		double x1x2 = -b1 / (2.0 * a1);
		cout << "x1=x2= " << x1x2 << endl;
	}
	else
	{
		cout << "vo nghiem";
	}

	double m, n;
	char l;
	cout << "Moi nhap vao 2 so m, n: \n" << "m= ";
	cin >> m;
	cout << "n= ";
	cin >> n;
	cout << "Moi chon ky tu cho phep tinh ( + / - / x / :) : ";
	cin >> l;
	if (l=='+')
	{
		int mn = Cong(m, n);
		cout << "Ket qua phep tinh la: " << mn << endl;
	}
	else if (l=='-')
	{
		int mn = Tru(m, n);
		cout << "Ket qua phep tinh la: " << mn << endl;
	}
	else if (l=='x')
	{
		int mn = Nhan(m, n);
		cout << "Ket qua phep tinh la: " << mn << endl;
	}
	else if (l==':')
	{
		if (n==0)
		{
			cout << "Phep tinh khong hop le";
		}
		else
		{
			double mn = Chia(m, n);
			cout << "Ket qua phep tinh la: " << mn << endl;
		}
	}
	else
	{
		cout << "Ky tu khong hop le";
	}
}

int cong(int x, int y) {
	return x + y;
}
void xinchao(string gioitinh) {
	if (gioitinh._Equal("nu"))
	{
		cout << "Toi la nu\n";
	}
	else if (gioitinh._Equal("nam"))
	{
		cout << "Toi la nam \n";
	}
}

void giaipt(double a, double b, double c) {
	double x1, x2;
	double delta = b * b - 4.0 * a * c;
	if (delta < 0)
	{
		cout << "pt vo nghiem\n";	
	}
	else if (delta == 0)
	{
		x1 = x2 = -b / (2.0 * a);
		cout << "pt co nghiem kep x1 = x2 = " << x1 << endl;
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2.0 * a);
		x2 = (-b - sqrt(delta)) / (2.0 * a);
		cout << "x1 = " << x1 << " va ";
		cout << "x2 = " << x2 << endl;
	}
}

double timX1(double a1, double b1, double delta) {
	return (-b1 + sqrt(delta)) / (2.0 * a1);
}
double timX2(double a1, double b1, double delta) {
	return (-b1 - sqrt(delta)) / (2.0 * a1);
}

int Cong(int m, int n) {
	return m + n;
}
int Tru(int m, int n) {
	return m - n;
}
int Nhan(int m, int n) {
	return m * n;
}
double Chia(double m, double n) {
	return m / n;
}
