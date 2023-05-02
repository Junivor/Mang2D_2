#include "thuvien.h"
void nhap(int &m, int &n) {
    do {
        cout << "Nhap do dai cua mang a[m][]: ";
        cin >> m;
        cout <<  "Nhap do dai cua mang a[][n]: ";
        cin >> n;
    } while (m <= 0 && n <= 0);
    cout << "Mang ban vua nhap la: b" << "[" << m << "][" << n << "]" << endl;
}

void nhap_mang(float b[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap mang thu b" << "[" << i + 1 << "][" << j + 1 << "]: " << endl;
            cin >> b[i][j];
        }
    }
}

void xuat_mang(float b[][10], int m, int n) {
    cout << "Mang ban vua nhap co du lieu la: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

void tong_cheo_chinh(float b[][10], int m, float &tong) {
    tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                tong += b[i][j];
            }
        }
    }
    cout << "Tong cheo chinh: " << tong << endl;
}

void tich_cheo_phu(float b[][10], int m, float &tich) {
    tich = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (j + i == m - 1) {
                tich *= b[i][j];
            }
        }
    }
    cout << "Tich cheo chinh: " << tich << endl;
}

void dem_am_tamgiac_cheochinh_tren(float b[][10], int m, float &demam) {
    demam = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i <= j && b[i][j] < 0) {
                demam++;
            }
        }
    }

    if (!demam == 0) {
        cout << "Tam giac nay co " << demam << " so am!" << endl;
    } else {
        cout << "Ham nay khong co so am nao ca!" << endl;
    }
}

void dem_duong_tamgiac_cheochinh_duoi(float b[][10], int m, float &demduong) {
    demduong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= j && b[i][j] > 0) {
                demduong++;
            }
        }
    }

    if (!demduong == 0) {
        cout << "Tam giac nay co " << demduong << " so duong!" << endl;
    } else {
        cout << "Ham nay khong co so duong nao ca!" << endl;
    }
}

void tb_am_tamgiac_cheophu_tren(float b[][10], int m, float &tbam) {
    tbam = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j <= m - 1 && b[i][j] < 0) {
                tbam += b[i][j];
            }
        }
    }
    cout << "Trung binh am tam giac cheo phu tren cua ham nay la: " << tbam / m << endl;
}

void tb_am_tamgiac_cheophu_duoi(float b[][10], int m, float &tbam) {
    tbam = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j >= m - 1) {
                tbam += b[i][j];
            }
        }
    }
    cout << "Trung binh duong tam giac cheo phu tren cua ham nay la: " << tbam / m << endl;
}