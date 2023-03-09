#include "GiaoThuong.h"

void GiaoThuong::Nhap()
{
	cout << "Nhap don gia: ";
	cin >> donGia;
	cout << "Nhap so hang: ";
	cin >> soHang;
}

int GiaoThuong::GetTien()
{
	return soTienConLai = soTien - (donGia * soHang);
}

int GiaoThuong::GetSucManh()
{
	return 0;
}

bool GiaoThuong::QuaCong1()
{
	if (soTienConLai > 0)
		return true;
	return false;
}

