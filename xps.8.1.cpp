

#define _USE_MATH_DEFINES 
#include <cmath> // some define and library to solve some math
#include <iostream>
#include <iomanip> // this library have setprecision
using namespace std;

int main()
{
	double r;
	double cv;
	double dt;
	cout << "Moi nhap vao ban kinh: ";
	cin >> r;
	cv = 2 * r * M_PI; // this is π = 3.14...
	dt = r * r * M_PI;
	cout << "Chu vi hinh tron la: " << cv << endl << "Dien tich hinh tron la: " << dt << endl;

	double a, b, CV, DT;
	cout << "Moi nhap vao chieu dai: ";
	cin >> a;
	cout << "Moi nhap vao chieu rong: ";
	cin >> b;
	CV = (a + b) * 2;
	DT = a * b;
	cout << "Chu vi HCN la: " << CV << endl << "Dien tich HCn la: " << DT << endl;

	double dtt, dv, da, dtb;
	cout << "Moi nhap vao diem toan: ";
	cin >> dtt;
	cout << "Moi nhap vao diem van: ";
	cin >> dv;
	cout << "Moi nhap vao diem anh: ";
	cin >> da;
	dtb = (dtt + dv + da) / 3;
	cout << "Diem trung binh cua ban la: " << setprecision(2) // I use it to print only 1 number after comma
		 << dtb << endl;

}

