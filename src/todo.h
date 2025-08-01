#ifndef TODO_H
#define TODO_H

//program structure
#define MAX_TASKS 100
typedef struct { 
    char name[50];
    int completed;
} Task;

//global varibles
extern Task tasks[MAX_TASKS];
extern int count_task;

//functions
void add_task();
void print_task();
void delete_task();
void mark_task();
void save_task();
void load_task();

#endif
