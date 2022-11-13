#ifndef NAVANATOYOTA_H_INCLUDED
#define NAVANATOYOTA_H_INCLUDED
#include <string>

class NavanaCars
{
public:
    NavanaCars();
    NavanaCars(std::string, std::string, std::string, std::string, std::string);
    void change_owner(std::string, std::string);
    friend void showCar(NavanaCars);
private:
    std::string owner, nid, purchase_date, engineNo, registrationNo;
};

#endif // NAVANATOYOTA_H_INCLUDED
