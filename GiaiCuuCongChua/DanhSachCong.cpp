#include "DanhSachCong.h"

void DanhSachCong::NhapDS()
{
	HoangTu* A;
	int chon;
	do
	{
		cout << "-------- CONG --------" << endl;
		cout << "1. Cong Giao thuong." << endl;
		cout << "2. Cong Hoc thuat." << endl;
		cout << "3. Cong Suc manh." << endl;
		cout << "0. Thoat." << endl;
		cout << "----------------------" << endl;
		cout << "Nhap lua chon: "; cin >> chon;
		switch (chon)
		{
		case 1:
		{
			A = new GiaoThuong();
			A->Nhap();
			DS.push_back(A);
			break;
		}
		case 2:
		{
			A = new HocThuat();
			A->Nhap();
			DS.push_back(A);
			break;
		}
		case 3:
		{
			A = new SucManh();
			A->Nhap();
			DS.push_back(A);
			break;
		}
		default:
			break;
		}
	} while (chon != 0);
}

bool DanhSachCong::CuuDuocCongChua()
{
	int x = 0, y = 0, z =0;
	for (int i = 0; i < DS.size(); ++i)
	{
		if (DS[i]->QuaCong1())
			x++;
		if (DS[i]->QuaCong2())
			y++;
		if (DS[i]->QuaCong3())
			z++;
	}
	if (x > 0 && y > 0 && z > 0 && (x + y + z) == DS.size())
		return true;
	return false;
}

void DanhSachCong::XuatThongTinHT()
{
	if (CuuDuocCongChua())
		TT.XuatThongTinHT();
}




