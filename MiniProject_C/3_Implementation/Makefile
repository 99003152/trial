# All source files
SRC = unity/unity.c\
src/cipher.c\
test/test_cipher.c\
main.c\

# All include folders with header files
INC = -Iunity\
-Iinc\
-Itest

# Name of the project
PROJECT_NAME = CIPHER.exe

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

