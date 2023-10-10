#include <stdio.h>
#include <stdlib.h>

//Tehtävä 1.
// tee funktio, joka ottaa kaksi muuttujaa
// ja kirjoittaa "Minä olen X ja ikäni on Y."

//tehdään funktiot x nimi ja ikä y
//funktio tulostaa muuttujat jotka syötetään myöhemmässä kohdassa "Tehtävä 1."
void nimijaika(char *nimi, int ika){
    printf("\nMinä olen %s ja ikäni on %d\n", nimi, ika);
}

//Tehtävä 2.
// tee funktio, joka ottaa kolme arvoa ja
// palauttaa niistä suurimman 

//tehdään funktio suurin
void suurin(int suurin){
    printf("\nNäistä luvuista suurin on %d", suurin);
}



//Tehtävä 3.
//Käytä random #include <time.h>, #include <stdlib.h>, ja srand(time(NULL));
//get number between 1 and 40
//int result = (rand() % 39) + 1;
//Tee array, johon mahtuu 7 lottonumeroa
//Tee funktio, joka palauttaa satunnaisen lottonumeron
//Tee ensi lauantian lottorivi valmiiksi
//P.S. Toisessa vaiheessa pidä huolta, että samaa numeroa ei tule kahdesti
/*
//tehdään funktio lotto, joka arpoo seitsemän numeroa välillä 1 ... 40
void lotto(int rivi[], int x){
    //Tehdään muuttuja "numero", joka saa satunnaisen arvon väliltä 1 ... 40
    int numero;
    //Tehdään do while loop, jossa muuttuja numero saa arvon ja sitä ei voi tulla kahdesti
    do {
        //Asetetaan muuttujalle "numero" arvo satunnaisesti väliltä 1 ... 40
        numero = (rand()% 39) + 1;
        //Tehdään muuttuja "ainut", joka tekee numerosta "ainutlaatuisen" jotta sitä ei tulisi 
        //kaksi kertaa
        int ainut = 1;
        //
        for(int n = 0; n < x; n++){
            //
            if (rivi[n] == ainut){
                break;
            }

            
            
            
            //return numero;
        }
    }
        


 //   printf("\nOIKEA LOTTORIVI ON: ");
}
*/

//TEHDÄÄN 2X4 ARRAY




int main()
{
/*    
    //Tehtävä 1. ilmoitus
    printf("\nTehtävä 1: \n");

    //Lisätään char nimelle(laitetaan 100 merkin raja varalta) ja int iälle
    char mina[100];
    int olen;

    //Kysyy käyttäjältä nimen ja iän jonka jälkeen nimi ja ikä funktiossa saavat arvot
    printf("\nKuka olet? ");
        scanf("%s", mina);
    printf("\nKuinka vanha olet? ");
        scanf("%d", &olen);
    nimijaika(mina, olen); 
*/
 /*  
    //Tehtävä 2. ilmoitus
    printf("\nTehtävä 2: \n");

    //Asetetaan kolmen luvun muuttujat 1, 2 ja 3
    int eka, toka, kolmas;

    //Kysytään käyttäjältä kolme lukua
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &eka);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &toka);
    printf("\nSyötä kolmas luku: ");
        scanf("%d", &kolmas);

    //Tehdään if-toiminnolla ehdot funktiolle suurin
    if(eka>toka && eka>kolmas){
        suurin(eka);
    }
    if(toka>eka && toka>kolmas){
        suurin(toka);
    }
    if(kolmas>eka && kolmas>toka){
        suurin(kolmas);
    }
*/

/*
    //Tehtävä 3. ilmoitus
    printf("\nTehtävä 3: \n");

    //Syötetään oma lottorivi

    //Lottorivin teko
    int lottorivi

*/
/*
//
int array2x4[4][2] = {
    {26,456},
    {46,851},
    {2,79},
    {15,0}
    };

    for (int Yaxel = 0; Yaxel < 4; Yaxel++){
        for (int Xaxel = 0; Xaxel < 2; Xaxel++){
            printf("%d %d %d\n", Xaxel, Yaxel, array2x4[Yaxel][Xaxel]);
        }
    }
*/
/*
//luodaan
int array2x4flat[8]={
    26,456,46,851,2,79,15,0
};
//
for (int iter=0; iter < 8; iter++){
    //halutaan 
    if (iter % 2 == 0)
    {
        printf("%d ", array2x4flat[iter]);
    }
    else
    {
        printf("%d\n", array2x4flat[iter]);
    }
    
};
*/

//luodaan flat array
int array4x4flat[16]={
    1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16
};
printf("\n");
//flat array käydään läpi
//position x ja y akselissa
int Xpos=0, Ypos=0;
//axissize määrää taulun muodon eli 2x8, 4x4 tai 8x2
int Xaxissize = 4, Yaxissize = 4;
for (int iter=0; iter < Xaxissize*Yaxissize; iter++){
    
    //halutaan 4x4 taulu, joten neljällä jaollisella
    //luvulla vaihdetaan rivi'
    if (iter % 4 == 0)
    {
        printf("\n");
    }
    //tulosta positio (X,Y) ja elementin arvo
    printf("(%d,%d),%d",Xpos, Ypos, array4x4flat[iter]);
    //Xpositio kasvaa yhdellä kunnes arvo on 4
    Xpos++;
    if (Xpos % Xaxissize == 0){
        Xpos=0;
        //Ypositio kasvaa yhdellä rivin vaihdolla
        Ypos++;
    }

    
};




    return 0;
}


