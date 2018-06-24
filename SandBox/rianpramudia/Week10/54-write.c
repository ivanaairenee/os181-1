/*
 * (c) 2015-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV07 Thu Oct  5 17:56:09 WIB 2017
 * REV05 Thu Mar  9 21:21:07 WIB 2017
 * REV02 Sun Oct 16 20:50:52 WIB 2016
 * START Xxx Apr 25 XX:XX:XX WIB 2015
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define  FILE5   "demo-file5.txt"
static char* str1 = "AAAXBBB\n";
static char* str2 = "CCC\n";

void main(void) {
   int fd1, fd2;
   fd1 = open (FILE5, O_RDWR | O_CREAT, 0644);
   fd2 = open (FILE5, O_RDWR | O_CREAT, 0644);
   printf("File Descriptors --- fd1 = %d, fd2 = %d\n", fd1, fd2);
   write(fd1, str1, strlen(str1));
   write(fd2, str2, strlen(str2));
   close(fd1);
   close(fd2);
   printf("See output file %s\n", FILE5);
}

/* Notes by Muhammad Hanif Pratama
* Output dari program di atas adalah:
* CCC
* BBB
* Mengapa demikian?
* pada line 24 dan 25, mereka menggunakan file txt yang sama
* pada baris ke-27, program menulis "AAAXBBB\n" pada demo-file5.txt
* pada baris ke-28, program menulis "CCC\n" dengan meng-overwrite demo-file5.txt
* (pointer untuk menuliskan di demo-file5.txt dimulai dari 0 lagi)
* AAAXBBB\n
* ^^^^^^^^^
* CCC\nBBB\n
*/

/* Notes by Thrisnadevany
* O_RDWR open for reading and writing
* O_CREAT indicates that the call to open() has a mode argument,
* if the file being opened already exist O_CREAT has no effect
* if the file being opened does not exist it is created
* if O_CREAT is specified and the file did not previously exist a sucessful open
* () sets the access time, change time, and modification time for the file
*
* if succesful, dup() returns a new file descriptor
* if unsucessful, dup() returs -1 and sets errno to EBADF or EMFILE
*/