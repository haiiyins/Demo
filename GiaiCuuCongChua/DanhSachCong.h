#pragma once
#include "HoangTu.h"
#include "GiaoThuong.h"
#include "HocThuat.h"
#include "SucManh.h"
#include "ThongTinHoangTu.h"
#include <vector>

class DanhSachCong : public ThongTinHoangTu
{
private:
	vector <HoangTu*> DS;
	ThongTinHoangTu TT;
public:
	void NhapDS();
	bool CuuDuocCongChua();
	void XuatThongTinHT();
};

