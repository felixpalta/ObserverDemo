TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    weatherdata.cpp \
    currentconditions.cpp \
    statisticsdisplay.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    observable.h \
    observer.h \
    displayelement.h \
    weatherdata.h \
    currentconditions.h \
    statisticsdisplay.h

*g++*{
QMAKE_CXXFLAGS +=   -Weffc++ -std=c++11 -pedantic -Wall -Wextra \
                    -Wunreachable-code -Wshadow \
                    -Wold-style-cast -Wnon-virtual-dtor  \
                    -Woverloaded-virtual \
                    -Wenum-compare  \
                                        #OFF for QT
                    -Wctor-dtor-privacy	\
                    -Wsign-conversion  \
                    -Wconversion \
}
