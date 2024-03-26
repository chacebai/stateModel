#ifndef __MICROWAVE__
#define __MICROWAVE__

#include <memory>
#include "IMicroWaveState.h"
#include "HeatingState.h"
#include "DoorOpenState.h"
#include "DoorCloseState.h"

// #endif

class HeatingState;
class DoorOpenState;
class DoorCloseState;

class MicroWave
{

public:
    MicroWave();
    ~MicroWave();
    void openDoor();
    void closeDoor();
    void start();
    void stop();

public:
    std::shared_ptr<IMicroWaveState> m_iMicroWaveState;
    std::shared_ptr<HeatingState> m_heatingState;
    std::shared_ptr<DoorOpenState> m_doorOpenState;
    std::shared_ptr<DoorCloseState> m_doorCloseState;
};

#endif
