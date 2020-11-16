#include "Main.h"
#include "Del.h"

void Delay_MS(tWord delay)
{
     volatile tWord x;
    volatile tWord y;

    for (x = 0; x <= delay; x++){
        for (y = 0; y <= 120; y++);
    }
