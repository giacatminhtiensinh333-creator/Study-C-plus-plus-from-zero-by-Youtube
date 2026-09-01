#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Moi nhap vao n: ";
    cin >> n;
	int kq = n % 2;
	switch (kq)
	{
	case 0:
		cout << "so chan";
		break;
	default:
		cout << "so le" << endl;
		break;
	}
	int thang, nam;
	cout << "Moi nhap vao thang: ";
	cin >> thang;
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang co 31 ngay ";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang co 30 ngay ";
		break;
	case 2:
		cout << "Moi nhap vao nam: ";
		cin >> nam;
		cout << "Thang co " << (((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) ? 29 : 28) << " ngay. " << endl;
		break;
	default:
		cout << "Mot nam chi co 12 thang, vui long nhap lai. " << endl;
		break;
	}
	int phim;
	cout << "Moi nhap vao phim theo huong dan duoi day.\n 1. Tim theo ten\n 2. Tim theo tac gia\n 3. Tim theo nha xuat ban\n 4. Tim theo tieu de\n Vui long nhap phim:";
	cin >> phim;
	switch (phim)
	{
	case 1:
		cout << "Dang tim theo ten, vui long cho...\n";
		break;
	case 2:
		cout << "Dang tim theo tac gia, vui long cho...\n";
		break;
	case 3:
		cout << "Dang tim theo nha xuat ban, vui long cho...\n";
		break;
	case 4:
		cout << "Dang tim theo tieu de, vui long cho...\n";
		break;
	default:
		cout << "Phim khong hop le, vui long thu lai. \n";
		break;
	}

}

