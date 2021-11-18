#ifndef __BOARD_H__
#define __BOARD_H__

#include <stdint.h>
#include "main.h"

#define BOARD_NAME                          "ds18b20"

#define HCLK_MAX                            (32000000U)
#define HSI16_MAX                           (16000000U)

#define GPIOA_PINS_FOR_DEBUGGING            ( \
    LL_GPIO_PIN_13                          | \
    LL_GPIO_PIN_14                          )


/* One Wire Public Macros */
#define DS_ONE_WIRE_PIN 		LL_GPIO_PIN_12
#define DS_ONE_WIRE_PORT 		DSPIN_GPIO_Port
#define DS_ONE_WIRE_ODR_BIT     GPIO_ODR_OD12
#define DS_ONE_WIRE_IDR_BIT     GPIO_IDR_ID12

#endif /* __BOARD_H__ */
