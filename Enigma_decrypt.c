// encryption and decryption system by developer rezwan
#include <stdio.h>
#include<conio.h>

void decrypt(char *str){
   char *ptr  =  str;

   while(*ptr != '\0'){
      *ptr = *ptr - 4;
         while (*ptr != '\0')
            {
               *ptr = *ptr - 5;
               ptr++;
            }
       ptr++;
   }
}

int main(){
   char str[1000];
   
   printf("Enter encrypted text  to decrypt: ");
   gets(str);
   decrypt(str);
   printf("Decrypted text: %s\n", str);

   getch();
   return 0;
}