#include <iostream>
using namespace std;

// Recursive Function lesson
int Giaithua(int n) {
	if (n<=1)
	{
		return 1;
	}
	return n * Giaithua(n - 1);
}
int f(int n) {
	if (n<=2)
	{
		return 1;
	}
	return f(n - 1) + f(n - 2);
}

// practice
//1.
int tong(int n) {
	if (n==0)
	{
		return 0;
	}
	return n + tong(n - 1);
}

//2.
int luythua(int a, int b) {
	if (b==0)
	{
		return 1;
	}
	return a * luythua(a, b - 1);
}

//3.
int tongchuso(int n) {
	if (n/10==0)
	{
		return n;
	}
	return (n % 10) + tongchuso(n / 10);
}

//4.
int demchuso(int n) {
	if (n==0)
	{
		return 0;
	}
	return 1 + demchuso(n / 10);
}

//5.
int daochuso(int n, int rev) {
	if (n==0)
	{
		return rev;
	}
	return daochuso(n / 10, rev * 10 + n % 10);
}

//6.
int timMax(int n, int max) {
	if (n == 0) return max;

	int chuso = n % 10;
	if (chuso > max) max = chuso;

	return timMax(n / 10, max);
}


int main()
{
	int a;
	cout << "Moi nhap vao gia tri giai thua muon tinh: ";
	cin >> a;
	int kq = Giaithua(a);
	cout << "kq= " << kq << endl;
	int fibonacy = f(18);
	cout << "Gia tri cua day fibonacy den so 18 la: " << fibonacy << endl;

	//practice
	//Calculate the sum from 1 to n
	int a1;
	cout << "Moi nhap vao gia tri n de tinh S(n)= 1+2+3+...+n: ";
	cin >> a1;
	int kq1 = tong(a1);
	cout << "kq1= " << kq1 << endl;

	// Calculate a number raised to a power
	int a2, b2;
	cout << "Moi nhap vao a: ";
	cin >> a2;
	cout << "Moi nhap vao gia tri luy thua muon tinh: " << a2 << "^";
	cin >> b2;
	int kq2 = luythua(a2, b2);
	cout << "kq2= " << kq2 << endl;

	//Calculate the sum of the digits of a number
	int a3;
	cout << "Moi nhap vao so muon tinh tong chu so: ";
	cin >> a3;
	int kq3 = tongchuso(a3);
	cout << "kq3= " << kq3 << endl;

	// Count the number of digits in a number
	int a4;
	cout << "Moi nhap vao so muon dem chu so: ";
	cin >> a4;
	int kq4 = demchuso(a4);
	cout << "kq4= " << kq4 << endl;

	//Reverse a number
	int a5;
	cout << "Moi nhap so muon dao nguoc: ";
	cin >> a5;
	int kq5 = daochuso(a5, 0);
	cout << "kq5= " << kq5 << endl;

	//Find the largest digit in a number
	int a6;
	cout << "Moi nhap vao so muon tim chu so lon nhat: ";
	cin >> a6;
	int kq6 = timMax(a6, 0);
	cout << "kq6= " << kq6 << endl;
}
