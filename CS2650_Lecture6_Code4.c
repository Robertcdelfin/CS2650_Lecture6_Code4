/*
 ============================================================================
 Name        : CS2650_Lecture6_Code4.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main( ) {
   char str[100];
   int i;
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   scanf("%s %d", str, &i);
   printf( "\nYou entered: %s %d ", str, i);
   return 0;
}
