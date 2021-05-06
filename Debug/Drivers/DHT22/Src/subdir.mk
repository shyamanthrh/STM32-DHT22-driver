################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/DHT22/Src/dht22.c 

OBJS += \
./Drivers/DHT22/Src/dht22.o 

C_DEPS += \
./Drivers/DHT22/Src/dht22.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/DHT22/Src/dht22.o: ../Drivers/DHT22/Src/dht22.c Drivers/DHT22/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L072xx -c -I../Core/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Shyamanth R H/Documents/Studies/Major project/Matlab code/Dht22test/Drivers/DHT22/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/DHT22/Src/dht22.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

