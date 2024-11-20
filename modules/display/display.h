//=====[#include guards - begin]===============================================

#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <cstdint>

//=====[Declaration of private defines]========================================

#define SYSTEM_TIME_INCREMENT_MS   10

//Para compilación condicional
#define TEST_0 (0)
#define TEST_1 (1)
#define TEST_X (TEST_1)
//TEST_0 -> 8 bits ; TEST_1 -> 4 bits

//Declaracion de pines

#define D2_GPIO_Pin GPIO_PIN_10
#define D2_GPIO_Port GPIOA

#define D4_GPIO_Pin GPIO_PIN_5
#define D4_GPIO_Port GPIOB

#define D5_GPIO_Pin GPIO_PIN_4
#define D5_GPIO_Port GPIOB

#define D6_GPIO_Pin GPIO_PIN_10
#define D6_GPIO_Port GPIOB

#define D7_GPIO_Pin GPIO_PIN_8
#define D7_GPIO_Port GPIOA

#define D8_GPIO_Pin GPIO_PIN_9
#define D8_GPIO_Port GPIOA

#define D9_GPIO_Pin GPIO_PIN_7
#define D9_GPIO_Port GPIOC

#define D10_GPIO_Pin GPIO_PIN_6
#define D10_GPIO_Port GPIOB

#define D11_GPIO_Pin GPIO_PIN_7
#define D11_GPIO_Port GPIOA

#define D12_GPIO_Pin GPIO_PIN_6
#define D12_GPIO_Port GPIOA

//=====[Declaration of public defines]=========================================

//=====[Declaration of public data types]======================================

typedef enum {
     DISPLAY_CONNECTION_GPIO_4BITS,
     DISPLAY_CONNECTION_GPIO_8BITS,
} displayConnection_t;

typedef struct {
   displayConnection_t connection;                                                 
} display_t;

//=====[Declarations (prototypes) of public functions]=========================

void userInterfaceDisplayInit();

void userInterfaceDisplayUpdate();

void displayInit( displayConnection_t connection );

void displayCharPositionWrite( uint8_t charPositionX, uint8_t charPositionY );

void displayStringWrite( const char * str );

//=====[#include guards - end]=================================================

#endif // _DISPLAY_H_