#include "Phanso.h"
#include <iostream>
using namespace std;
void Phanso::Nhap(){
    std::cout << "Nhap tu so: ";
    cin>>tuso;
    do
    {
        std::cout << "\nNhap mau so: ";
        cin>>mauso;
        if (mauso==0)
        {
            std::cout << "Nhap sai. Yeu cau nhap lai." << std::endl;
        }
        
    } while (mauso==0);
    
}
void Phanso::Xuat(){
    std::cout << tuso <<"/"<<mauso<< std::endl;
}
float Phanso::kq(){
    return (float)tuso/mauso;
}