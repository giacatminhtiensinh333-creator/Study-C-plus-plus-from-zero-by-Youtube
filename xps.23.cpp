#include <iostream>
using namespace std;

// RAM meomory and consor lesson x 1/2 way array consor
int main()
{
    int GtaIV = 2010;
    cout << "Dia chi o nho ma bien GtaIV chiem la: " << &GtaIV << endl;
    int* a;
    a = new int;
    cout << "Dia chi a tro toi la: " << a << endl;
    *a = 2209;
    cout << "Gia tri cua con tro a la: " << *a << endl;
    int* tConsor;
    tConsor = &GtaIV;
    cout << "Dia tri t tro toi la: " << tConsor << endl;
    cout << "Gia tri cua con tro t la: " << *tConsor << endl;
    *tConsor = 2011;
    cout << "Gia tri con tro t sau khi doi la: " << *tConsor << endl;
    cout << "Gia tri cua bien GtaIV sau khi doi la: " << GtaIV << endl;

    int controO = *tConsor;
    cout << "Gia tri cua con tro O la: " << controO << endl;

    int array[7] = { 7,8,9,10,11,12,13 };
    int* arrayconsor;
    arrayconsor = array;
    cout << "Gia tri cua con tro array la: " << *arrayconsor << endl;
    cout << "Tat ca gia tri cua con tro array la: ";
    for (int i = 0; i < 7; i++)
    {
        cout << *(arrayconsor + i) << " ";
    }
    cout << "\n";
    int m, n;
    cout << "Moi nhap so thu tu cua hang tu muon thay doi:  ";
    cin >> m;
    cout << "Ban muon doi thanh: ";
    cin >> n;
    *(arrayconsor + m) = n;
    cout << "Gia tri cua mang sau khi doi la : ";
    for (int i = 0; i < 7; i++)
    {
        cout << *(arrayconsor + i) << " ";
    }cout << "\n";
    int *array1wayconsor[4];
    for (int i = 0; i < 4; i++)
    {
        array1wayconsor[i] = new int;
    }
    cout << "Mang con tro 1 chieu gom: ";
    for (int i = 0; i < 4; i++)
    {
        cout << array1wayconsor[i] << "  ";
    }
    cout << "\n";
    const int row = 3;
    const int col = 4;
    cout << "Mang con tro 2 chieu gom: \n";
    int** array2wayconsor = new int* [row];
    for (int i = 0; i < row; i++)
    {
       //di chuyen con tro ben trong de cap phat bo nho
       *(array2wayconsor + i) = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << &array2wayconsor[i][j] << "  ";
        }
        cout << "\n";
    }
    //cancel consor
    for (int i = 0; i < row; i++)
    {
        delete* (array2wayconsor + i);
    }
    delete array2wayconsor;


}
