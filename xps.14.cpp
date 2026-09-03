#include <iostream>
using namespace std;

//for loop lesson
int main()
{
	int n;
	for (n = 1; n <= 15; n += 2) // this is for loop conditions
	{
		cout << "n = " << n << endl;
	}

	//practice
	//Calculate the sum from 1 to the input number
	int N;
	int tong = 0;
	cout << "Moi nhap vao so tu nhien N: ";
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		tong += i;
	}
	cout << "Tong cac so tu nhien cua ban la: " << tong << endl;

	//Count and calculate the sum of numbers divisible by 3 from 1 to the input number
	int a;
	int dem = 0;
	int tong2 = 0;
	cout << "Moi nhap vao so so nguyen duong dau tien muon kiem tra: ";
	cin >> a;
	for (int ia = 1; ia <= a; ia++)
	{
		if (ia % 3 == 0)
		{
			dem++;
			tong2 += ia;
		}
	}
		cout << "So so chia het cho 3 la: " << dem << endl;
		cout << "Tong cac so chia het cho 3 la: " << tong2 << endl;

	//Print the multiplication table for the requested number
	int k;
	int kq;
	cout << "Moi nhap vao bang cuu chuong muon kiem tra: ";
	cin >> k;
	cout << "Day la ket qua cua bang cuu chuong " << k << ": \n";
	for (int ik = 1; ik <= 9; ik++)
	{
		kq = ik * k;
		cout << k << " x " << ik << " = " << kq << endl;
	}
}
