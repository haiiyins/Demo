#pragma once
#include "HoangTu.h"

class SucManh : public HoangTu
{
private:
	int sucDungSi;
	int sucManhConLai;
public:
	void Nhap();
	int GetSucManh();
	int GetTien(); //so tien mat khi qua cong
	bool QuaCong3();
};

