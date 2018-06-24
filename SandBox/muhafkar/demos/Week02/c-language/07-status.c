/*
 * Copyright (C) 2013-2018 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV01 Tue Feb 27 09:19:16 WIB 2018
 * START 2013
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(void) {
   printf("Process Identifier (PID) [%5.5d] -- Perent PID (PPID[%5.5d])\n", getpid(), getppid());
   sleep(1);
}

/* Notes by Anisha Inas
 * In Linux, an executable stored on disk is called a program,
 * and a program loaded into memory and running is called a process. 
 * When a process is started, it is given a unique number called process ID (PID)
 * that identifies that process to the system
 * 
 * Each process is assigned a parent process ID (PPID) that tells which process started it. 
 * The PPID is the PID of the process’s parent.
 *
 * To see PID and PPID in current process you can use getpid() and getppid()
 *
 * sleep() function delays program execution for a given number of seconds
 */

/* Notes by Michael Giorgio 
 *
 * The width.precision formatting
 * Example: %10.5d formatting provides 10 characters of width, and accepts up to 
 * 5 precision.
 * Input: 10.654321
 * With %10.5d, it prints: (notice the leading space)
 *   10.65432
 */

