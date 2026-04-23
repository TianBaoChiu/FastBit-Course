/*
 * stm32F4xx.h
 *
 *  Created on: 2026年4月23日
 *      Author: seeda
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_


//1. SRAM以及FLASH
#define FLASH_BASEADDR              0x08000000U
#define SRAM1_BASEADDR              0x20000000U //大小是112KB，所以是112*1024 = 0x1C000 ，所以0x20000000U + 0x1C000 =  0x2001C000
#define SRAM2_BASEADDR              0x2001C000U
#define ROM_BASEADDR                0x1FFF0000U
#define SRAM                        SRAM1_BASEADDR



#endif /* INC_STM32F407XX_H_ */
