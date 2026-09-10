#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

int main()
{
    int m[3];
    string m2[7];
    int m3[] = { 10,20,30,40,50,60,70,80,90,100 };
    string m4[] = { "utd","usf","usofc","isu","ua","fiu" };

    int m5[] = { 10,20,30,40,50,60,70,80,90,100 };
    cout << m5[3] << endl;
    cout << m5[9] << endl;
    cout << m5[6] << endl;
    cout << m5[7] << endl;
    int arrayzsize = sizeof(m5) / sizeof(m5[0]);
    cout << "Mang m5 co so phan tu la: " << arrayzsize << endl;
    cout << "Cac phan tu do la: ";
    for (int pt : m5) {
        cout << pt << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeof(m5) / sizeof(m5[0]); i++)
    {
        cout << "i= " << i << endl;
        // cout << m5[i] << endl;
    }

    int m6[] = { 10,20,30,40,50,60,70,80,90,100 };
    cout << "Gia tri cua mang m6 tai index so 4 truoc khi doi la: " << m6[4] << endl;
    m6[4] = 164;
    cout << "Gia tri cua mang m6 tai index so 4 truoc khi doi la: " << m6[4] << endl;
    cout << "Gia tri cua mang m6 sau khi doi la: ";
    for (int i6 = 0; i6 < sizeof(m6) / sizeof(m6[0]); i6++)
    {
        m6[i6] += 3;
        cout << m6[i6] << " ";
    }
    for (int pt6 : m6) {
        cout << pt6 << " ";
    }
    cout << endl;

    //practice
    //
    int a[4];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        cout << "Mang a[" << i << "]= ";
        cin >> a[i];
    }
    cout << "Mang a gom 4 phan tu cua bn la: ";
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    //
    int a2[7] = { 67, 69, 81, 36, 99, 111, 229 };
    sort(a2, a2 + sizeof(a2) / sizeof(a2[0]));
    cout << "Mang a2 sau sap xep tang dan la: ";
    for (int i = 0; i < sizeof(a2) / sizeof(a2[0]); i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl;
    reverse(a2, a2 + sizeof(a2) / sizeof(a2[0]));
    cout << "Mang a2 sau khi dao nguoc la: ";
    for (int i = 0; i < sizeof(a2) / sizeof(a2[0]); i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl << endl;


    //random_device rd;
    //mt19937 gen(rd());
    //uniform_int_distribution<> dis(1, 999);
    //int Arandom[10];
    //for (int i = 0; i < sizeof(Arandom) / sizeof(Arandom[0]); i++)
    //{
    //    Arandom[i] = dis(gen);
    //}
    //cout << "Cac phan tu ngau nhien cua mang la: ";
    //for (int pt : Arandom) {
    //    cout << pt << " ";
    //}
    //cout << endl;

    //BIG EXERCISE TO REVIEW ALL OF THIS
    random_device ra;
    mt19937 gen(ra());
    uniform_int_distribution<> dis(1, 99);
    int array[7];
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        array[i] = dis(gen);
    }
    cout << "Cac phan tu cua array la: ";
    for (int pt : array) {
        cout << pt << " ";
    }
    cout << endl;
    reverse(array, array + size);
    cout << "Array sau khi dao nguoc gom: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    sort(array, array + size);
    cout << "Array theo thu tu tang dan la: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int tong = 0;
    for (int i = 0; i < size; i++)
    {
        tong += array[i];
    }
    cout << "Tong cua cac phan tu la: " << tong << endl;
    int so;
    cout << "Moi nhap so: ";
    cin >> so;
    int dem = 0;
    for (int i = 0; i < size; i++)
    {
        if (so == array[i])
        {
            dem++;
        }
    }
    cout << "So " << so << " xuat hien " << dem << " lan\n";
}