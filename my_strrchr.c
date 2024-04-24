#include <stdio.h>
char* my_strrchr(char* param_1, char param_2)
{
    const char* last_occ = NULL;
   while (*param_1 != '\0') { 
        if (param_2 == *param_1) {
            last_occ = param_1;
        }
        param_1++;
    }
    return (char *)last_occ; 

}
