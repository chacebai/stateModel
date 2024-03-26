#include "DoorOpenState.h"

DoorOpenState::DoorOpenState() {}
DoorOpenState::DoorOpenState(MicroWave *pThis)
{
    m_microWave = pThis;
}
DoorOpenState::~DoorOpenState() {}
void DoorOpenState::openDoor()
{
    std::cout << FILE_FUNC_LINE << "opening" << std::endl;
};
void DoorOpenState::closeDoor()
{
    std::cout << FILE_FUNC_LINE << "close success" << std::endl;
    m_microWave->m_iMicroWaveState = m_microWave->m_doorCloseState;
};
void DoorOpenState::start()
{
    std::cout << FILE_FUNC_LINE << "opening cannot start" << std::endl;
};
void DoorOpenState::stop()
{
    std::cout << FILE_FUNC_LINE << "stopped" << std::endl;
};
