#ifndef __U8500_CYPRESS_GPIO_H__
#define __U8500_CYPRESS_GPIO_H__

#include <mach/board-sec-u8500.h>
#include <mach/irqs.h>

#define _3_GPIO_TOUCH_EN	TSP_LDO_ON2_JANICE_R0_0
#define _3_GPIO_TOUCH_INT	TOUCHKEY_INT_JANICE_R0_0
#define _3_TOUCH_SDA_28V	TOUCHKEY_SDA_JANICE_R0_0
#define _3_TOUCH_SCL_28V	TOUCHKEY_SCL_JANICE_R0_0

#define IRQ_TOUCH_INT		GPIO_TO_IRQ(TOUCHKEY_INT_JANICE_R0_0)

#endif
