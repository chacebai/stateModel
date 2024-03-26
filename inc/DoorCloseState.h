#ifndef __DOORCLOSESTATE__
#define __DOORCLOSESTATE__

#include "MicroWave.h"
#include "IMicroWaveState.h"

// #endif

class DoorCloseState : public IMicroWaveState
{

public:
    DoorCloseState();
    DoorCloseState(MicroWave *pThis);
    virtual void openDoor();
    virtual void closeDoor();
    virtual void start();
    virtual void stop();
    virtual ~DoorCloseState();
};

#endif
