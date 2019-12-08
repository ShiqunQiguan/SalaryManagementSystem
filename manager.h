#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"

class manager:virtual public Employee
{
public:
    manager();
    virtual ~manager(){};
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();

    void addSalary(float money);

protected:
    int _fixedSalary;

};

#endif // MANAGER_H
