#ifndef SALESMAN_H
#define SALESMAN_H
#include "employee.h"

class salesman:virtual public Employee
{
public:
    salesman();
    virtual ~salesman(){};
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();

protected:
    float _saleAmount;
    float _rate;
};

#endif // SALESMAN_H
