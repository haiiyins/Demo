#pragma once
#include <iostream>
using namespace std;

class ThongTinHoangTu
{
protected:
	int soTien;
	int triTue;
	float sucManh;
public:
	void NhapThongTinHT();
	void XuatThongTinHT();
	virtual int GetTien();
	virtual int GetSucManh();
};



