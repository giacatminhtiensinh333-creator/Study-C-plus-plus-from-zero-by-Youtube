#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Moi nhap vao n: ";
	cin >> n;

	string kq = (n % 2 == 0) ? "Chan" : "Le";
	cout << kq << endl;
	double dtb;
	cout << "Moi nhap vao diem trung binh: ";
	cin >> dtb;
	string hocluc = (dtb >= 8) ? "Hoc sinh gioi" : ((dtb >= 6.5) ? "Hoc sinh kha" : ((dtb >= 5) ? "Hoc sinh trung binh" : "Hoc sinh yeu"));
	
	cout << hocluc << endl;
}