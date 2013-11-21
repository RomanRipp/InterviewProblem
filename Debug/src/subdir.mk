################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FindInArray.cpp \
../src/InterwiewProblem.cpp \
../src/TestCases.cpp 

OBJS += \
./src/FindInArray.o \
./src/InterwiewProblem.o \
./src/TestCases.o 

CPP_DEPS += \
./src/FindInArray.d \
./src/InterwiewProblem.d \
./src/TestCases.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


