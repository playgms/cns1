#include<stdio.h>

int operate(char *str, int operation){
while (*str != '\0'){
  *str = *str & 127;
  
  if (operation == 1){
     *str = *str ^ 127;
     }
  *str++;
  }
}

int main(){

char str[] = "Hello World";

printf ("The plain text is %s\n",str);

operate(str,0);

printf ("The text after the and operation with 127: %s\n",str);

operate(str,1);

printf("The text after the xor operation with 127: %s\n",str);

return 0;
}
