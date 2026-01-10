.PHONY: all clean run_c run_cpp directories


CC = gcc
CXX = g++
CFLAGS = -std=c23 -Wall -Wextra -Wpedantic -g
CXXFLAGS = -std=c++23 -Wall -Wextra -Wpedantic -g


C_DIR = C
CXX_DIR = CXX
BUILD_DIR = build


all: directories hash_c hash_cpp

directories:
	mkdir -p $(BUILD_DIR)


hash_c: $(C_DIR)/main.c $(C_DIR)/hash_fn.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/hash_c $(C_DIR)/main.c $(C_DIR)/hash_fn.c -lm


hash_cpp: $(CXX_DIR)/main.cpp $(CXX_DIR)/hash_fn.cpp
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/hash_cpp $(CXX_DIR)/main.cpp $(CXX_DIR)/hash_fn.cpp


clean:
	rm -rf $(BUILD_DIR)


run_c: hash_c
	./$(BUILD_DIR)/hash_c

run_cpp: hash_cpp
	./$(BUILD_DIR)/hash_cpp
