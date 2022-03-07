PROJ_NAME = HeatingSeat

BUILD_DIR = File

SRC = src/main.c\
src/case1.c\
src/case2.c\
src/case3.c\
src/case4.c\

OBJCOPY = avr-objcopy.exe

AVRDUDE := avrdude

HFLAGS = -j .text -j .data -O ihex

INC = -I inc

ifdef OS	
   RM = del /q
   FixPath = $(subst /,\,$1)
   CC = avr-gcc.exe
   AVR_OBJ_CPY = avr-objcopy.exe
else 
   ifeq ($(shell uname), Linux)
      RM = rm -rf				
	  # Correct the path based on OS
      FixPath = $1				
	  # Name of the compiler used
	  CC = avr-gcc
	  # Name of the elf to hex file converter used
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

.PHONY:all analysis clean doc

all:$(BUILD_DIR)
	# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	
hex: $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	#create hex file
	$(OBJCOPY) $(HFLAGS) $< $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)

$(BUILD_DIR):
	# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
	#Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
	#Build the code code documentation using Doxygen command line utility
	make -C documentation

clean:
	# Remove all the build files and generated document files
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
	rmdir $(BUILD_DIR)