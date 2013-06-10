/*
 Started: 12-26-2012
 Spark Fun Electronics

 The SparkFun Simon Says game has been through dozens of revisions over the years. This header
 file attempts to map and support all the different hardware versions.
*/

#define CHOICE_OFF      0 //Used to control LEDs
#define CHOICE_NONE     0 //Used to check buttons
#define CHOICE_RED	(1 << 0)
#define CHOICE_GREEN	(1 << 1)
#define CHOICE_BLUE	(1 << 2)
#define CHOICE_YELLOW	(1 << 3)

// LED pin definitions, these are Arduino pins, not ATmega pins
#define LED_RED     3
#define LED_GREEN   5
#define LED_BLUE    6
#define LED_YELLOW  9

// Button pin definitions
#define BUTTON_RED    7
#define BUTTON_GREEN  8
#define BUTTON_BLUE   12
#define BUTTON_YELLOW 13

// Buzzer pin definitions
#define BUZZER1  10
#define BUZZER2  11

