#ifndef __HEATINGSTATE__
#define __HEATINGSTATE__

#include "MicroWave.h"
#include "IMicroWaveState.h"

// #endif

class HeatingState : public IMicroWaveState
{

public:
    HeatingState();
    HeatingState(MicroWave *pThis);
    virtual void openDoor();
    virtual void closeDoor();
    virtual void start();
    virtual void stop();
    virtual ~HeatingState();
};

#endif
