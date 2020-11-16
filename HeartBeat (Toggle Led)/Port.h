#ifndef PORT_H_INCLUDED
#define PORT_H_INCLUDED

#include "Main.h"


/* Leds' pins ... we make it at port B*/
#define LED_1_PORT_DR   (GPIO_PORTB_DATA)
#define LED_1_PORT_CR   (GPIO_PORTB_CONTROL)
#define LED_1_PIN       (GPIO_PIN_0)

#define LED_2_PORT_DR   (GPIO_PORTB_DATA)
#define LED_2_PORT_CR   (GPIO_PORTB_CONTROL)
#define LED_2_PIN       (GPIO_PIN_1)

#define LED_3_PORT_DR   (GPIO_PORTB_DATA)
#define LED_3_PORT_CR   (GPIO_PORTB_CONTROL)
#define LED_3_PIN       (GPIO_PIN_2)

#define LED_4_PORT_DR   (GPIO_PORTB_DATA)
#define LED_4_PORT_CR   (GPIO_PORTB_CONTROL)
#define LED_4_PIN       (GPIO_PIN_3)

#endif // PORT_H_INCLUDED
