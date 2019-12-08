#include "manager.h"

manager::manager()
{

}

void manager::init()
{
    _fixedSalary = 8000;
    _num = _startNumber++;
    _level = 1;
    cout<<"please input the name of the manager     :"<<endl;
    cin>>_name;
}

void manager::promote()
{
    _level += 4;
}
void manager::calcSalary()
{
    _salary = _fixedSalary;
}
void manager::disInfo()
{
    cout<<"name                           :"<<_name<<endl;
    cout<<"number                         :"<<_num<<endl;
    cout<<"level                          :"<<_level<<endl;
    cout<<"total salary                   :"<<_salary<<endl;
}
