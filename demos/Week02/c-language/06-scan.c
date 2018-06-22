/*
 * Copyright (C) 2013-2018 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV01 Tue Feb 27 09:18:36 WIB 2018
 * START 2013
 */


#include <stdio.h> 
#include <stdlib.h> 

void main(void) { 
   int ii; 
   char buf[10];
   printf("Silakan isi: ");
   scanf("%s",buf);
   printf("Isi buffer = %s\n",buf);
}

/*
 * scanf() reads formatted data from standard input 
 * and then writes the results into the arguments given
 * 
 * the line scanf("%s",buf); will read string inputted by
 * user and write the value to variable buf
 */