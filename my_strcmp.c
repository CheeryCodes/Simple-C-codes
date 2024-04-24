#include <stdio.h>
int my_strcmp(char* param_1, char* param_2)
{
    while (*param_1 && *param_2){
    if(*param_1 != *param_2){
        return (*param_1 > *param_2) ? 1 : -1 ;
    }
        param_1++;
        param_2++;
    }
   
    if(*param_1 == '\0' && *param_2 == '\0'){
        return  0;
    }
   else if(*param_1 == '\0'){
        return  -1;
    }
    else {
        return  1;
    }
}
