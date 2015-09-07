TEMPLATE = app
TARGET = progressbar 

QT        += core \
    gui 
QT += widgets
HEADERS   += progressbar.h \
    ui_progressbar.h
SOURCES   += progressbar_reg.rss \
    main.cpp \
    progressbar.cpp
FORMS	  += progressbar.ui
RESOURCES +=

symbian:TARGET.UID3 = 0xED451B25
