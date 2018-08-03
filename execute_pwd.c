#include"header.h"
int execute_pwd(){
    char pwd[2000];
    getcwd(pwd,sizeof(pwd));
    printf("%s\n", pwd);
    return 1;
}

