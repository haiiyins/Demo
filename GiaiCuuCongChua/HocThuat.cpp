#include "HocThuat.h"

void HocThuat::Nhap()
{
    cout << "Nhap chi so tri tue cau hoi:";
    cin >> triTueCauHoi;
}

int HocThuat::GetTien()
{
    return 0;
}

int HocThuat::GetSucManh()
{
    return 0;
}

bool HocThuat::QuaCong2()
{
    if (triTue >= triTueCauHoi)
        return true;
    return false;
}
