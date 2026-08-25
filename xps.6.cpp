// xps.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i1 = 1;
	int i2 = 5;
	int i3 = -3;
	double d1 = 2.0;
	double d2 = 5.0;
	double d3 = -0.5;
	double KQc = (double)i1 / (i2 + i3);
	double KQe = (double)i1 / i2 + i3;
	double KQk = d1 + (d2 * d3);
	double KQl = d1 + d2 * d3;
	double KQm = d1 / d2 - d3;
	double KQn = d1 / (d2 - d3);
	double KQo = d1 + d2 + d3 / 3;
	double KQp = (d1 + d2 + d3) / 3;
	double KQq = d1 + d2 + (d3 / 3);
	double KQr = 3 * (d1 + d2) * (d1 - d3);

	cout << "(a) i1 + (i2 x i3) = " << i1 + (i2 * i3) << endl;
	cout << "(b) i1 x (i2 + i3) = " << i1 * (i2 + i3) << endl;
	cout << "(c) i1 : (i2 + i3) = " << KQc << endl;
	cout << "(e) i1 : i2 + i3 = " << KQe << endl;
	cout << "(g) 3 + 4 + 5 : 3 = " << 3 + 4 + 5 / 3 << endl;
	cout << "(i) (3 + 4 + 5) : 3 = " << (3 + 4 + 5) / 3 << endl;
	cout << "(k) d1 + (d2 x d3) = " <<KQk << endl;
	cout << "(l) d1 + d2 x d3 = " << KQl << endl;
	cout << "(m) d1 / d2 - d3 = " << KQm << endl;
	cout << "(n) d1 / (d2 - d3) = " << KQn << endl;
	cout << "(o) d1 + d2 + d3 : 3 = " << KQo << endl;
	cout << "(p) (d1 + d2 + d3) : 3 = " << KQp << endl;
	cout << "(q) d1 + d2 + (d3 : 3) = " << KQq << endl;
	cout << "(r) 3 x (d1 + d2) x (d1 - d3) = " << KQr << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
