#include <iostream>
#include "technician.h"
#include "manager.h"
#include "salesman.h"
#include "salesmanager.h"
#include <typeinfo>

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

    Employee *emp;
    manager *pm;

    for(int i=0; i<sizeof (empArr)/sizeof (*empArr); i++)
    {
        emp = empArr[i];
        emp->init();
        if(typeid (*emp) == typeid (manager))
        {
            cout<<"the Manager want to increase the salary"<<endl;
            if(pm = dynamic_cast<manager*>(emp))
            {
                pm->addSalary(2000);
            }
        }
        emp->promote();
        emp->calcSalary();
        emp->disInfo();
    }

    return 0;
}
