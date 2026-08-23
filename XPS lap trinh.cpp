// XPS lap trinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <io.h>
#include <fcntl.h> //thu vien de them font chu tieng viet
#include <string>  //thu vien de them font chu tieng viet
using namespace std;

int main()
{
    //thêm setcode
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    //1. Xuất dữ liệu ra màn hình
    std::wcout << "Hello World!\n"; //\n de xuong dong
    std::wcout << "Hello haha\n";
    wcout << "Vu Binh minh dep zai\n";

    //2. Nhập dữ liệu từ bàn phím
    double toan, van, anh, khtn, dtb;
    wcout << L"mời nhập điểm toán: "; //Phai them "L" neu muon in font chu tieng viet
    //nhập
    wcin >> toan;   

    wcout << L"mời nhập điểm văn: ";
    //nhập
    wcin >> van;

    wcout << L"mời nhập điểm anh: ";
    //nhập
    wcin >> anh;

    wcout << L"mời nhập điểm khtn: ";
    //nhập
    wcin >> khtn;

    //tinh dtb
    dtb = (toan + van + anh + khtn) / 4;
    wcout << L"điểm trung bình của bạn là: " << dtb << "\n";

    /*
    CTRL + K + C = GHI CHU NHIEU DONG
    CTRL + K + U = BO GHI CHU NHIEU DONG
    */
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
