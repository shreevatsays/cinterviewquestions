/*
 * C programming Interview Questions
 *
 * Covert ASCII string to integer
 *
 * This also a C inbuilt function
 */

#include <stdio.h>

int a2i(char *ptr)
 {
     int result=0, sign=1, count=0;

     if(ptr[count] == '-')
     {
         sign=-1;
         count++;
     }

     for(;ptr[count]!='\0';++count)
     {
         result = (result*10) + (ptr[count] - '0');
     }

     return sign*result;

 }

void main()
{
    char str[] = "-123";
    int value = a2i(str);
    printf("Int value is: %d",value);
}

