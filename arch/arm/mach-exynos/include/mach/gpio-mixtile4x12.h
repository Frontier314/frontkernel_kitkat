#ifndef __ASM_ARCH_GPIO_MIXTILE4X12_H
#define __ASM_ARCH_GPIO_MIXTILE4X12_H __FILE__

#define GPIO_LCD_PWM            EXYNOS4_GPD0(0)     // PWM
#define GPIO_LCD_POWER          EXYNOS4_GPX2(4)     // LCD
#define GPIO_LVDS_POWER         EXYNOS4212_GPM3(3)     // LVDS
#define GPIO_LCD_BACKLED        EXYNOS4212_GPM3(2)     // LCD

#define GPIO_WIFI_POWER         EXYNOS4212_GPM4(5)     // wifi

#define GPIO_CAMERA_POWER       EXYNOS4212_GPM1(4)     // camera
#define GPIO_CAMERA_F_RST       EXYNOS4212_GPM1(2)     // Front camera reset control
#define GPIO_CAMERA_F_PWDN      EXYNOS4212_GPM1(3)     // Front camera power control
#define GPIO_CAMERA_B_RST       EXYNOS4212_GPM2(3)     // Rear camera reset control
#define GPIO_CAMERA_B_PWDN      EXYNOS4212_GPM2(4)     // Rear camera power control
#define GPIO_TVP5151_RST        EXYNOS4212_GPM4(3)     // TVP5151 reset control
#define GPIO_TVP5151_PWDN       EXYNOS4212_GPM4(7)     // TVP5151 power control
#define GPIO_FLASH_EN           EXYNOS4_GPD0(2)     // Flash power control
#define GPIO_FLASH_MODE         EXYNOS4212_GPM4(1)     // Flash mode control

#define GPIO_TP_POWER           EXYNOS4212_GPM4(2)     // TP power control
#define GPIO_TP_INT             EXYNOS4_GPX1(7)     // TP interrupt signal line
#define GPIO_TP_RST             EXYNOS4_GPX1(6)     // TP reset signal

#define GPIO_GPS_POWER          EXYNOS4212_GPM4(0)     // GPS power control
#define GPIO_GPS_EN             EXYNOS4_GPX0(7)     // GPS enable pin
#define GPIO_GPS_RXD            EXYNOS4_GPA0(4)     // GPS receive data pin

#define GPIO_3G_POWER           EXYNOS4212_GPM3(0)     // 3G power control

#define GPIO_USBHUB_POWER       EXYNOS4212_GPM3(7)     // USB_HUB Chip Power Control
//#define GPIO_USB5V_POWER        EXYNOS4_GPX3(4)     // USB_HOST 5V power control
#define GPIO_USB5V_POWER        EXYNOS4212_GPM3(6)     // USB_HOST 5V power control
#define GPIO_USBOTG_ID          EXYNOS4_GPX0(0)     // USB OTG ID
#define GPIO_USBOTG_POWER       EXYNOS4212_GPM3(4)     // USB OTG 5V power control
#define GPIO_USBOTG_VBUS        EXYNOS4_GPX1(1)     // USB VBUS interrupt detection

#define GPIO_DM9000_CS          EXYNOS4_GPY0(1)     // DM9000 Chip-select signal pin
#define GPIO_DM9000_IRQ         IRQ_EINT(21)        // DM9000 Interrupt signal
#define GPIO_DM9000_POWER	EXYNOS4_GPX3(5)     // DM9000 Power Control
#define GPIO_DM9000_CS0		EXYNOS4_GPY0(0)     // DM9000 Level conversion control
#define GPIO_DM9000_OE          EXYNOS4_GPY0(4)     // DM9000 OE Signal
#define GPIO_DM9000_WE          EXYNOS4_GPY0(5)     // DM9000 WE Signal

#define GPIO_MOTOR_POWER        EXYNOS4212_GPM3(5)     // Vibration motor power control
#define GPIO_VOLUMEUP_KEY       EXYNOS4_GPX2(1)     // volume+ Button
#define GPIO_VOLUMEDOWN_KEY     EXYNOS4_GPX2(2)     // volume- Button
#define GPIO_MEDIA_KEY          EXYNOS4_GPX2(3)     // hook Button
#define GPIO_HOME_KEY           EXYNOS4_GPX1(2)     // HOME Button
#define GPIO_MENU_KEY           EXYNOS4_GPX1(4)     // MENU Button
#define GPIO_BACK_KEY           EXYNOS4_GPX1(5)     // BACK Button
#define GPIO_POWER_KEY          EXYNOS4_GPX0(1)     // POWER Button
#define POWER_KEY_EINT          0
#define IRQ_POWER_WAKEUP        1
#define IRQ_RTC_WAKEUP          1
//#define GPIO_KEY_LED            EXYNOS4_GPX2(0)     // Button light control signal

#define GPIO_HEADPHONE          EXYNOS4_GPX0(3)     // Headphones into the test line

//#define GPIO_RFID_PWR_CTRL      EXYNOS4_GPX2(7)     // RFID Power Control

#define GPIO_CHARGE_STATE1      EXYNOS4_GPX1(3)     // Charging status indication 1
#define GPIO_CHARGE_STATE2      EXYNOS4_GPX3(0)     // Charging status indication 2

#endif /* __ASM_ARCH_GPIO_MIXTILE4X12_H */
