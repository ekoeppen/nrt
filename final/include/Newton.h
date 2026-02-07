#ifndef __NEWTON_H
#define __NEWTON_H

#include <stddef.h>

typedef long NewtonErr;
typedef long ArrayIndex;
typedef long Size;
typedef bool Boolean;
typedef unsigned char UByte;

#define noErr 0
#define nil NULL

class SingleObject {
public:
    void* operator new(size_t size);
    void operator delete(void* ptr);
};

#endif
