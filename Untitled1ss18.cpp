#include <stdio.h>
int main() {
    
    int so_nguyen = 42;
    int *con_tro;
    con_tro = &so_nguyen; 
    printf("In Gia Tri (Value)\n");
    printf("Cach 1 (Ten bien): Gia tri cua so_nguyen la: %d\n", so_nguyen);
    printf("Cach 2 (Con tro *): Gia tri qua con tro la: %d\n", *con_tro);
    printf("---------------------------\n");
    printf("In Dia Chi (Address)\n");
    printf("Cach 1 (Toan tu &): Dia chi cua so_nguyen la: %p\n", &so_nguyen);
    printf("Cach 2 (Ten con tro): Dia chi luu trong con tro la: %p\n", con_tro);

    return 0;
}

