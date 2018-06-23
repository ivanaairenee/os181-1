/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV02 Mon Oct 30 10:24:44 WIB 2017
 * START Mon Oct 24 13:27:30 WIB 2016
 */

#include <stdio.h>
#include <unistd.h>

void main(void) {
   int ii;
   printf("Sleeping 3s with fflush():");
   fflush(NULL);
   for (ii=0; ii < 3; ii++) {
      sleep(1);
      printf("x ");
      fflush(NULL);
   }
   printf("\nSleeping with no fflush(): ");
   for (ii=0; ii < 3; ii++) {
      sleep(1);
      printf("x ");
   }
   printf("\n");
}

/* by muhafkar
Fungsi fflush(NULL) berfungsi untuk membuat print langsung dikeluarkan tanpa harus menunggu baris baru

Oleh karena itu, maka ketika program dijalankan akan terlihat bahwa 
output akan keluar perlahan lahan pada satu baris ketika menggunakan fflush,
bukan 1 baris langsung keluar semua outputnya
*/

