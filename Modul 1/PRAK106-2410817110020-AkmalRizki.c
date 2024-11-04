#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    int sama = (a == b);
    int lebih_besar = (b > c);
    int tidak_sama = (a != c);

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", sama);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", lebih_besar);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", tidak_sama);

    return 0;}