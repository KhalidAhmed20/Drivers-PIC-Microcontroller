#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED

#define LED_DELAY_MS (1000)

typedef enum
{
    LED_1,
    LED_2,
    LED_3,
    LED_4

}tLED;

typedef enum
{
    LED_OFF = 0,
    LED__ON = 1
}tLED_State;

void LED_Init(tLED led , tLED_State state);
void SET_State (tLED led , tLED_State state);
tLED_State LED_GetState(tLED led);
void LED_Toggle (tLED led); // update the status of the led...


#endif // LED_H_INCLUDED
