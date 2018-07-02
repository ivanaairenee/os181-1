/*
 * (c) 2015-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * REV03 Mon Oct 30 11:04:10 WIB 2017
 * REV00 Mon Oct 24 10:43:00 WIB 2016
 * START 2015
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void main(void) {
   int value;

   value=fork();
   wait(NULL);
   printf("I am PID[%4d] -- The fork() return value is: %4d)\n", getpid(), value);

   value=fork();
   wait(NULL);
   printf("I am PID[%4d] -- The fork() return value is: %4d)\n", getpid(), value);
}

/*created by zhelialifa
*Run with Ubuntu Container
*program akan membagi 2 proses yaitu parent (proses saat ini) 
*dan child (penambahan +1 dari parentnya)
*fork() akan bernilai 0 jika proses tersebut adalah proses child,
*fork() pada program ini membagi proses child dan parent, 
*maka kedua proses tersebut berjalan bersamaan
*di program ini ada proses yang menunggu ketika fungsi fork() 
*sampai selesai dijalankan
*value yang direturn adalah parent sebelumnya
*/
