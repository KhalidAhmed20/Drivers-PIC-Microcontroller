#include "Main.h"
#include "Del.h"
#include "Led.h"


int main()
{
    /* Initialization */
    LED_Init(LED_2 , LED_OFF);
    LED_Init(LED_3 , LED_OFF);
    while(1)
    {
        /* tasks */
        LED_Toggle(LED_2);
        LED_Toggle(LED_3);
        Delay_MS(LED_DELAY_MS);
    }


}
