#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
public:
    Employee();
    virtual ~Employee(){};
    virtual void init() = 0;
    virtual void promote() = 0;
    virtual void calcSalary() = 0;
    virtual void disInfo() = 0;

protected:
    string _name;
    int _num;
    int _level;
    float _salary;
    static int _startNumber;//族类共享，所以要用static
};

#endif // EMPLOYEE_H
