TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt
TARGET = ubjson
DEFINES += UBJSON

DESTDIR = out
OBJECTS_DIR = out

SOURCES +=  Array.cpp \
            Boolean.cpp \
            Byte.cpp \
            Double.cpp \
            Element.cpp \
            Float.cpp \
            Huge.cpp \
            Int16.cpp \
            Int32.cpp \
            Int64.cpp \
            Object.cpp \
            String.cpp \

HEADERS +=  Array.hpp \
            Boolean.hpp \
            Byte.hpp \
            Double.hpp \
            Element.hpp \
            Float.hpp \
            Huge.hpp \
            Int16.hpp \
            Int32.hpp \
            Int64.hpp \
            Object.hpp \
            String.hpp \
            ValueContainer.hpp \
            ubjson_global.hpp \
