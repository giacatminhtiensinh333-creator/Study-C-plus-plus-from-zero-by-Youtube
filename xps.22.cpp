#include <iostream>
#include <random>
using namespace std;

int main()
{
    int mangvd1[3][4];
    float mangvd2[2][5];
    string mangvd3[4][4];
    const int row = 5;
    const int col = 3;
    int mangvd4[row][col] = { {3,4,5},{1,5,10},{13,20,19},{33,12,44},{36,67,99} };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mangvd4[i][j] << " ";
        }
        cout << endl;
    }
    cout << mangvd4[4][2] << endl;

   /* random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution dis(1, 999);
    int mangvd5[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mangvd5[i][j] = dis(gen);
        }
        cout << endl;
    }
    cout << "Mang ngau nhien vua tao la: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mangvd5[i][j] << " ";
        }
        cout << endl;
    }*/

    int mangvd6[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Moi nhap mangvd6[" << i << "][" << j << "]= ";
            cin >> mangvd6[i][j];
        }
    }
    cout << "Mang ban vua tao la: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mangvd6[i][j] << " ";
        }
        cout << endl;
    }
    int dong, cot;
    cout << "Moi nhap vao dong ban muon xem: ";
    cin >> dong;
    for (int j = 0; j < col; j++)
    {
        cout << mangvd6[dong][j] << " ";
    }
    cout << endl;
    cout << "Moi nhap vao cot ban muon xem: ";
    cin >> cot;
    for (int i = 0; i < row; i++)
    {
        cout << mangvd6[i][cot] << " ";
    }
    cout << endl << endl;

    //BIG PRACTICE TO REVIEW ALL
    int array2way[4][6];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution dis(1, 999);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            array2way[i][j] = dis(gen);
        }
    }
    cout << "Mang 2 chieu ngau nhien vua tao la: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << array2way[i][j] << "  ";
        }
        cout << endl;
    }
    int max = 0;
    int min = 999;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (array2way[i][j] > max)
            {
                max = array2way[i][j];
            }
        }
    }
    cout << "Gia tri lon nhat trong mang la: " << max << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (array2way[i][j] < min)
            {
                min = array2way[i][j];
            }
        }
    }
    cout << "Gia tri be nhat trong mang la: " << min << endl;
    int tong = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            tong += array2way[i][j];
        }
    }
    cout << "Tong cac gia tri trong mang la: " << tong << endl;
    int soduocnhap;
    int solanxuathien = 0;
    cout << "Moi nhap vao so muon kiem tra: ";
    cin >> soduocnhap;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (array2way[i][j] == soduocnhap)
            {
                solanxuathien++;
            }
        }
    }
    cout << "So cua ban xuat hien: " << solanxuathien << " lan\n";
}