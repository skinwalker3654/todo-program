#include <stdio.h>
#include "todo.h"

int main(void) {
    int option;
    while(1) {
        //menu
        printf("1. Add task\n");
        printf("2. Delete task\n");
        printf("3. Print tasks\n");
        printf("4. Mark task\n");
        printf("5. Save data\n");
        printf("6. Exit\n");
        
        //geting option
        printf("\nPick an option 1-6: ");
        if(scanf("%d",&option)!=1) {
            printf("Error: Invalid input\n");
            return 1;
        }
        int ch;
        while((ch=getchar())!='\n'&&ch!=EOF);

        //cases
        switch (option) {
            case 1: add_task(); break;
            case 2: delete_task(); break;
            case 3: print_task(); break;
            case 4: mark_task(); break;
            case 5: save_task(); break;
            case 6: printf("Exiting the program...\n"); return 0;
        default:
                printf("Error: Invalid option\n");
                continue;
        }
    }
    return 0;
}
