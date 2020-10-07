# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/calculator_operations.c\

# All test source files
TEST_SRC = src/cipher.c\
test/test_cipher.c

TEST_OUTPUT = $(BUILD)/Test_$(CIPHER).exe

# All include folders with header files
INC	= -Iinc

PROJECT_OUTPUT = $(BUILD)/$(CIPHER).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(CIPHER):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe

# Call `make run` to run the application
run:$(CIPHER)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
