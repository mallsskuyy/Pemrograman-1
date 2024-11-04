#include <stdio.h>

int main() {

   float a = 4;
   float b = 8;
   float c = 3;

   printf("variabel a bernilai %.0f\n", a); 
   printf("variabel b bernilai %.0f\n", b);
   printf("variabel c bernilai %.0f\n", c);

   float hasil = (a * b) / c ;
   printf("Hasil dari a dikali b dibagi c adalah %f\n", hasil);

   return 0;
}