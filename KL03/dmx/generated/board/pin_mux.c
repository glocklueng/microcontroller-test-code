/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v3.0
processor: MKL03Z32xxx4
package_id: MKL03Z32VFK4
mcu_data: ksdk2_0
processor_version: 2.0.0
pin_labels:
- {pin_num: '8', pin_signal: PTA6/TPM0_CH0/SPI0_MISO, label: red, identifier: red}
- {pin_num: '7', pin_signal: PTA5/RTC_CLKIN/TPM0_CH1/SPI0_SS_b, label: green, identifier: green}
- {pin_num: '20', pin_signal: ADC0_SE0/CMP0_IN0/PTA12/IRQ_13/LPTMR0_ALT2/TPM1_CH0/TPM_CLKIN0/CLKOUT, label: blue, identifier: blue}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/*FUNCTION**********************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 *END**************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN2_IDX                         2u   /*!< Pin number for pin 2 in a port */
#define PIN5_IDX                         5u   /*!< Pin number for pin 5 in a port */
#define PIN6_IDX                         6u   /*!< Pin number for pin 6 in a port */
#define PIN10_IDX                       10u   /*!< Pin number for pin 10 in a port */
#define PIN12_IDX                       12u   /*!< Pin number for pin 12 in a port */
#define SOPT4_TPM1CH0SRC_TPM1_CH0     0x00u   /*!< TPM1 Channel 0 Input Capture Source Select: TPM1_CH0 signal */
#define SOPT5_LPUART0RXSRC_LPUART_RX  0x00u   /*!< LPUART0 Receive Data Source Select: LPUART_RX pin */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '8', peripheral: TPM0, signal: 'CH, 0', pin_signal: PTA6/TPM0_CH0/SPI0_MISO, direction: OUTPUT}
  - {pin_num: '7', peripheral: TPM0, signal: 'CH, 1', pin_signal: PTA5/RTC_CLKIN/TPM0_CH1/SPI0_SS_b, direction: OUTPUT}
  - {pin_num: '20', peripheral: TPM1, signal: 'CH, 0', pin_signal: ADC0_SE0/CMP0_IN0/PTA12/IRQ_13/LPTMR0_ALT2/TPM1_CH0/TPM_CLKIN0/CLKOUT, direction: OUTPUT}
  - {pin_num: '13', peripheral: LPUART0, signal: RX, pin_signal: ADC0_SE8/CMP0_IN3/PTB1/IRQ_6/LPUART0_TX/LPUART0_RX/I2C0_SDA}
  - {pin_num: '14', peripheral: LPUART0, signal: TX, pin_signal: VREF_OUT/CMP0_IN5/PTB2/IRQ_7/LPUART0_RX/LPUART0_TX}
  - {pin_num: '9', peripheral: GPIOB, signal: 'GPIO, 10', pin_signal: PTB10/TPM0_CH1/SPI0_SS_b}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTA, PIN12_IDX, kPORT_MuxAlt2);           /* PORTA12 (pin 20) is configured as TPM1_CH0 */
  PORT_SetPinMux(PORTA, PIN5_IDX, kPORT_MuxAlt2);            /* PORTA5 (pin 7) is configured as TPM0_CH1 */
  PORT_SetPinMux(PORTA, PIN6_IDX, kPORT_MuxAlt2);            /* PORTA6 (pin 8) is configured as TPM0_CH0 */
  PORT_SetPinMux(PORTB, PIN1_IDX, kPORT_MuxAlt3);            /* PORTB1 (pin 13) is configured as LPUART0_RX */
  PORT_SetPinMux(PORTB, PIN10_IDX, kPORT_MuxAsGpio);         /* PORTB10 (pin 9) is configured as PTB10 */
  PORT_SetPinMux(PORTB, PIN2_IDX, kPORT_MuxAlt3);            /* PORTB2 (pin 14) is configured as LPUART0_TX */
  SIM->SOPT4 = ((SIM->SOPT4 &
    (~(SIM_SOPT4_TPM1CH0SRC_MASK)))                          /* Mask bits to zero which are setting */
      | SIM_SOPT4_TPM1CH0SRC(SOPT4_TPM1CH0SRC_TPM1_CH0)      /* TPM1 Channel 0 Input Capture Source Select: TPM1_CH0 signal */
    );
  SIM->SOPT5 = ((SIM->SOPT5 &
    (~(SIM_SOPT5_LPUART0RXSRC_MASK)))                        /* Mask bits to zero which are setting */
      | SIM_SOPT5_LPUART0RXSRC(SOPT5_LPUART0RXSRC_LPUART_RX) /* LPUART0 Receive Data Source Select: LPUART_RX pin */
    );
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
