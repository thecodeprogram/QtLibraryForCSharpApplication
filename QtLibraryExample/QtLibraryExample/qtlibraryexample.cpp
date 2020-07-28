#include "qtlibraryexample.h"


QtLibraryExample::QtLibraryExample()
{
}

#include <stdio.h>

extern "C" double add(int a, int b)
{
    return a + b;
}

extern "C" double subtrack(int a, int b)
{
    return a - b;
}

extern "C" double multiply(int a, int b)
{
    return a * b;
}

extern "C" QTLIBRARYEXAMPLESHARED_EXPORT double divide(int a, int b)
{
    return a / b;
}
