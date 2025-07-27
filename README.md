# *TODO-MANAGER in C*

## Description
### its a todo-manager program 
### with functions like:

- add_task()
- delete_task()
- print_task()
- mark_task()
- save_task()

## How to run the program
Requirments: gcc compiler
```bash
make
make run
```
when you want to delete the files
```bash
make clean
```
## __You can find the saved data__
## __and executable file on__
## __The bin folder__

# FILE STRUCTURE

todo-program
 |
 |--examples/
 |   |--usage.txt
 |
 |--src/
 |   |--main.c
 |   |--todo.c
 |   |--todo.h
 |
 |--.gitignore (ignores the bin folder)
 |
 |--Makefile
 |--README.md
 |--LICENSE
 |
 |--bin/ (When program executed)
     |--main
     |--tasks.txt (if you save the data)
