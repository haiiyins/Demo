#pragma once
#include "HoangTu.h"

class GiaoThuong : public HoangTu
{
private:
	int donGia;
	int soHang;
	int soTienConLai;
public:
	void Nhap();
	int GetTien(); //so tien mat khi qua cong
	int GetSucManh();
	bool QuaCong1();
};

