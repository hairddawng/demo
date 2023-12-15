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
        cout << "Nhap ten sinh vien thu " << i+1 << ": ";
        cin.ignore();
        cin.getline(sv[i].ten, 100);
        cout << "Nhap diem trung binh cua sinh vien thu " << i+1 << ": ";
        cin >> sv[i].diemTB;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diemTB > sv[j].diemTB) {
                swap(sv[i], sv[j]);
            }
        }
    }
    cout << "Danh sach sinh vien sau khi sap xep theo diem trung binh tang dan:\n";
    for (int i = 0; i < n; i++) {
        cout << sv[i].ten << " - " << sv[i].diemTB << endl;
    }
    return 0;
}

