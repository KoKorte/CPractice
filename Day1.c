//Tehtävät
#include <stdio.h>
#include <stdbool.h>

int main(){
//Päivä 1

////////////////////////////////////////////////////////////////////////////////

/*TASK1
    // Ask value from user and calculate its square
    // Then type
    // "The square of your value is <result>"

    -----------------------------------------------------------------------
    OMA
    -----------------------------------------------------------------------

printf("\nTehtävä 1\n");

    int luku = 0;

    printf("\nSyötä luku\n");
    scanf("%d", &luku);

    printf("\nNeliön ala on %d\n", luku*luku);

    -----------------------------------------------------------------------
    MALLI
    -----------------------------------------------------------------------
    int value = 0;
    printf("\nTask 1\n");
    printf("Tell me a value?\n");
    scanf("%d", &value);
    printf("\nThe square of your value is %d\n", value*value);
*/

////////////////////////////////////////////////////////////////////////////////

/*TASK2
    // Ask length and width from user and calculate square size
    // Then type
    // "The square of <length> and <width> is <result>"

    -----------------------------------------------------------------------
    OMA
    -----------------------------------------------------------------------

printf("\nTehtävä 2\n");

    int pituus = 0;
    int leveys = 0;

    printf("\nSyötä pituus\n");
    scanf("%d", &pituus);
    printf("\nSyötä leveys\n");
    scanf("%d", &leveys);

    printf("\nNeliön pituus on %d, leveys %d ja ala %d", pituus, leveys, pituus*leveys);

    -----------------------------------------------------------------------
    MALLI
    -----------------------------------------------------------------------
    int length = 0;
    int width = 0;

    printf("\nTask 2\n");
    printf("Tell me a length?\n");
    scanf("%d", &length);
    printf("Tell me a width?\n");
    scanf("%d", &width);
    printf("The square of %d and %d is %d", length, width, length*width);
*/

////////////////////////////////////////////////////////////////////////////////

/*TASK3
    // Ask name and age from user
    // Then type 
    // "I am <name> and my age is <age>"

    -----------------------------------------------------------------------
    OMA
    -----------------------------------------------------------------------

printf("\nTehtävä 3\n");

    char nimi[10] = " ";
    int ika = 0;

    printf("\nMikä on nimesi?\n");
    scanf("%s", &nimi);
    printf("\nKuinka vanha olet?\n");
    scanf("%d", &ika);

    printf("\nNimeni on %s ja olen %d vuotta vanha", nimi, ika);

    -----------------------------------------------------------------------
    MALLI
    -----------------------------------------------------------------------
    char name[10] = "";
    int age = 0;

    printf("\nTask 3\n");
    printf("Tell me your name?\n");
    scanf("%s", &name);

    printf("\nTell me your age?\n");
    scanf("%d", &age);

    printf("\nI am %s and my age is %d\n", name, age);
    
*/
    
////////////////////////////////////////////////////////////////////////////////

/*TASK4
    // create two variables with names q and Q.
    // make their datatype float
    // print out their sum

    -----------------------------------------------------------------------
    OMA
    -----------------------------------------------------------------------
printf("\nTehtävä 4\n");

    float q = 0.0;
    float Q = 0.0;
    
    printf("\nSyötä desimaali q\n");
    scanf("%f", &q);
    printf("\nSyötä desimaali Q\n");
    scanf("%f", &Q);

    printf("\n Desimaalien summa on %f\n", q+Q);

    -----------------------------------------------------------------------
    MALLI
    -----------------------------------------------------------------------
    float q = 1.23;
    float Q = 2.34;
    printf("\nTask 4\n");
    printf("\nSum is %f \n", q+Q);
*/

////////////////////////////////////////////////////////////////////////////////

/*
    //ILTAPÄIVÄN TEHTÄVÄ

    //Kysy nimi, ikä ja pankkitilin summa.
    //tulosta "Minä olen X ja ikäni on Y."
    //tulosta "50 vuoden kuluttua ikäni on Z."
    //tulosta "Tililläni on rahaa vain 111.11 euroa."

    -----------------------------------------------------------------------
    OMA
    -----------------------------------------------------------------------

printf("\nIltapäivän tehtävä\n");

    char nimi[20] = "";
    int ika = 0;
    float raha = 0;

    printf("\nMikä on sinun nimesi?\n");
    scanf("%s", &nimi);
    printf("\nKuinka vanha sinä olet?\n");
    scanf("%d", &ika);
    printf("\nPaljonko rahaa sinulla on?\n");
    scanf("%f", &raha);

    printf("\nMinä olen %s ja ikäni on %d vuotta.", nimi, ika);
    printf("\n50 vuoden kuluttua ikäni on %d vuotta.", ika+50);
    printf("\nTililläni on rahaa vain %f euroa.", raha);
*/

  return 0;
} 
