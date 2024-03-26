#include "DoorCloseState.h"

DoorCloseState::DoorCloseState() {}
DoorCloseState::DoorCloseState(MicroWave *pThis)
{
    m_microWave = pThis;
}
DoorCloseState::~DoorCloseState() {}
void DoorCloseState::openDoor()
{
    std::cout << FILE_FUNC_LINE << "open success" << std::endl;
    m_microWave->m_iMicroWaveState = m_microWave->m_doorOpenState;
};
void DoorCloseState::closeDoor()
{
    std::cout << FILE_FUNC_LINE << "closed" << std::endl;
};
void DoorCloseState::start()
{
    std::cout << FILE_FUNC_LINE << "heat success" << std::endl;
    m_microWave->m_iMicroWaveState = m_microWave->m_heatingState;
};
void DoorCloseState::stop()
{
    std::cout << FILE_FUNC_LINE << "stopped" << std::endl;
};
