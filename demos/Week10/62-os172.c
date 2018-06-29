/*
 * Copyright (C) 2017-2018 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV02 Fri May 18 14:02:12 WIB 2018
 * REV01 Thu Apr 12 20:37:41 WIB 2018
 * START Wed Oct 18 18:20:27 WIB 2017
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#define FILE "62-os172-demo.txt"

void main(void) {
   int fd1, fd2;
   printf("See also file %s\n", FILE);
   fd1 = open (FILE, O_RDWR | O_CREAT | O_TRUNC, 0644);
   fd2 = dup(fd1);
   write (fd1, "0123456789\n", 5);
   write (fd2, "abcdefghij\n", 5);
   close(fd1);
   close(fd2);
}

/* Fri Jun 29 23:45:00 WIB 2018
 * by AII
 * argumen write() yaitu 
 * write(int fd, const void *buf, size_t nbytes)
 * fd: file descriptor 
 * buf: char array yang akan ditulis ke fd
 * nbytes: berapa bytes yang akan ditulis dari char array ke fd
 * write(fd1, "0123456789\n", 5); akan menuliskan 01234 di file
 * write(fd2, "abcdefghij\n", 5); akan melanjutkan pointer dari fd1
 * sehingga isi file 62-os172-demo.txt menjadi 01234abcde
 */
 * 

