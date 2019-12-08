TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        employee.cpp \
        main.cpp \
        manager.cpp \
        salesman.cpp \
        salesmanager.cpp \
        technician.cpp

HEADERS += \
    employee.h \
    manager.h \
    salesman.h \
    salesmanager.h \
    technician.h
