/*
 * Copyright © 2017-2019 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef PLATFORM_CCU_H
#define PLATFORM_CCU_H

#include <bitmap.h>
#include <stdint.h>

enum {
	CCU_CLOCK_PLL_PERIPH0,
	CCU_CLOCK_MSGBOX,
	CCU_CLOCK_THS,
	CCU_CLOCK_THS_MOD,
	CCU_CLOCK_COUNT
};

#define CCU_CLOCK_THS_REG     0x0074

#define CCU_GATE_BASE         (0x0060 / sizeof(uint32_t))

#define CCU_GATE_CE           BITMAP_INDEX(CCU_GATE_BASE + 0, 5)
#define CCU_GATE_DMA          BITMAP_INDEX(CCU_GATE_BASE + 0, 6)
#define CCU_GATE_MMC0         BITMAP_INDEX(CCU_GATE_BASE + 0, 8)
#define CCU_GATE_MMC1         BITMAP_INDEX(CCU_GATE_BASE + 0, 9)
#define CCU_GATE_MMC2         BITMAP_INDEX(CCU_GATE_BASE + 0, 10)
#define CCU_GATE_NAND         BITMAP_INDEX(CCU_GATE_BASE + 0, 13)
#define CCU_GATE_DRAM         BITMAP_INDEX(CCU_GATE_BASE + 0, 14)
#define CCU_GATE_EMAC         BITMAP_INDEX(CCU_GATE_BASE + 0, 17)
#define CCU_GATE_TSC          BITMAP_INDEX(CCU_GATE_BASE + 0, 18)
#define CCU_GATE_HSTIMER      BITMAP_INDEX(CCU_GATE_BASE + 0, 19)
#define CCU_GATE_SPI0         BITMAP_INDEX(CCU_GATE_BASE + 0, 20)
#define CCU_GATE_SPI1         BITMAP_INDEX(CCU_GATE_BASE + 0, 21)
#define CCU_GATE_USBOTG       BITMAP_INDEX(CCU_GATE_BASE + 0, 23)
#define CCU_GATE_EHCI0        BITMAP_INDEX(CCU_GATE_BASE + 0, 24)
#define CCU_GATE_EHCI1        BITMAP_INDEX(CCU_GATE_BASE + 0, 25)
#define CCU_GATE_EHCI2        BITMAP_INDEX(CCU_GATE_BASE + 0, 26)
#define CCU_GATE_EHCI3        BITMAP_INDEX(CCU_GATE_BASE + 0, 27)
#define CCU_GATE_OHCI0        BITMAP_INDEX(CCU_GATE_BASE + 0, 28)
#define CCU_GATE_OHCI1        BITMAP_INDEX(CCU_GATE_BASE + 0, 29)
#define CCU_GATE_OHCI2        BITMAP_INDEX(CCU_GATE_BASE + 0, 30)
#define CCU_GATE_OHCI3        BITMAP_INDEX(CCU_GATE_BASE + 0, 31)

#define CCU_GATE_VE           BITMAP_INDEX(CCU_GATE_BASE + 1, 0)
#define CCU_GATE_TCON0        BITMAP_INDEX(CCU_GATE_BASE + 1, 3)
#define CCU_GATE_TCON1        BITMAP_INDEX(CCU_GATE_BASE + 1, 4)
#define CCU_GATE_DEINTERLACE  BITMAP_INDEX(CCU_GATE_BASE + 1, 5)
#define CCU_GATE_CSI          BITMAP_INDEX(CCU_GATE_BASE + 1, 8)
#define CCU_GATE_TVE          BITMAP_INDEX(CCU_GATE_BASE + 1, 9)
#define CCU_GATE_HDMI         BITMAP_INDEX(CCU_GATE_BASE + 1, 11)
#define CCU_GATE_DE           BITMAP_INDEX(CCU_GATE_BASE + 1, 12)
#define CCU_GATE_GPU          BITMAP_INDEX(CCU_GATE_BASE + 1, 20)
#define CCU_GATE_MSGBOX       BITMAP_INDEX(CCU_GATE_BASE + 1, 21)
#define CCU_GATE_SPINLOCK     BITMAP_INDEX(CCU_GATE_BASE + 1, 22)

#define CCU_GATE_CODEC        BITMAP_INDEX(CCU_GATE_BASE + 2, 0)
#define CCU_GATE_SPDIF        BITMAP_INDEX(CCU_GATE_BASE + 2, 1)
#define CCU_GATE_PIO          BITMAP_INDEX(CCU_GATE_BASE + 2, 5)
#define CCU_GATE_THS          BITMAP_INDEX(CCU_GATE_BASE + 2, 8)
#define CCU_GATE_I2S0         BITMAP_INDEX(CCU_GATE_BASE + 2, 12)
#define CCU_GATE_I2S1         BITMAP_INDEX(CCU_GATE_BASE + 2, 13)
#define CCU_GATE_I2S2         BITMAP_INDEX(CCU_GATE_BASE + 2, 14)

#define CCU_GATE_I2C0         BITMAP_INDEX(CCU_GATE_BASE + 3, 0)
#define CCU_GATE_I2C1         BITMAP_INDEX(CCU_GATE_BASE + 3, 1)
#define CCU_GATE_I2C2         BITMAP_INDEX(CCU_GATE_BASE + 3, 2)
#define CCU_GATE_UART0        BITMAP_INDEX(CCU_GATE_BASE + 3, 16)
#define CCU_GATE_UART1        BITMAP_INDEX(CCU_GATE_BASE + 3, 17)
#define CCU_GATE_UART2        BITMAP_INDEX(CCU_GATE_BASE + 3, 18)
#define CCU_GATE_UART3        BITMAP_INDEX(CCU_GATE_BASE + 3, 19)
#define CCU_GATE_SCR0         BITMAP_INDEX(CCU_GATE_BASE + 3, 20)
#define CCU_GATE_SCR1         BITMAP_INDEX(CCU_GATE_BASE + 3, 21)

#define CCU_GATE_EPHY         BITMAP_INDEX(CCU_GATE_BASE + 4, 0)
#define CCU_GATE_DEBUG        BITMAP_INDEX(CCU_GATE_BASE + 4, 7)

#define CCU_RESET_BASE        (0x02c0 / sizeof(uint32_t))

#define CCU_RESET_CE          BITMAP_INDEX(CCU_RESET_BASE + 0, 5)
#define CCU_RESET_DMA         BITMAP_INDEX(CCU_RESET_BASE + 0, 6)
#define CCU_RESET_MMC0        BITMAP_INDEX(CCU_RESET_BASE + 0, 8)
#define CCU_RESET_MMC1        BITMAP_INDEX(CCU_RESET_BASE + 0, 9)
#define CCU_RESET_MMC2        BITMAP_INDEX(CCU_RESET_BASE + 0, 10)
#define CCU_RESET_NAND        BITMAP_INDEX(CCU_RESET_BASE + 0, 13)
#define CCU_RESET_DRAM        BITMAP_INDEX(CCU_RESET_BASE + 0, 14)
#define CCU_RESET_EMAC        BITMAP_INDEX(CCU_RESET_BASE + 0, 17)
#define CCU_RESET_TSC         BITMAP_INDEX(CCU_RESET_BASE + 0, 18)
#define CCU_RESET_HSTIMER     BITMAP_INDEX(CCU_RESET_BASE + 0, 19)
#define CCU_RESET_SPI0        BITMAP_INDEX(CCU_RESET_BASE + 0, 20)
#define CCU_RESET_SPI1        BITMAP_INDEX(CCU_RESET_BASE + 0, 21)
#define CCU_RESET_USBOTG      BITMAP_INDEX(CCU_RESET_BASE + 0, 23)
#define CCU_RESET_EHCI0       BITMAP_INDEX(CCU_RESET_BASE + 0, 24)
#define CCU_RESET_EHCI1       BITMAP_INDEX(CCU_RESET_BASE + 0, 25)
#define CCU_RESET_EHCI2       BITMAP_INDEX(CCU_RESET_BASE + 0, 26)
#define CCU_RESET_EHCI3       BITMAP_INDEX(CCU_RESET_BASE + 0, 27)
#define CCU_RESET_OHCI0       BITMAP_INDEX(CCU_RESET_BASE + 0, 28)
#define CCU_RESET_OHCI1       BITMAP_INDEX(CCU_RESET_BASE + 0, 29)
#define CCU_RESET_OHCI2       BITMAP_INDEX(CCU_RESET_BASE + 0, 30)
#define CCU_RESET_OHCI3       BITMAP_INDEX(CCU_RESET_BASE + 0, 31)

#define CCU_RESET_VE          BITMAP_INDEX(CCU_RESET_BASE + 1, 0)
#define CCU_RESET_TCON0       BITMAP_INDEX(CCU_RESET_BASE + 1, 3)
#define CCU_RESET_TCON1       BITMAP_INDEX(CCU_RESET_BASE + 1, 4)
#define CCU_RESET_DEINTERLACE BITMAP_INDEX(CCU_RESET_BASE + 1, 5)
#define CCU_RESET_CSI         BITMAP_INDEX(CCU_RESET_BASE + 1, 8)
#define CCU_RESET_TVE         BITMAP_INDEX(CCU_RESET_BASE + 1, 9)
#define CCU_RESET_HDMI0       BITMAP_INDEX(CCU_RESET_BASE + 1, 10)
#define CCU_RESET_HDMI1       BITMAP_INDEX(CCU_RESET_BASE + 1, 11)
#define CCU_RESET_DE          BITMAP_INDEX(CCU_RESET_BASE + 1, 12)
#define CCU_RESET_GPU         BITMAP_INDEX(CCU_RESET_BASE + 1, 20)
#define CCU_RESET_MSGBOX      BITMAP_INDEX(CCU_RESET_BASE + 1, 21)
#define CCU_RESET_SPINLOCK    BITMAP_INDEX(CCU_RESET_BASE + 1, 22)
#define CCU_RESET_DEBUG       BITMAP_INDEX(CCU_RESET_BASE + 1, 31)

#define CCU_RESET_EPHY        BITMAP_INDEX(CCU_RESET_BASE + 2, 2)

#define CCU_RESET_CODEC       BITMAP_INDEX(CCU_RESET_BASE + 4, 0)
#define CCU_RESET_SPDIF       BITMAP_INDEX(CCU_RESET_BASE + 4, 1)
#define CCU_RESET_PIO         BITMAP_INDEX(CCU_RESET_BASE + 4, 5)
#define CCU_RESET_THS         BITMAP_INDEX(CCU_RESET_BASE + 4, 8)
#define CCU_RESET_I2S0        BITMAP_INDEX(CCU_RESET_BASE + 4, 12)
#define CCU_RESET_I2S1        BITMAP_INDEX(CCU_RESET_BASE + 4, 13)
#define CCU_RESET_I2S2        BITMAP_INDEX(CCU_RESET_BASE + 4, 14)

#define CCU_RESET_I2C0        BITMAP_INDEX(CCU_RESET_BASE + 6, 0)
#define CCU_RESET_I2C1        BITMAP_INDEX(CCU_RESET_BASE + 6, 1)
#define CCU_RESET_I2C2        BITMAP_INDEX(CCU_RESET_BASE + 6, 2)
#define CCU_RESET_UART0       BITMAP_INDEX(CCU_RESET_BASE + 6, 16)
#define CCU_RESET_UART1       BITMAP_INDEX(CCU_RESET_BASE + 6, 17)
#define CCU_RESET_UART2       BITMAP_INDEX(CCU_RESET_BASE + 6, 18)
#define CCU_RESET_UART3       BITMAP_INDEX(CCU_RESET_BASE + 6, 19)
#define CCU_RESET_SCR0        BITMAP_INDEX(CCU_RESET_BASE + 6, 20)
#define CCU_RESET_SCR1        BITMAP_INDEX(CCU_RESET_BASE + 6, 21)

#endif /* PLATFORM_CCU_H */
