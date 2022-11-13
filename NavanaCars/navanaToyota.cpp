#include "navanaToyota.h"
#include <iostream>

NavanaCars::NavanaCars(std::string name,std::string nd, std::string date, std::string engNo, std::string regNo)
{
    owner = name;
    nid = nd;
    purchase_date = date;
    engineNo = engNo;
    registrationNo = regNo;
}

NavanaCars::NavanaCars()
{
    owner = "Unknown";
    nid = "NULL";
    purchase_date = "dd/mm/yy";
    engineNo = "NULL";
    registrationNo = "NULL";
}

void NavanaCars::change_owner(std::string name, std::string nd)
{
    owner = name;
    nid = nd;
}

void showCar(NavanaCars car)
{
    std::cout << "TOYOTA COROLLA CROSS\n";
    std::cout << "Car Owner   : " << car.owner << "\n";
    std::cout << "Owner NID   : " << car.nid << "\n";
    std::cout << "Purchased on: " << car.purchase_date << "\n";
    std::cout << "Engine No   : " << car.engineNo << "\n";
    std::cout << "Registration: " << car.registrationNo << "\n";
}



