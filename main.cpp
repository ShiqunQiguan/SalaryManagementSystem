#include <iostream>
#include "technician.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"

using namespace std;

int main()
{
//    Technician tech;
//    tech.init();
//    tech.promote();
//    tech.calcSalary();
//    tech.disInfo();

//    manager man;
//    man.init();
//    man.promote();
//    man.calcSalary();
//    man.disInfo();

//    salesman sman;
//    sman.init();
//    sman.promote();
//    sman.calcSalary();
//    sman.disInfo();

//    salesmanager sm;
//    sm.init();
//    sm.promote();
//    sm.calcSalary();
//    sm.disInfo();

    Employee * empArr [] = {new manager, new Technician, new salesman, new salesmanager};

    for(auto emp:empArr)
    {
        emp->init();
        emp->promote();
        emp->calcSalary();
        emp->disInfo();
    }

    return 0;
}
