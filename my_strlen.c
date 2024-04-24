#include <stddef.h>
int my_strlen(char* param_1)
{

  int len = 0;
  if(param_1 != NULL)
  {
    while(*param_1 != '\0')
    {
      ++len;
      ++param_1;
    }
  }
  return len;
}
