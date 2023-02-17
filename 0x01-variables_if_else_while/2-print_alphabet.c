#include <stdio.h>

int main () {
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   ch='\n';
   putchar(ch); 
   return(0);
}
