#ifndef guard
#define guard 

#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>
#include<grp.h>
#include<pwd.h>
#include<sys/stat.h>
#include<dirent.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<sys/types.h>
#include<poll.h>
#include<sys/utsname.h>
#include<sys/resource.h>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"
#define COMMAND_DLMTR " \n\t"       // includes space, nextLine, and tab

char* concat(const char *s1, const char *s2);
int string_compare(char *a, char *b);
int execute_pinfo(char **args);
int execute_nightswatch(char ** args);
void proc_exit();
int execute_rest(char **args);
int execute_ls(char **args);
int execute_exit();
int execute_pwd();
int execute_cd(char **args);
int num_of_internal();
int command_execute(char **args);
char **command_spliter(char *command);
char **command_reader();
void printhome();
void shell_loop(void);
int execute_echo(char **args);
#endif
