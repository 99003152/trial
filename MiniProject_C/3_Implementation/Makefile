
# All source code files
SRC = cipher.c\
src/cipher.c\

# All include folders with header files
INC	= -Iinc


# Output directory
BUILD = build




$(PROJECT_NAME) : $(SRC)
	gcc $(SRC) $(INC) -w -o $(PROJECT_NAME)
	
DOCUMENTATION_OUTPUT = document/html

# Call 'make run' to run the application	
run:$(PROJECT_NAME)
	./$(PROJECT_NAME)
	
# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

# Document files using Doxygen
doc:
	make -C ./documentation

# Remove all the built files, invoke by 'make clean'	
clean:
	rm -rf $(PROJECT_NAME) documentation/html
	



TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

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
	mkdir build/

