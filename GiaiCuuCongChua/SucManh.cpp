#include "SucManh.h"

void SucManh::Nhap()
{
    cout << "Nhap chi so suc manh cua dung si: ";
    cin >> sucDungSi;
}

int SucManh::GetSucManh()
{
    return sucManhConLai = sucManh - sucDungSi;
}

int SucManh::GetTien()
{
    return 0;
}

bool SucManh::QuaCong3()
{
    if (sucManhConLai > 0)
        return true;
    return false;
}
