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
    if (re>0)
    {
        std::cout << "Phan so duong" << std::endl;
    }
    else if (re<0)
    {
        std::cout << "Phan so am" << std::endl;
    }
    else
    {
        std::cout << "Phan so bang 0" << std::endl;
    }
    
    
    system("pause");
    return 0;
}