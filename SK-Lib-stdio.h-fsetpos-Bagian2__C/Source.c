#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;
    fpos_t position;

    fp = fopen("fileSaya.txt", "w+");
    fgetpos(fp, &position);
    fputs("Halo Manusia!", fp);

    fsetpos(fp, &position);

    fputs("geeksforgeeks", fp);
    fclose(fp);

    _getch();
    return(0);
}