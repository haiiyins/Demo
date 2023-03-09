#pragma once
#include <iostream>
#include "ThongTinHoangTu.h"
using namespace std;

class HoangTu : public ThongTinHoangTu
{
//protected:
//	int soTien;
//	int triTue;
//	float sucManh;
public:
	virtual void Nhap() = 0;
	virtual bool QuaCong1(); //Cong Giao Thuong
	virtual bool QuaCong2(); //Cong Hoc Thuat
	virtual bool QuaCong3(); //Cong Suc Manh
};

