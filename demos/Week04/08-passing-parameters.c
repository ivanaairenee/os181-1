/*
 * (c) 2016-2017 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This is free software.
 * REV03 Mon Oct  2 16:20:12 WIB 2017
 * REV02 Sun Oct 16 20:49:25 WIB 2016
 * START Tue Sep 27 10:43:40 WIB 2016
 */

#define NOP()    __asm__("nop")  /* No Operation inline gcc ASM *** */

#include <stdio.h>

int  varInt1   = 0x01;
int  varInt2   = 0x02;
int* ptrInt1   = &varInt1;
int* ptrInt2   = &varInt2;

/* ******************************************************************** */

void function1(void) {
   NOP();
}

/* ******************************************************************** */

void function2(int iif2) {
   printf("function2:     iif2 = %d\n", ++iif2);
}

/* ******************************************************************** */

void function3(int* iif3) {
   printf("function3:     iif3 = %d\n", ++(*iif3));
}

/* ******************************************************************** */

int  function4(void) {
   NOP();
}

/* ******************************************************************** */

int* function5(void) {
   NOP();
}

/* ******************************************************************** */

void main(void) {
   function1();
   printf("main-1:    *ptrInt1 = %d\n", *ptrInt1);
   function2(*ptrInt1);
   printf("main-2:    *ptrInt1 = %d\n", *ptrInt1);
   printf("main-3:     varInt1 = %d\n",  varInt1);
   function3(&varInt1);
   printf("main-4:     varInt1 = %d\n",  varInt1);
}

/* ******************************************************************** */

/* Notes by Benedictus Alvin WK10
* Line 52 memanggil function1() dan tidak ada operasi didalamnya (NOP() = No Operation)
* Line 53 mencetak desimal dari ptrInt1 (0x01 = 1)
* Line 54 memanggil function2() dengan parameter *ptrInt1 dengan int bernilai 1, sehingga
* pada fungsi print nilai iif2 sebesar 1+1 = 2 (tidak mempengaruhi ptrInt1)
* Line 55 kembali mencetak desimal dari ptrInt1 (1)
* Line 56 mencetak desimal dari varInt1 (0x01 = 1)
* Line 57 memanggil function3() dengan parameter &varInt1 dengan int* bernilai 1, namun
* karena parameter yang digunakan adalah int* (pointer) maka nilai pada varInt1 berubah
* menjadi 0x02 dan akan mencetak nilai varInt1 = 2
* Line 58 mencetak desimal dari varInt1, namun karena nilai varInt1 sudah berubah akibat
* pointer pada function 3 maka nilai varInt1 adalah 2 bukan 1
*/