#include "technician.h"

Technician::Technician()
{

}
void Technician::init()
{
    _num = _startNumber++;
    _level = 1;
    _moneyPerHour = 100;
    cout<<"please input the name of the Technician     :";
    cin>>_name;
    cout<<"please input the amount of the hours of work:";
    cin>>_amountHour;
}

void Technician::promote()
{
    _level += 3;
}
void Technician::calcSalary()
{
    _salary = _amountHour * _moneyPerHour;
}
void Technician::disInfo()
{
    cout<<"name                           :"<<_name<<endl;
    cout<<"number                         :"<<_num<<endl;
    cout<<"level                          :"<<_level<<endl;
    cout<<"the amount of the hours of work:"<<_amountHour<<endl;
    cout<<"money per hour                 :"<<_moneyPerHour<<endl;
    cout<<"total salary                   :"<<_salary<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
