

#include <iostream>
using namespace std;

int main()
{
	int x1 = 8;
	x1 += 5; // x = x + 5
	cout << "x= " << x1 << endl; // some way to code shorter

	int x2 = 8;
	x2 -= 5; // x2 = x2 - 5
	cout << "x2= " << x2 << endl;

	int x3 = 8;
	x3 *= 5; // x3 = x3 * 5
	cout << "x3= " << x3 << endl;

	double x4 = 8;
	x4 /= 5; // x4 = x4 / 5
	cout << "x4= " << x4 << endl;

	int x5 = 8;
	x5 %= 5; // x5 = x5 % 5
	cout << "x5= " << x5 << endl;

	// cac phep so sanh
	cout << "Kiem tra x1 co bang x2 khong (1: dung, 0: sai) : " << (x1 == x2) << endl;
	cout << "Kiem tra x2 co khac x3 khong (1: dung, 0: sai) : " << (x2 != x3) << endl;
	cout << "Kiem tra x3 co lon hon x4 khong (1: dung, 0: sai) : " << (x3 > x4) << endl;
	cout << "Kiem tra x4 co nho hon x5 khong (1: dung, 0: sai) : " << (x4 < x5) << endl;
	cout << "Kiem tra x5 co lon hon hoac bang x1 khong (1: dung, 0: sai) : " << (x5 >= x1) << endl; // pratice
	cout << "Kiem tra x1 co nho hon hoac bang x2 khong (1: dung, 0: sai) : " << (x1 <= x2) << endl;


	int aa = 6;
	int ab = 6;
	int ac = 6;
	int ad = 6;
	int ae = 6;
	int b = 2;
	aa += 3;
	ab -= 5;
	ac *= 2;
	ad %= 5;
	ae -= (b + 7);
	cout << " aa += 3 = " << aa << endl; //pratice whith some math
	cout << " ab -= 5 = " << ab << endl;
	cout << " ac *= 2 = " << ac << endl;
	cout << " ad &= 5 = " << ad << endl;
	cout << "ae = ae - (b + 7) = " << "ae -= (b + 7) ";

git config --global user.email "giacatminhtiensinh333@gmail.com
	"
}




