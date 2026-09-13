#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

void hoanvi(double *a, double *b) {
    double c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    double a, b;
    cout << "Moi nhap vao so a: ";
    cin >> a;
    cout << "Moi nhap vao so b: ";
    cin >> b;
    hoanvi(&a, &b);
    cout << "Hai so cua ban sau khi doi cho la: a= " << a <<", b= " << b << endl;

    int array1way[10];
    int* arrayconsor;
    arrayconsor = array1way;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 100);
    cout << "Mang truoc khi sap xep giam den la: \n";
    for (int i = 0; i < 10; i++)
    {
        *(arrayconsor+i) = dis(gen);
        cout << *(arrayconsor + i) << " ";
    }
    cout << "\n";
    sort(arrayconsor, arrayconsor + 10);
    reverse(arrayconsor, arrayconsor + 10);
    cout << "Mang sau sap xep la: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << *(arrayconsor + i) << " ";
    }
    


}