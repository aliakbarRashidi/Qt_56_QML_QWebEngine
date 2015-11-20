QT      +=  webenginewidgets

HEADERS =   mainwindow.h \
    custompage.h
SOURCES =   main.cpp \
            mainwindow.cpp \
    custompage.cpp
RESOURCES = jquery.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webenginewidgets/fancybrowser
INSTALLS += target
