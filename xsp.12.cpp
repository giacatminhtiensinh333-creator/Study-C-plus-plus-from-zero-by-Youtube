#include <iostream>
using namespace std;

//while loop lesson
int main()
{
 
    int n, m;
    cout << "Tinh cac phep tinh sau va nhap vao ban phim. " << endl;
    cout << "21 + 43 = ";
    cin >> n;
    while (n != 64) {
        cout << "Ket qua sai, moi nhap lai: ";
        cin >> n;
    }
    cout << "Ket qua dung, tiep tuc tinh 43 + 12 = ";
    cin >> m;
    while (m != 55) {
        cout << "Ket qua sai, moi nhap lai: " << endl;
        cin >> m;
    }
    cout << "Ban da hoan than bai kiem tra. ";
}

