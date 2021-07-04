#include <iostream>
#include "Phanso.h"
using namespace std;

int main()
{
    Phanso ps;
    ps.Nhap();
    ps.Xuat();
    float re = ps.kq();
    std::cout << "Ket qua:" << ps.kq() << std::endl;
    system("pause");
    return 0;
}