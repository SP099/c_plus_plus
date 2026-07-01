# Compiler and Flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2

# Directories
SRC_DIR = src
INC_DIR = inc
BUILD_DIR = build

# Executable name
TARGET = app

# Automatically find all .cpp files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Include directory
INCS = -I$(INC_DIR)

# Default target
all: $(BUILD_DIR) $(TARGET)

# Create build directory
$(BUILD_DIR):
	mkdir -p $@

# Linking
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Compilation rule
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(wildcard $(INC_DIR)/*.hpp)
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

# Clean
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Run
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
