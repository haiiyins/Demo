#include "DanhSachCong.h"
#include "ThongTinHoangTu.h"

int main()
{
	DanhSachCong List;
	int chon;
	do
	{
		cout << "----------------------------" << endl;
		cout << "1. Nhap thong tin hoang tu." << endl;
		cout << "2. Nhap cac cong." << endl;
		cout << "3. Ket qua." << endl;
		cout << "0. Thoat." << endl;
		cout << "----------------------------" << endl;
		cout << "Nhap lua chon: "; cin >> chon;
		switch (chon)
		{
		case 1:
		{
			List.NhapThongTinHT();
			break;
		}
		case 2:
		{
			List.NhapDS();
			break;
		}
		case 3:
		{
			List.XuatThongTinHT();
			break;
		}
		default:
			break;
		}
	} while (chon != 0);

	return 0;
}