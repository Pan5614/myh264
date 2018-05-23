CROSS_COMPILE= mips-linux-gnu-
CXX=${CROSS_COMPILE}g++
CC=${CROSS_COMPILE}gcc

CFLAGS = -g -Wall

 
CUR_DIR = $(shell pwd)
TOP_DIR = $(CUR_DIR)/..
SRC_DIR = $(TOP_DIR)/src
INC_DIR = $(TOP_DIR)/inc


CFLAGS := -w
CFLAGS += -I${INC_DIR}


CFLAGS += -I${TOP_DIR}/mylib/x264/include
LDFLAGS = -lx264 -L${TOP_DIR}/mylib/x264/lib    -lpthread





.PHONY:all
all: myh264 install

myh264:main.o h264encoder.o
	$(CXX) main.o h264encoder.o -o myh264 ${LDFLAGS}  

main.o: ${SRC_DIR}/main.cpp
	$(CXX) -c ${SRC_DIR}/main.cpp ${CFLAGS} ${LDFLAGS} 

h264encoder.o: ${SRC_DIR}/h264encoder.cpp
	$(CXX) -c ${SRC_DIR}/h264encoder.cpp ${CFLAGS} ${LDFLAGS} 



.PHONY:install
install:
	@mkdir -p ${TOP_DIR}/out/
	@mv myh264 ${TOP_DIR}/out/ -f
	@echo "\033[32m ######## make completed successfully ########\033[0m"
	@echo "\033[32m ######## `date` ########\033[0m"	

clean:
	@rm -rf *.o
	@rm ${TOP_DIR}/out/ -rf
	@echo "\033[32m ######## make clean successfully ########\033[0m"
	@echo "\033[32m ######## `date` ########\033[0m"
