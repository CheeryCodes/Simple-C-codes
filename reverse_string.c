#include <stdio.h>
#include <string.h>
char* reverse_string(char* param_1)
{
    int len = strlen(param_1);
 
    // for loop
    for (int i = 0, j = len - 1; i <= j; i++, j--) {
        // swapping characters
        char c = param_1[i];
       param_1[i] = param_1[j];
        param_1[j] = c;
    }
return param_1;
}
