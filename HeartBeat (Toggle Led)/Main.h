#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <pic16f877a.h>

/* GPIO definitions */
/* GPIO Pins */
#define GPIO_PIN_0               (0)
#define GPIO_PIN_1               (1)
#define GPIO_PIN_2               (2)
#define GPIO_PIN_3               (3)
#define GPIO_PIN_4               (4)
#define GPIO_PIN_5               (5)
#define GPIO_PIN_6               (6)
#define GPIO_PIN_7               (7)

/* GPIO Port Registers redefinition */

#define GPIO_PORTA_DATA          (PORTA)
#define GPIO_PORTA_CONTROL       (TRISA)

#define GPIO_PORTB_DATA          (PORTB)
#define GPIO_PORTB_CONTROL       (TRISB)

#define GPIO_PORTC_DATA          (PORTC)
#define GPIO_PORTC_CONTROL       (TRISC)

#define GPIO_PORTD_DATA          (PORTD)
#define GPIO_PORTD_CONTROL       (TRISD)

#define GPIO_PORTE_DATA          (PORTE)
#define GPIO_PORTE_CONTROL       (TRISE)

/* GPIO directions */
#define GPIO_OUT                 (0)
#define GPIO_IN                  (1)

/*GPIO Port Operations*/
#define GPIO_InitPort(CONTROL, DIRECTION)   ((CONTROL) = ((DIRECTION)? (~0):(0)))
#define GPIO_WritePort(PORT, DATA)          ((PORT) = (DATA))
#define GPIO_ReadPort(PORT)                 (PORT)

/* GPIO Port Pin Operations */
#define GPIO_InitPortPin(CONTROL, PIN, DIRECTION)   ((CONTROL) = (CONTROL & (~(1 << PIN)))|(DIRECTION << PIN))
#define GPIO_WritePortPin(PORT, PIN, DATA)          ((PORT) = (PORT & (~(1 << PIN)))|(DATA << PIN))
#define GPIO_ReadPortPin(PORT, PIN)                 (((PORT) & (1 << PIN)) >> (PIN))

typedef unsigned int tWord;

#endif // MAIN_H_INCLUDED
