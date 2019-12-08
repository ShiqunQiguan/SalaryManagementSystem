#ifndef SALESMANAGER_H
#define SALESMANAGER_H
#include "manager.h"
#include "salesman.h"

class salesmanager: public manager, public salesman
{
public:
    salesmanager();
    virtual ~salesmanager(){};
    virtual void init();
    virtual void promote();
    virtual void calcSalary();
    virtual void disInfo();
};

#endif // SALESMANAGER_H
