#include "salesman.h"

salesman::salesman()
{

}

void salesman::init()
{
    _rate = 0.04;
    _num = _startNumber++;
    _level = 1;
    cout<<"please input the name of the salesman     :";
    cin>>_name;
    cout<<"please input the amount of sales          :";
    cin>>_saleAmount;
}

void salesman::promote()
{
    _level += 1;
}
void salesman::calcSalary()
{
    _salary = _saleAmount * _rate;
}
void salesman::disInfo()
{
    cout<<"name                           :"<<_name<<endl;
    cout<<"number                         :"<<_num<<endl;
    cout<<"level                          :"<<_level<<endl;
    cout<<"the amount of sales            :"<<_saleAmount<<endl;
    cout<<"rate                           :"<<_rate<<endl;
    cout<<"total salary                   :"<<_salary<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
