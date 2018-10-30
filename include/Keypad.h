/* Keypad.h
 * Created on: oct 30,2018
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

/*--------------------<PORT Configuration>--------------------*/

// keypad data direction register
#define Keypad_CDDR   (const volatile unsigned char *() )
#define Keypad_RDDR   (const volatile unsigned char *() )
// keypad PORT register
#define Keypad_CPORT  (const volatile unsigned char *() )
#define Keypad_RPORT  (const volatile unsigned char *() )

/*--------------------<PIN configuration>--------------------*/

// Keypad Columns pin configuration
#define Keypad_C1     (0)
#define Keypad_C2     (1)
#define Keypad_C3     (2)
#define Keypad_C4     (3)
// Keypad Rows pin configuration
#define Keypad_R1     (4)
#define Keypad_R2     (5)
#define Keypad_R3     (6)
#define Keypad_R4     (7)

/*--------------------<Functions>--------------------*/

// initializtion
void Krypad_INIT(void);
// handling
void Keypad_handle(unsigned int time_handle);
// Mode Selection
void Keypad_Mode(unsigned char Mode);
// getting pressed button
void Keypad_get_pressed_key(unsigned char *ptr_key);

#endif /*KEYPAD_H_*/ 