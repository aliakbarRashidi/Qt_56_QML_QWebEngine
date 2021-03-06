TEMPLATE = app
QT      +=  webenginewidgets

HEADERS =   mainwindow.h \
    custompage.h \
    customurlrequestinterceptor.h \
    customurlschemehandler.h \
    customurlrequestjob.h \
    customdevicereply.h
SOURCES =   main.cpp \
            mainwindow.cpp \
    custompage.cpp \
    customurlrequestinterceptor.cpp \
    customurlschemehandler.cpp \
    customurlrequestjob.cpp \
    customdevicereply.cpp
RESOURCES = jquery.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webenginewidgets/fancybrowser
INSTALLS += target