//OPETTAJAN MALLI


/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void testifunktio(int*,int*);
int arvonumero();

// funktio ottaa argumenteikseen muuttujien osoitteet.
void testifunktio(int* aarnereferenssi, int* berttareferenssi) {
    // kopioidaan paikalliseen muuttujaan muistipaikan 
    // eli osoitteen sisältö
    int paikallinenmuuttuja = *aarnereferenssi;
    // kopioidaan samalla tavalla tässäkin...
    *aarnereferenssi = *berttareferenssi;
    // referoitava muistipaikka voi saada arvoksi mitä tahansa
    // tässä se saa arvoksi muuttujan sisällön
    *berttareferenssi = paikallinenmuuttuja;
    // funktio loppuu.
    // paikalliset muuttujat tuhotaan (pois stack muistista)
    // referenssit tuhotaan, koska ne ovat funktion argumentteja
}

int arvonumero() {
    return (rand() % 39) + 1;
}

int main() {
/*
    // luodaan 2 muuttujaa
    int aarne = 111, bertta = 222;
    // luodaan kaksi osoitinmuuttujaa, jotka
    // saavat arvoiksi aarnen ja bertan osoitteet
    int* aarneosoitin = &aarne;
    int* berttaosoitin = &bertta;

    printf("%d %d\n", aarne, bertta);
    printf("%p %p\n", aarneosoitin, berttaosoitin);

    // luodaan testifunktio, joka ottaa argumentiksi 
    // referenssit muuttujista
    // nämä ovat muuttujien osoitteet
    // TÄMÄ ON STANDARDI TAPA, JOS HALUAT MUUTTAA
    // FUNKTIOSSA ARGUMENTTIEN ARVOJA!
    testifunktio(&aarne, &bertta);
    printf("%d %d\n", aarne, bertta);
    printf("%p %p\n", aarneosoitin, berttaosoitin);

    // C-kielessä käytetään hyvin usein osoitinmuuttujia.
    // Niitä voidaan käyttää samalla tavalla.
    // osoitinmuuttujan arvo on osoite, joten & merkkiä ei käytetä.
    testifunktio(aarneosoitin, berttaosoitin);
    printf("%d %d\n", aarne, bertta);
    printf("%p %p\n", aarneosoitin, berttaosoitin);

    scanf("%d", aarneosoitin);
    printf("%d %d\n", aarne, bertta);
    printf("%p %p\n", aarneosoitin, berttaosoitin);

    // tee funktio, joka ottaa kaksi muuttujaa
    // ja kirjoittaa "Minä olen X ja ikäni on Y."

    // tee funktio, joka ottaa kolme arvoa ja
    // palauttaa niistä suurimman

    // -----
    // käytä random
    // initialize randomizer
    srand (time(NULL));

    // get number between 1 and 40
    // int result = (rand() % 39) + 1;

    // Tee array, johon mahtuu 7 lottonumeroa
    int lotterynumbers[7] = { 0,0,0,0,0,0,0};


        // tee funktio, joka palauttaa satunnaisen
        // lottonumeron
        // tee ensi lauantain lottorivbi valmiiksi

        for (int i=0; i < 7; i++ ) {
            lotterynumbers[i] = arvonumero();        
        }
        printf("STOP");

        // P.S. Toisessa vaiheessa pidä huolta että samaa
        // numeroa ei tule kahdesti...
    bool luuppi = true;
    int iter = 0;
    do {
        // hae numero ehdokas
        int ehdokas = arvonumero();
        bool sopiva = true;
        // testaa onko ehdokas jo arrayssa
        for (int i=0; i < 7; i++ ) {
            if (lotterynumbers[i] == ehdokas) {
                sopiva = false;
                break;
            }        
        }
        // jos ehdokas sopii, aseta se lottoriviin
        // muuten mennään ohi
        if (sopiva) {
            lotterynumbers[iter] = ehdokas;
            iter++;
            if (iter >= 7) {
                break;
            }
        }
    } while(luuppi);

    // P.P.S. Nyt voisitte syöttää 7 lottonumeroa
    iter = 0;
    int omarivi[7] = {0,0,0,0,0,0,0};
    do {
        printf("Anna numero %d\n",iter+1);
        int dummy=0;
        scanf("%d",&dummy);
        omarivi[iter] = dummy;
        iter++;
    } while (iter < 7);

    printf("OHI");

    // P.P.P.S. Verratkaa ja kertokaa löytyneiden
    // numeroiden määrä...
    iter = 0;
    for (int i=0; i < 7; i++) {
        for (int j=0; j < 7; j++) {
            if (omarivi[i] == lotterynumbers[j]) {
                printf("\n%d osui", omarivi[i]);
                iter++;
            }            
        }
    }
    printf("\nOsumia tule %d kappaletta!", iter);
    return 0;
} 
*/
