#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void new_cmd() {
    printf("New\n");
}

void open_cmd() {
    printf("Open\n");
}

void close_cmd() {
    printf("Close\n");
}

void save_cmd() {
    printf("Save\n");
}

void exit_cmd() {
    printf("Exot\n");
}
struct {
    char* cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] = {
    {"new", new_cmd},
    {"open", open_cmd},
    {"close", close_cmd},
    {"save", save_cmd},
    {"exit", exit_cmd},
};

void execute_command(char* cmd) {
    for (int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++) {
        if (strcmp(file_cmd[i].cmd_name, cmd) == 0) {
            file_cmd[i].cmd_pointer();  
            return;
        }
    }
    printf("Command not found: %s\n", cmd);
}

int main() {
    char command[20];
    printf("Enter command: ");
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';  

    execute_command(command);  

    return 0;
}
