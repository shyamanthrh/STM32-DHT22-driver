/**
 * @file dht22.h
 * @brief Header file for DHT22 driver
 * @author :  Shyamanth RH <shyamanthrh@gmail.com>
 * @github : https://github.com/shyamanthrh
 *
 * work based on controllerstech.com
 * https://controllerstech.com/temperature-measurement-using-dht22-in-stm32/
 */
#include <stdint.h>
#include <stdbool.h>
#include "tim.h"
#include "gpio.h"


#define DHT22_PORT GPIOA
#define DHT22_PIN GPIO_PIN_10

/**
 * \brief Delay in microseconds
 *
 * Generates delay in microseconds based on the value passed
 *
 * \param[in]  time Time in microseconds
 */
void delay (uint16_t time);

/**
 * \brief Sets pinmode to output
 *
 * This functions sets the GPIO pinmode to output
 *
 * \param[in]  *GPIOx Port name
 * \param[in]  GPIO_Pin Pin number
 */

void Set_Pin_Output (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

/**
 * \brief Sets pinmode to input
 *
 * This functions sets the GPIO pinmode to input
 *
 * \param[in]  *GPIOx Port name
 * \param[in]  GPIO_Pin Pin number
 */
void Set_Pin_Input (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

/**
 * \brief Initiate starting sequence
 *
 * This functions initiates the starting sequence for DHT22
 *
 * \param void - no parameters.
 */
void DHT22_Start (void);

/**
 * \brief Check response
 *
 * This functions checks the response from DHT22
 *
 * \param void - no parameters.
 */
uint8_t DHT22_Check_Response (void);

/**
 * \brief Read data
 *
 * This functions reads the data coming from DHT22
 *
 * \param void - no parameters.
 */
uint8_t DHT22_Read (void);


