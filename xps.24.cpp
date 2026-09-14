#include <iostream>
#include <cstring> //library to copy, connect and find index position in array
using namespace std;

int main()
{
    char kytu[5] = { 'm','i','n','h' };
	cout << kytu << "\n";

	char* kytucontro;
	kytucontro = new char[5];
	kytucontro[0] = 'm';
	kytucontro[1] = 'i';
	kytucontro[2] = 'n';
	kytucontro[3] = 'h';
	kytucontro[4] = '\0';
	cout << kytucontro << "\n";

	char kytu2[] = "Minh";
	cout << kytu2 << endl;
	cout << sizeof(kytu2) / sizeof(kytu2[0]) << "\n ";

	const int max = 22;
	char kytu3[max];
	cout << "Moi ban tao ten nguoi dung: ";
	cin.getline(kytu3, max);
	cout << "Ten nguoi dung cua ban la: " << kytu3 << "\n";


	char* kytu4 = new char[max];
	cout << "Moi ban tao mat khau: ";
	cin.getline(kytu4, max);
	cout << "Mat khau cua ban la: " << kytu4 << endl;

	char kytu5[] = "Gia Cat Minh la vua";
	char kytu6[100];
	strcpy_s(kytu6, 100, kytu5);
	cout << "Chuoi ky tu bi sao chep la: " << kytu5 << "\n";
	cout << "Chuoi ky tu da sao chep la: " << kytu6 << "\n";

	strncpy_s(kytu6, 100, kytu5,13);
	cout << "Chuoi ky tu bi sao chep la: " << kytu5 << "\n";
	cout << "Chuoi ky tu da sao chep la: " << kytu6 << "\n";

	char kytu7[100], kytu8[100];
	cout << "Moi ban nhap ten: ";
	cin.getline(kytu7, 100);
	cout << "Moi ban nhap dac diem: ";
	cin.getline(kytu8, 100);
	strcat_s(kytu7, kytu8);
	cout << "Chao mung " << kytu7 << "\n";

	char* thutu, kytuX;
	char kytu9[100] = "GamecuaTIT.com";
	kytuX = 'T';
	thutu = strchr(kytu9, kytuX);
	if (thutu == NULL)
	{
		cout << "Khong tim thay!";
	}
	else
	{
		cout << "Ky tu nam o vi tri index so " << (thutu - kytu9) << "\n";
	}
	char* thutu2;
	thutu2 = strstr(kytu9, "TIT");
	if (thutu2 == NULL)
	{
		cout << "Khong tim thay!";
	}
	else
	{
		cout << "Ky tu nam o vi tri index so " << (thutu2 - kytu9) << "\n";
	}

	//toUpper and toLower
	char x = 'g';
	char x_hoa = toupper(x);
	cout << "Gia tri x viet hoa la: " << x_hoa << "\n";

	char y = 103;
	cout << "Ky tu trong bien y gia tri ASII 103 la: " << y << "\n";
	cout << "Ky tu trong bien y viet hoa la: " << toupper(y) << "\n";

	char z = 'G';
	char z_thuong = tolower(z);
	cout << "Gia tri z viet thuong la: " << z_thuong << "\n";
	//example
	char Earray[1000];
	cout << "Moi ban nhap mang ky tu: ";
	cin.getline(Earray, 1000);
	cout << "Mang ky tu ban vua nhap la: " << Earray << "\n";
	cout << "Mang ky tu ban vua nhap khi chuyen sang viet hoa la: ";
	for (int i = 0; i < strlen(Earray); i++)
	{
		char hoa = toupper(Earray[i]);
		cout << hoa;
	}
	cout << "\n";
	cout << "Mang ky tu ban vua nhap la: ";
	for (int i = 0; i < strlen(Earray); i++)
	{
		char thuong = tolower(Earray[i]);
		cout << thuong;
	}
	cout << "\n";

	//exercise
	char chuoikytu[50];
	cout << "Moi nhap chuoi ky tu (viet lien khong dau): ";
	cin.getline(chuoikytu, 50);
	for (int i = 0; i < strlen(chuoikytu); i++)
	{
		int maASII = (int)(chuoikytu[i]);
		cout << "'" << chuoikytu[i] << "'" << " co ma ASII la: " << maASII << "\n";
	}

	char chuoikytu2[50];
	cout << "Moi nhap chuoi ky tu: ";
	cin.getline(chuoikytu2, 50);
	cout << "Chuoi ky tu dao nguoc cua ban la: ";
	for (int i = strlen(chuoikytu2)-1; i >=0; i--) //we can't reverse char array like array one/two way so I reverse the for-loop
	{
		cout << chuoikytu2[i];
	}

	
}
