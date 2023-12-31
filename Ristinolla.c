//Tehdään ristinolla peli
//Mitä tarvitaan?
/*SUUNNITELMA(ei lopullinen)
-C-kieli
-Aluksi 2 pelaajaa X ja O
-Taulukko ideat     {0,0,0}     |0|0|0|      0|0|0
                    {0,0,0}     |0|0|0|      -+-+-

viestit definellä?
-STRUCT ruudukot?
-OHJE KUINKA PELATA
-Mahdollisesti x akseli 123 ja y akseli ABC
-Kysyy käyttäjältä vuoron perään akselin malliin 1A tai 3B
(printf("\nAnna x akseli: ");
   scanf("%d", x);
 printf("\nAnna y akseli: ");
   scanf("%c", y);)
   TAI YHDISTÄÄ NÄMÄ?
-Tarkistetaan että "ruudussa" ei ole aiempaa merkkiä (if empty tai is taken?)
    -> uudelleen syöttö komento (define virhe input, syötä uudelleen?)
-Ei kahta samaa merkkiä peräkkäin(toinen virhe input?)

Mahdollisia myöhempiä toimintoja:
-Pelaaja 1 ja 2 nimet
-srand yksinpeli
-Valinta yksin- tai kaksinpelille
-Valinta haluaako olla X tai O
*/
//  OHJE

// Valitse kuka aloittaa ensin
// Syötä numero ja kirjain muodossa esim. 1A.
// Kokeille saada 3 vierekkäin vaakaan, pystyyn tai vinoon
// ONNEA PELIIN

//Selitykset rakenteesta
/*
TERMIT JA MUUTTUJAT:

struct Area -> Area (struct), joka kuvaa yksittäistä peliruudun tilaa. Sisältää joko 'X', 'O' tai tyhjän merkin (' ').

character -> Merkkijono (char), joka kuvaa pelaajien merkkejä ('X' tai 'O') pelissä.

area[3][3] -> Kaksiulotteinen struct, jossa jokaisella ruudulla voi on merkki 'X', 'O' tai tyhjä (' ').

turn -> Merkkijono (char), joka osoittaa vuorossa olevan pelaajan ('X' tai 'O').

x -> Kokonaisluku (int), joka vastaa pelaajan syöttämää x-akselin sijaintia (1-3).

y -> Merkki (char), joka vastaa pelaajan syöttämää y-akselin sijaintia ('A', 'B' tai 'C').

FUNKTIOT:

void showStruct(struct Area area[3][3]) -> Tulostaa peliruudukon näytölle konsoliin.

int checkWin(struct Ruutu ruudukko[3][3], char merkki) -> Tarkistaa voittoehdot peliruudukossa tietylle merkille ('X' tai 'O') ja palauttaa 1 voiton tapauksessa tai 0 muuten.

int main() -> Pääohjelma, jossa pelin päälooppi pyöritellään. Siinä pyörii pelin kulku, syötöt ja voittaminen.
*/

#include <stdio.h>

struct Area
{
    char character;
};

//Luodaan taulukko
void showArea(struct Area area[3][3])
{
    printf(" 1  2  3\n");
    for (int a = 0; a < 3; a++)
    {
        printf("%c", 'A' + a);
        for (int b = 0; b < 3; b++)
        {
            printf("|%c", area[a][b].character);
        }
        printf("|\n");
        if (a < 2)
        {
            printf(" --+-+--\n");
        }
    }
}

//Tarkistetaan voitot
int checkWin(struct Area area[3][3], char character)
{
    for (int a = 0; a < 3; a++)
    {
        if (area[a][0].character == character && area[a][1].character == character && area[a][2].character == character)
        {
            return 1;
        }
        if (area[0][a].character == character && area[1][a].character == character && area[2][a].character == character)
        {
            return 1;
        }
    }
    if (area[0][0].character == character && area[1][1].character == character && area[2][2].character == character)
    {
        return 1;
    }
    if (area[0][2].character == character && area[1][1].character == character && area[2][0].character == character)
    {
        return 1;
    }
    return 0;
    
}

int main()
{
    printf("\nTervetuloa pelaajat!! X aloittaa. Anna paikka muodossa xy. Esimerkiksi 1B.\n");
    struct Area area[3][3];
    for(int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            area[a][b].character = ' ';
        }
    }

    char turn = 'X';
    int x , y;
    char input[3];

    do
    {
        showArea(area);
        printf("\nPelaajan %c vuoro:", turn);
            scanf("%s", input);
        
        x = input[0] - '1';
        y = input[1] - 'A';

        if (x < 0 || x > 2 || y < 0 || y > 2 || area[y][x].character != ' ')
        {
            printf("\nVirheellinen yritys\n");
            continue;
        }

        area[y][x].character = turn;

        if (checkWin(area, turn))
        {
            showArea(area);
            printf("\nPelaaja %c on voittaja!\n", turn);
            break;
        }
        turn = (turn == 'X') ? 'O' : 'X';
        
    } while (1);
    return 0;
}
