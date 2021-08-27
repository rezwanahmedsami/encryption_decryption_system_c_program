#include <stdio.h>

void encrypt(char *str){
   char *ptr  =  str;

   while(*ptr != '\0'){
      *ptr = *ptr + 4;

         while (*ptr != '\0')
         {
            *ptr = *ptr + 5;
             ptr++;
         }
         
       ptr++;
   }
}


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
   char str[250];

   printf("Enter your string: ");
   gets(str);

   encrypt(str);
   printf("Encrypted text: %s\n", str);
   decrypt(str);
   printf("Decrypted text: %s\n", str);
   return 0;
}