#
# Created on Thu Sep 02 2021
#
# Copyright (c) 2021 Peterson Yuhala, IIUN
# Custom makefile to build all my leetcode C/C++ code
# License ???
# 

CXX := g++

SRC := .

INCLUDE_PATHS := -I$(SRC) -I$(SRC)/headers

COMPILE_FLAGS := $(INCLUDE_PATHS)

LD_FLAGS := -lm

HEADERS := $(wildcard ./*.hpp)
APP_CPP_FILES := $(wildcard ./*.cpp)
APP_OBJS := $(APP_CPP_FILES:.cpp=.o)


APP := app




.PHONY: all clean

all: $(APP)

$(SRC)/%.o: $(SRC)/%.cpp $(HEADERS)
		$(CXX) $(COMPILE_FLAGS) -c $< -o $@
		@echo "CXX <= $<" 

$(APP): $(APP_OBJS)
		@$(CXX) $^ -o $@ $(LD_FLAGS)
		@echo "LINK =>  $@"



clean:
	@rm app $(APP_OBJS)
	