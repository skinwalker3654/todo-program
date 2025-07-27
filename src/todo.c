#include <stdio.h>
#include <string.h>
#include "todo.h"

Task tasks[MAX_TASKS];
int task_count = 0;

//add
void add_task() {
    if(task_count >= MAX_TASKS-1) {
        printf("\nError: Task overflow\n\n");
        return;
    }

    printf("\nEnter task name: ");
    if(fgets(tasks[task_count].name,sizeof(tasks[task_count].name),stdin)==NULL) {
        printf("\nError: Input failure\n");
        return;
    }

    tasks[task_count].name[strcspn(tasks[task_count].name,"\n")] = 0;
    tasks[task_count].completed = 0;
    printf("Task '%s' added succesfuly\n\n",tasks[task_count].name);

    task_count++;
}

//delete
void delete_task() {
    if(task_count == 0) {
        printf("\nError: No tasks yet\n\n");
        return;
    }
    
    int index;
    printf("\nEnter task index: ");
    if(scanf("%d",&index)!=1) {
        printf("Error: Invalid input\n");
        return;
    }
    int ch;
    while((ch=getchar())!='\n'&&ch!=EOF);

    if(index < 0 || index > task_count-1) {
        printf("Error: Value %d not found\n",index);
        return;
    }

    for(int i=index; i<task_count; i++) 
        tasks[i] = tasks[i+1];
    task_count--; 
    printf("Task %d deleted succesfuly\n\n",index);
}

//print
void print_task() {
    if(task_count == 0) {
        printf("\nError: No tasks yet\n\n");
        return;
    }

    printf("\n");
    for(int i=0; i<task_count; i++) {
        printf("index %d: name: %s [%c]\n"
            ,i,tasks[i].name,(tasks[i].completed==1) ? 'X' : ' ');
    }
    printf("\n");
}

//mark
void mark_task() {
    if(task_count == 0) {
        printf("\nError: No tasks yet\n\n");
        return;
    }

    int index;
    printf("\nEnter task index: ");
    if(scanf("%d",&index)!=1) {
        printf("Error: Invalid input\n");
        return;
    }
    int ch;
    while((ch=getchar())!='\n'&&ch!=EOF);
    
    if(index < 0 || index > task_count-1) {
        printf("Error: Value %d not found\n",index);
        return;
    }

    tasks[index].completed = 1;
    printf("Task %d marked as done\n\n",index);
}

//save
void save_task() {
    if(task_count == 0) {
        printf("\nError: No tasks yet\n\n");
        return;
    }

    FILE *file = fopen("bin/tasks.txt","w");
    if(!file) {
        printf("\nError: Failed to save the data\n");
        return;
    }

    for(int i=0; i<task_count; i++) {
        fprintf(file,"%d. name: '%s' [%c]\n"
        ,i,tasks[i].name,(tasks[i].completed==1) ? 'X' : ' ');
    }

    printf("Data saved succesfuly\n\n");
}
