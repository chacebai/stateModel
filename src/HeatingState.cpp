#include "HeatingState.h"

HeatingState::HeatingState() {}
HeatingState::HeatingState(MicroWave *pThis)
{
    m_microWave = pThis;
}
HeatingState::~HeatingState() {}
void HeatingState::openDoor()
{
    std::cout << FILE_FUNC_LINE << "heating cannot open the door" << std::endl;
};
void HeatingState::closeDoor()
{
    std::cout << FILE_FUNC_LINE << "heating closed the door" << std::endl;
};
void HeatingState::start()
{
    std::cout << FILE_FUNC_LINE << "heating" << std::endl;
};
void HeatingState::stop()
{
    std::cout << FILE_FUNC_LINE << "stop success" << std::endl;
    m_microWave->m_iMicroWaveState = m_microWave->m_doorCloseState;
};
