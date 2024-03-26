#include <string>
#include <iostream>
#include "MicroWave.h"

using namespace std;

int main()
{
    MicroWave microWave;
    microWave.openDoor();
    microWave.closeDoor();
    microWave.start();
    microWave.stop();

    microWave.openDoor();
    microWave.stop();
    microWave.start();
    return 0;
}

