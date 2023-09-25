#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


//Luo osoitinmuuttujista 5 elementin taulukko.
//kukin osoite muuttuja on void*
//kokeile antaa int, float ja char elementtejä
//tulosta koko taulukko.

int main()
{

    //Luodaan 5 elementtiä
    void* mytablepointer = (void*) malloc(sizeof(void)*5);
    int x = 111, y = 333;
    float z = 123.456;
    char a = 'q';
    char b[10] = "BOOM";

    void * myarr[5];
    void * (*mytablepointer)[5] = &myvoidarr[0];

    myvoidarr[0] = &x;
    myvoidarr[1] = &y;
    myvoidarr[2] = &z;
    myvoidarr[3] = &a;
    myvoidarr[4] = &b;

/*
    //Annetaan 5 termiä
    mytablepointer = &x;
    mytablepointer++;
    mytablepointer = &y;
    mytablepointer++;
    mytablepointer = &z;
    mytablepointer++;
    mytablepointer = &a;
    mytablepointer++;
    mytablepointer = &b;
    mytablepointer -= 4;
*/
    //
    printf("\n%x %d", myvoidarr[0], *((int*) myvoidarr[0]));
    printf("\n%x %f", myvoidarr[1], *((float*) myvoidarr[1]));
    printf("\n%x %d", myvoidarr[2], *((int*) myvoidarr[2]));
    printf("\n%x %c", myvoidarr[3], *((char*) myvoidarr[3]));
    printf("\n%x %c", myvoidarr[4], *((char*) myvoidarr[4]));


/*
    printf("\n%x %f", mytablepointer + 1, *((float*) mytablepointer + 1));
    printf("\n%x %d", mytablepointer + 2, *((int*) mytablepointer + 2));
    printf("\n%x %c", mytablepointer + 3, *((char*) mytablepointer + 3));
    printf("\n%x %c", mytablepointer + 4, *((char*) mytablepointer + 4));
*/


//    free(mytablepointer);

    return 0;
}
