#include "salesmanager.h"

salesmanager::salesmanager()
{

}
void salesmanager::init()
{
    _fixedSalary = 5000;
    _num = _startNumber++;
    _level = 1;
    _rate = 0.05;
    cout<<"please input the name of the salesmanager     :"<<endl;
    cin>>_name;
    cout<<"please input the amount of sales          :"<<endl;
    cin>>_saleAmount;
}
void salesmanager::promote()
{
    _level += 3;
}
void salesmanager::calcSalary()
{
    _salary = _fixedSalary + _saleAmount * _rate;
}
void salesmanager::disInfo()
{
    cout<<"name                           :"<<_name<<endl;
    cout<<"number                         :"<<_num<<endl;
    cout<<"level                          :"<<_level<<endl;
    cout<<"the fixes salary               :"<<_fixedSalary<<endl;
    cout<<"the amount of sales            :"<<_saleAmount<<endl;
    cout<<"rate                           :"<<_rate<<endl;
    cout<<"total salary                   :"<<_salary<<endl;
}
