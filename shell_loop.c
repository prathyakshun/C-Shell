#include"header.h"
void shell_loop(void){
    char **commands, **args;
    int status = 1;
    do{
        printhome();
        commands = command_reader();
        int i = 0;
        while(commands[i] != NULL){
            args = command_spliter(commands[i]);
            status = command_execute(args);
            i++;
            free(args);
        }
        free(commands);
    }
    while(status);
}