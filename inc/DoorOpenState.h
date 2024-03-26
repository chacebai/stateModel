#ifndef __DOOROPENSTATE__
#define __DOOROPENSTATE__

#include "MicroWave.h"
#include "IMicroWaveState.h"

// #endif

class DoorOpenState : public IMicroWaveState
{

public:
    DoorOpenState();
    DoorOpenState(MicroWave *pThis);
    virtual void openDoor();
    virtual void closeDoor();
    virtual void start();
    virtual void stop();
    virtual ~DoorOpenState();
};

#endif
