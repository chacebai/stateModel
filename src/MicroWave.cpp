#include "MicroWave.h"

MicroWave::MicroWave()
{
    m_heatingState = std::make_shared<HeatingState>(this);
    m_doorOpenState = std::make_shared<DoorOpenState>(this);
    m_doorCloseState = std::make_shared<DoorCloseState>(this);
    m_iMicroWaveState = m_doorCloseState;
}
MicroWave::~MicroWave() {}
void MicroWave::openDoor()
{
    m_iMicroWaveState->openDoor();
}
void MicroWave::closeDoor()
{
    m_iMicroWaveState->closeDoor();
}
void MicroWave::start()
{
    m_iMicroWaveState->start();
}
void MicroWave::stop()
{
    m_iMicroWaveState->stop();
}
