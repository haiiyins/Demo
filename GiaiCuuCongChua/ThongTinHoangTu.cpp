#include "ThongTinHoangTu.h"

void ThongTinHoangTu::NhapThongTinHT()
{
	cout << "Nhap so tien: ";
	cin >> soTien;
	cout << "Nhap chi so tri tue: ";
	cin >> triTue;
	cout << "Nhap chi so suc manh: ";
	cin >> sucManh;
}

void ThongTinHoangTu::XuatThongTinHT()
{
	cout << "So tien con lai: " << GetTien() << endl;
	cout << "Chi so tri tue con lai: " << triTue << endl;
	cout << "Chi so suc manh con lai: " << GetSucManh() << endl;
}

int ThongTinHoangTu::GetTien()
{
	return 0;
}

int ThongTinHoangTu::GetSucManh()
{
	return 0;
}

//bool ThongTinHoangTu::QuaCong()
//{
//	return false;
//}
