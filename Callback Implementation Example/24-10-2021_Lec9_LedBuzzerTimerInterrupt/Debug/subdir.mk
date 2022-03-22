################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BUZ_prg.c \
../DIO_prg.c \
../GIE_prg.c \
../LED_prg.c \
../TR0_prg.c \
../main.c 

OBJS += \
./BUZ_prg.o \
./DIO_prg.o \
./GIE_prg.o \
./LED_prg.o \
./TR0_prg.o \
./main.o 

C_DEPS += \
./BUZ_prg.d \
./DIO_prg.d \
./GIE_prg.d \
./LED_prg.d \
./TR0_prg.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


