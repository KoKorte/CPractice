#include <stdio.h>
#include <stdlib.h>

//Based on exericese on: https://www.w3resource.com/c-programming-exercises/pointer/index.php
//int summa( int*, int*);




void vaihto(char *1, char *2)
{
    //
    char = ;
}

void permutaatio()



int main(void){

/*
1. Write a program in C to show the basic declaration of a pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50
*/

/*
    //Asetetaan osoittaja m arvoksi 10 ja lisätään muuttujat n ja o
    int m=10,n,o;
    //Lisätään osoittaja z muuttujalle m
    int *z=&m;
 
    //Tulostetaan osoittaja z osoite %p
    printf("\nz tallentaa m osoitteen = %p\n",  z);
    //
    printf("\nosoittaja z tallentaa m arvon = %i\n", *z);
    //&m antaa osoitteen integer muuttujalle m
    printf("\n&m on m osoite = %p", &m);
    //
    printf("\n&n tallentaa n osoitteen = %p\n", &n);
    //
    printf("\n&o tallentaa o osoitteen = %p\n", &o);
    //
    printf("\n&z tallentaa z osoitteen = %p\n\n", &z);
*/

/*
//ANSWER

#include <stdio.h>
void main(void)
{
int m=10,n,o;
int *z=&m ;

	printf("\n\n Pointer : Show the basic declaration of pointer :\n");
	printf("-------------------------------------------------------\n"); 
	printf(" Here is m=10, n and o are two integer variable and *z is an integer");	
	printf("\n\n z stores the address of m  = %p\n",  z); // z is a pointer so %p would print the address
	printf("\n *z stores the value of m = %i\n",   *z); 
	printf("\n &m is the address of m = %p\n",   &m); // &m gives the address of the integer variable m 
                             // so %p is the specifier for that address
	printf("\n &n stores the address of n = %p\n",   &n);
	printf("\n &o  stores the address of o = %p\n",   &o);
	printf("\n &z stores the address of z = %p\n\n", &z); // &z gives the address, where the pointer z is 
                             // stored -> still an address -> %p is the right
                             // specifier        
}
*/
//////////////////////////////////////////////////////////////

/*
2. Write a program in C to demonstrate how to handle pointers in a program.
Expected Output :

Address of m : 0x7ffcc3ad291c
Value of m : 29                                                                                              
                                                                                                              
Now ab is assigned with the address of m.                                                                    
Address of pointer ab : 0x7ffcc3ad291c                                                                       
Content of pointer ab : 29                                                                                   
                                                                                                              
The value of m assigned to 34 now.                                                                           
Address of pointer ab : 0x7ffcc3ad291c                                                                       
Content of pointer ab : 34                                                                                   
                                                                                                              
The pointer variable ab is assigned with the value 7 now.                                                    
Address of m : 0x7ffcc3ad291c                                                                                
Value of m : 7 
*/

/*
    //määritetään muuttuja m ja annetaan arvo 29
    int m=29;
    //määritetään ab ja osoitetaan se m osoitteeseen
    int *ab=&m;
    //tehdään x joka lisää lukuun 29 5 jotta saadaan luku 34
    int x=5;
    int sum;


    printf("\nm osoite on: %p", &m);
    printf("\nm arvo on: %d\n", m);

    printf("\nab osoittimen osoite on: %p", &ab);
    printf("\nosoittajan ab sisältö on: %d\n", m);

    sum = x + m;

    printf("\nNyt m arvo on 34");
    printf("\nosoittajan ab osoite on: %p", &sum);
    printf("\nosoittajan ab sisältö on: %d\n", sum);

    ab = 7;

    printf("\nNyt osoittaja muutujan ab arvo on 7");
    printf("\nm osoite on: %p", &ab);
    printf("\nm arvo on: %d\n", ab);
*/

/*
//ANSWER

#include <stdio.h>
int main()
{
   int* ab;
   int m;
   m=29;
    printf("\n\n Pointer : How to  handle the pointers in the program :\n"); 
    printf("------------------------------------------------------------\n");
    printf(" Here in the declaration ab = int pointer, int m= 29\n\n");
    
   printf(" Address of m : %p\n",&m);
   printf(" Value of m : %d\n\n",m);
   ab=&m;
   printf(" Now ab is assigned with the address of m.\n");
   printf(" Address of pointer ab : %p\n",ab);
   printf(" Content of pointer ab : %d\n\n",*ab);
   m=34;
   printf(" The value of m assigned to 34 now.\n");
   printf(" Address of pointer ab : %p\n",ab);
   printf(" Content of pointer ab : %d\n\n",*ab);
   *ab=7;
   printf(" The pointer variable ab is assigned the value 7 now.\n");
   printf(" Address of m : %p\n",&m);//as ab contain the address of m
                                     //so *ab changed the value of m and now m become 7
   printf(" Value of m : %d\n\n",m);
   return 0;
}
*/
/////////////////////////////////////////////////////////////////

/*
3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z
*/

/*
    //tehdään int muuttuja m jonka arvo on 300
    int m=300;
    //tehdään float muuttuja fx jonka arvo on 300.600006
    float fx=300.600006;
    //tehdään charr cht jonka merkki on z
    char cht = 'z';

    //luodaan osoittimet muuttujille
    int *x;
    float *y; 
    char *z;

    x=&m;
    y=&fx;
    z=&cht;

    //tulostetaan tehdyt muuttujat ja niiden arvot
    printf("\nm = %d", m);
    printf("\nfx = %f", fx);
    printf("\ncht = %c\n", cht);

    //tulostetaan ensin käyttämällä & operaattoria
    printf("\nm = %p", &m);
    printf("\nfx = %p", &fx);
    printf("\ncht = %p\n", &cht);

    //tulostetaan käyttämällä & ja * operaattoreita
    printf("\nm = %d", *(&m));
    printf("\nfx = %f", *(&fx));
    printf("\ncht = %c\n", *(&cht));
  
    //tulostetaan käyttämällä vain osoitin muuttujaa
    printf("\nm = %p", x);
    printf("\nfx = %p", y);
    printf("\ncht = %p\n", z);

    //tulostetaan käyttämällä vain osoitin operaattoria
    printf("\nm = %d", *x);
    printf("\nfx = %f", *y);
    printf("\ncht = %c\n", *z);
*/

/*
//Answer

#include <stdio.h>
void main()
{
  int m=300;
  float fx = 300.60;
  char cht = 'z';
  
   printf("\n\n Pointer : Demonstrate the use of & and * operator :\n"); 
   printf("--------------------------------------------------------\n");

 
  int *pt1;
  float *pt2;
  char *pt3;
  pt1= &m;
  pt2=&fx;
  pt3=&cht;
  printf ( " m = %d\n",m);
  printf ( " fx = %f\n",fx);
  printf ( " cht = %c\n",cht);
  printf("\n Using & operator :\n"); 
  printf("-----------------------\n");  
  printf ( " address of m = %p\n",&m);
  printf ( " address of fx = %p\n",&fx);
  printf ( " address of cht = %p\n",&cht);
  printf("\n Using & and * operator :\n"); 
  printf("-----------------------------\n"); 
  printf ( " value at address of m = %d\n",*(&m));
  printf ( " value at address of fx = %f\n",*(&fx));
  printf ( " value at address of cht = %c\n",*(&cht));
  printf("\n Using only pointer variable :\n"); 
  printf("----------------------------------\n"); 
  printf ( " address of m = %p\n",pt1);
  printf ( " address of fx = %p\n",pt2);
  printf ( " address of cht = %p\n",pt3);
  printf("\n Using only pointer operator :\n"); 
  printf("----------------------------------\n"); 
  printf ( " value at address of m = %d\n",*pt1);
  printf ( " value at address of fx= %f\n",*pt2);
  printf ( " value at address of cht= %c\n\n",*pt3);
}
*/
////////////////////////////////////////////////////////////////////

/*
4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
*/

/*
//luodaan muuttujat x ja y
    int x=5;
    int y=6;

    //luodaan osoittimet muuttujille
    int *eka;
    int *toka;

    //osoitetaan osoittajat muuttujiin
    eka = &x;
    toka = &y;

    printf("\nEnsimmäinen numero on: %d", *eka);
    printf("\nToinen numero on: %d", *toka);
    printf("\nNäiden lukujen summa on: %d", *eka + *toka);
*/
    
/*
//Answer

#include <stdio.h>
int main()
{
   int fno, sno, *ptr, *qtr, sum;
   
   printf("\n\n Pointer : Add two numbers :\n"); 
   printf("--------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno);   
 
   ptr = &fno;
   qtr = &sno;
 
   sum = *ptr + *qtr;
 
   printf(" The sum of the entered numbers is : %d\n\n",sum);
 
   return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////

/*
5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11 
*/

/*

*/

/*
    //luodaan muuttujat x ja y sekä summa
    int x, y, sum;
    x = 5;
    y = 6;

    //luodaan muuttujille osoittimet a ja b esimerkiksi
    int *a;
    int *b;

    a = &x;
    b = &y;

    sum = summa(&x, &y);

    //tehdään funktio joka antaa seuraavalle funktiolle tarvittavat tiedot ja tulostaa sitten siinä lasketun summa
    printf("\nLukujen %d ja %d summ on %d\n", *a, *b, sum);
    return 0;
    }
    //tehdään funktio joka kutsuu aiemmin syötetyn datan ja laskee niiden summan
    int summa(int *a, int *b)
    {
        int sum;
        sum = *a + * b;
        return sum;
    }
*/

/*
//Answer

#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}
*/
/////////////////////////////////////////////////////////////////////////////////////

/*
6. Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number. 
*/

/*
    //luodaan input x ja y, sekä tehdään pointerit eka ja toka
    int x, y, *eka=&x, *toka=&y;

    //kysytään inputit x ja y
    printf("\nSyötä eka luku: ");
        scanf("%d", eka);
    printf("\nSyötä toka luku: ");
        scanf("%d", toka);

    //tarkastetaan luvut ja tulostetaan näistä suurin
    if (*eka > *toka)
    {
        printf("\nLuku %d on maksimi numero", *eka);
    }
    else
    {
        printf("\nLuku %d on maksimi numero", *toka);
    }
*/

/*
//Answer

#include <stdio.h>
#include <stdlib.h>
void main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;
 
   printf("\n\n Pointer : Find the maximum number between two numbers :\n"); 
   printf("------------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2); 


 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}  
*/
///////////////////////////////////////////////////////////////////////////////////////

/*
7. Write a program in C to store n elements in an array and print the elements using a pointer.
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8 
*/

/*
    //luodaan array sekä muuttujat x ja n
    int myarray[100], x, n;

    //kysytään ja syötetään lukujen eli rivien määrä
    printf("\nSyötä luku: ");
        scanf("%d", &n);

    //tehdään for loop jossa kysytään
    printf("\nSyötä elementtien määrä: ");
    for (x = 0; x < n; x++)
    {
        printf("\nelement - %d : ", x);
            scanf("%d", myarray + x);
    }
    printf("\nSyötetyt luvut ovat : \n");
    for ( x = 0; x < n; x++)
    {
        printf("\nelement - %d : %d", x, *(myarray + x));
    }
*/

/*
//Answer

#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf("\n\n Pointer : Store and retrieve elements from an array :\n"); 
   printf("------------------------------------------------------------\n");    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i);
	  scanf("%d",arr1+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr1+i));
	  }
	   return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////

/*
8. Write a program in C to print all permutations of a given string using pointers.
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc
*/

/*

*/

/*
//ANSWER

*/
////////////////////////////////////////////////////////////////////////////////////////////////

    //tehdään funktio joka muuttaa neljän kirjaimen paikkaa merkkijonossa -> rivi 10


    //tehdään char string "abcd"
    char sana[] = "abcd";

    int x = strlen(sana);





}  
