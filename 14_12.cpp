#include <iostream>
using namespace std;

struct SinhVien {
    char ten[100];
    float diemTB;
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien sv[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        cin.ignore();
        cin.getline(sv[i].ten, 100);
        cout << "Nhap diem trung binh cua sinh vien thu " << i + 1 << ": ";
        cin >> sv[i].diemTB;
    }
    cout << "Danh sach sinh vien:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << sv[i].ten << " : " << sv[i].diemTB << endl;
    }
    float tongDiem = 0;
    for (int i = 0; i < n; i++) {
        tongDiem += sv[i].diemTB;
    }
    float diemTB = tongDiem / n;
    cout << "Diem trung binh cua DSSV la: " << diemTB << endl;
    return 0;
}

