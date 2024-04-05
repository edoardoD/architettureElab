
#include <stdio.h>

int main(){
    
    printf("Hello World\n");
   __asm{
          mov eax, 10
          mov ebx, 20
   }
}