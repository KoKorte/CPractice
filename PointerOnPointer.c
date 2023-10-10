#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct INTERFACE
{
    int id;
    struct UNIT* unit;
};

struct UNIT
{
    int id;
    struct INTERFACE* interface[4];   
};

struct RACK
{
    int id;
    struct UNIT* unit[4];
};

void showinterfaces(struct UNIT myunit);

void showinterfaces(struct UNIT myunit)
{   
    //Kerro minulle interfaceista, joita kuuluu unittiin
    for (int iter = 0; iter < 4; iter++)
    {
        if(myunit.interface[iter] != NULL)
        {
            printf("\nif slotissa %d on ID %d", iter, myunit.interface[iter]->id);
        }
        else
        {
            printf("\nif slot on tyhjä");
        }
        
    }
}


int main(){

    //luodaan interface ja unit
    struct INTERFACE myif;
    struct INTERFACE myif2;
    struct UNIT myunit;
    
    //myif saa arvoksi oman ID numeron ja unitin osoitteen
    myif.id = 555;
    myif.unit = &myunit;


    myif2.id = 777;
    myif2.unit = &myunit;
    
    //myunit saa arvoksi oman ID numeron ja siihen kuuluvien interfacejen osoitteet
    myunit.id = 222;
    myunit.interface[0] = &myif;
    myunit.interface[1] = &myif2;
    myunit.interface[2] = NULL;
    myunit.interface[3] = NULL;

    //Kerro minulle unitista, johon myif2n on kiinnitetty
    printf("myif2 on kiinni unitissa, jonka id on %d", myif2.unit->id);

    showinterfaces(myunit);

    //tuhotaan unitin yhteys interfaceihin
    myif.unit->interface[0] = NULL;
    myif.unit = NULL;
    
    struct RACK myrack;
    myrack.id = 12345;
    myrack.unit[0] = &myunit;

    printf("\nrackin IFn ID arvo on %d", myrack.unit[0]->interface[1]->id);
    
    showinterfaces(*(myrack.unit[0]));



    return 0;
}
