TARGET = main
SRC = src/main.c src/todo.c

DIR = bin
CC = gcc

$(DIR)/$(TARGET): $(SRC)
	@echo "Executing the file"
	@mkdir -p $(DIR)
	$(CC) $(SRC) -o $@

run: $(DIR)/$(TARGET)
	./$(DIR)/$(TARGET)
	@cd $(DIR)

.PHONY: clean
clean:
	rm -rf $(DIR)

