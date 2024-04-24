char* my_strcpy(char* param_1, char* param_2)
{
    int i;
    for (i=0; i < *param_2 && param_2[i] != '\0'; i++){
        param_1[i] = param_2[i];
    }
    for (i=i; i < *param_2 ; i++){
       param_1[i] = '\0';
    }

    return param_1;
}
