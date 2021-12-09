/*
 * C programming Interview Questions
 *
 * Print out a string to standard output device without using semicolon
*/

#include <stdio.h>

void main()
{
    //choice-1
    if(printf("\r\nPrint without semicolon, Its Working!!!")){}

    //choice-2
    while(!printf("\r\nPrint without semicolon, Its Working!!!")){}

}
