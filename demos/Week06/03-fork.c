/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV03 Thu Oct 26 11:27:01 WIB 2017
 * REV01 Wed May  3 20:49:54 WIB 2017
 * START Mon Oct 24 09:42:05 WIB 2016
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(void) {
   char *iAM="PARENT";
  
   printf("PID[%d] PPID[%d] (START:%s)\n", getpid(), getppid(), iAM);
   if (fork() > 0) {
      wait(NULL);     /* LOOK THIS ************** */
      printf("PID[%d] PPID[%d] (IFF0:%s)\n", getpid(), getppid(), iAM);
   } else {
      iAM="CHILD";
      printf("PID[%d] PPID[%d] (ELSE:%s)\n", getpid(), getppid(), iAM);
   }
   printf("PID[%d] PPID[%d] (STOP:%s)\n", getpid(), getppid(), iAM);
}

/* Sat Jun 23 06:05:06 WIB 2018
 * Notes by MA
 * Program ini hampir sama dengan program 01-fork,
 * bedanya pada program ini sleep(1) dirubah menjadi wait(NULL).
 *
 * fungsi wait(NULL) akan membuat proses tersebut akan berhenti 
 * sampai proses childnya selesai menjalankan program
 *
 * Oleh karena itu, tidak akan ada delay pada
 * saat printing pada program ini, beda dengan program 01-fork
 */
