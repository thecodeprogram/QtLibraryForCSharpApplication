#ifndef QTLIBRARYEXAMPLE_GLOBAL_H
#define QTLIBRARYEXAMPLE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTLIBRARYEXAMPLE_LIBRARY)
#  define QTLIBRARYEXAMPLESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTLIBRARYEXAMPLESHARED_EXPORT Q_DECL_IMPORT
#endif

extern "C" __declspec(dllexport) double add(int a, int b);
extern "C" __declspec(dllexport) double subtrack(int a, int b);
extern "C" __declspec(dllexport) double multiply(int a, int b);
extern "C" __declspec(dllexport) double divide(int a, int b);

#endif // QTLIBRARYEXAMPLE_GLOBAL_H
