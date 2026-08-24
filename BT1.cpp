// BT1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
using namespace std;

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
        _setmode(_fileno(stdin), _O_U16TEXT);
        wstring Tên, GiớiTính;
        int NămSinh,Tuổi;
        wcout << L"Nhập họ và tên của bạn:";
        getline(wcin, Tên);
        wcout << L"Nhập năm sinh của bạn:";
        wcin >> NămSinh;
        wcout << L"Nhập giới tính của bạn: ";
        wcin >> GiớiTính;
        Tuổi = (2026) - NămSinh;
        wcout << L"Vậy tuổi của bạn là: " << Tuổi << "\n";

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
