/*
 * C programming Interview Questions
 *
 * Designated initialization for an array
 * Declare an int array and initialization value 10 in position 3 and 6 of the array
*/

#include <stdio.h>


void main()
{
    int arr[10] = {[2]=10, [5]=10};
    int i;

    //print the output
    for(i=0 ;i<10; i++)
        printf("%d\r\n",arr[i]);
}
