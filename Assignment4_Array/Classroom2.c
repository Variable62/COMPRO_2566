#include <stdio.h>
#include <string.h>
int main()
{
   char line[100];
   printf("Enter a line : ");
   fgets(line, sizeof(line),stdin);
   printf("The line is %s",line);

   return 0;
}