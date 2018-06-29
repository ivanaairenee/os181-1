/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV01 Mon Oct  2 16:21:15 WIB 2017
 * START Mon Sep 26 18:23:45 WIB 2016
 */

#include <stdio.h>

void main (void) {
   int cc; 
   while((cc = getchar()) != EOF) { 
      putchar(cc); 
   }
}

/* 
 * Fri Jun 29 23:42:00 WIB 2018
 * Notes by AII
 * getchar() reads a single character from the standard 
 * input stream and writes it to cc
 * putchar(char) writes a character (an unsigned char) 
 * specified by the argument char to stdout
 *
 * this program will continue to read character from stdin 
 * until EOF, that is, no more input from a stream
 * EOF is defined in stdio.h (and is usually -1). 
 * On linux, ctrl+d signals EOF, and on windows it's ctrl+z.
 */