#pragma once
#include "HoangTu.h"

class HocThuat : public HoangTu
{
private:
	int triTueCauHoi;
public:
	void Nhap();
	int GetTien(); //so tien mat khi qua cong
	int GetSucManh();
	bool QuaCong2();
};

