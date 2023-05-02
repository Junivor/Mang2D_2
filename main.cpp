#include "thuvien.h"

int main() {
    const int so = 10;
    int a = so;
    int b = so;
    float tong, tich, demam, demduong, tbam;
    float c[a][10];
    nhap(a, b);
    nhap_mang(c, a, b);
    xuat_mang(c, a, b);
    tong_cheo_chinh(c, a, tong);
    tich_cheo_phu(c, a, tich);
    dem_am_tamgiac_cheochinh_tren(c, a, demam);
    dem_duong_tamgiac_cheochinh_duoi(c, a, demduong);
    tb_am_tamgiac_cheophu_tren(c, a, tbam);
    tb_am_tamgiac_cheophu_duoi(c, a, tbam);
    return 0;
}

