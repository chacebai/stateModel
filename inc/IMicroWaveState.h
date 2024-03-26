#ifndef __MICROWAVESTATE__
#define __MICROWAVESTATE__

#include <cstring>
#include <iostream>
#include "MicroWave.h"

#if defined _WIN32 || defined _WIN64
#define __filename__(x) (strrchr(x, '\\') ? strrchr(x, '\\') + 1 : x)
#define FILE_FUNC_LINE "[" << __filename__(__FILE__) << "::" << __FUNCTION__ << "::" << __LINE__ << "]"
#else
#define FILE_FUNC_LINE "[" << __FILE__ << "::" << __FUNCTION__ << "::" << __LINE__ << "]"
#endif

// #endif

class MicroWave;

class IMicroWaveState
{

public:
    // MicroWaveState() {}
    virtual void openDoor() = 0;
    virtual void closeDoor() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
    // virtual ~MicroWaveState() {}

public:
    MicroWave *m_microWave;
};

#endif
