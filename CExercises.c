//Lisätään kirjastot
#include <stdio.h>
#include <math.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>

//Lisätään #define
#define VIRHE ("Virhe, yritä uudestaan!") //koodin lyhennystä varten
#define VNRO ("Virhe, syötit vääränlaisen numeron!") //jos tehtävässä vaaditaan tietynlaisen numeron syöttämistä
#define PII 3.14 //jos koodissa tarvitaan piin arvoa


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-------------------------C-EXERCISES BASED ON https://github.com/manjunath5496/Beginner-C-Exercises/blob/master/README.md-------------------------
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//ANSWER IS NOT NECESSARULY THE RIGHT ANSWER. ANSWER IS HOW THE QUESTION'S CREATOR HAS ASNWERED TO THEM!

/*
#kirjastot
#define
ja
int main
*/

//Tehtävä numero ja anto
/*
Oma koodi
*/

/*
Tehtävän mallikoodi
*/

/*
return
*/


int main()
{
    //1. Write a program to print Hello World!.

    /*
    printf("\nHello World!\n");
    */

//Answer
/*
#include<stdio.h>
int main() {
printf("Hello,world!");
return 0;
}
*/

    //2. Write a program to compute the perimeter and area of a rectangle

    /*
    int x = 2;
    int y = 4;

    printf("\nThe perimeter of the rectangle is %d and the area is %d", 2*(x+y), x*y);
    */
    
//Answer
/*
#include<stdio.h> 
int main() {
int height = 8;
int width = 5;
int perimeter = 2*(height + width);
printf("Perimeter of the rectangle is: %d cm\n", perimeter);
int area = height * width;
printf("Area of the rectangle is: %d square cm\n", area);
return 0;
}
*/

    //3. Write a program to compute the perimeter and area of a circle.

    /*
    int r = 5;
    printf("\nThe perimeter of the rectangle is %.1f and the are is %.1f", 3.14*r, 2*3.14*r);
    */  

//Answer
/*
#include<stdio.h> 
int main() {
int radius = 4;
float perimeter = 2*3.14*radius;
printf("Perimeter of the circle is: %f cm\n", perimeter);
float area = 3.14*radius*radius;
printf("Area of the circle is: %f square cm\n", area);
return 0;
}   
*/

    //4. Write a program that accepts two numbers from the user and calculate the sum of the two numbers.

    /*
    int x = 0;
    int y = 0;
    
        printf("\nSyötä ensimmäinen numero: ");
            scanf("%d", &x);
        printf("\nSyötä toinen numero: ");
            scanf("%d", &y);

        printf("\n*Beep Boop* Näiden numeroiden yhteynen summa on: %d", x + y);
    */

//Answer
/*
#include<stdio.h>
int main() {
int a, b, sum;
printf("\nEnter the first number: "); 
scanf("%d", &a);
printf("\nEnter the second number: ");
scanf("%d", &b);
sum = a + b;
printf("\nSum of the above two numbers is: %d", sum);
return 0;
}
*/

    //5. Write a program that accepts two numbers from the user and calculate the product of the two numbers.

    /*
    int x = 0;
    int y = 0;

        printf("\nSyötä ensimmäinen luku: ");
            scanf("%d", &x);
        printf("\nSyötä toinen luku: ");
            scanf("%d", &y);

        printf("\nNäiden lukujen yhteinen tulo on: %d", x*y);
    */

//Answer
/*
#include<stdio.h>
int main() {
int a, b, mult;
printf("\nEnter the first number: "); 
scanf("%d", &a);
printf("\nEnter the second number: ");
scanf("%d", &b);
mult = a * b;
printf("\nProduct of the above two numbers is: %d", mult);
return 0;
}
*/

    //6. Write a program that accepts three numbers and find the largest of three.
    
    /*
    int x = 0;
    int y = 0;
    int z = 0;

    printf("\nKatsotaan mikä näistä kolmesta on suurin!");
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);
    printf("\nSyötä kolmas luku: ");
        scanf("%d", &z);

    if (x > y & x > z) {
        printf("\nSyötetyistä luvuista %d on suurin", x);
    }

    else if (y > x & y > z) {
        printf("\nSyötetyistä luvuista %d on suurin", y);
    }

    else printf("\nSyötetyistä luvuista %d on suurin", z);
    */

//Answer
/*
#include<stdio.h>
int main() {
int x, y, z;
printf("\nEnter the first number: "); 
scanf("%d", &x);
printf("\nEnter the second number: ");
scanf("%d", &y);
printf("\nEnter the third number: ");
scanf("%d", &z);

// if x is greater than both y and z, x is the largest
if (x >= y && x >= z)
printf("\n%d is the largest number.", x);

// if y is greater than both x and z, y is the largest
if (y >= x && y >= z)
printf("\n%d is the largest number.", y);

// if z is greater than both x and y, z is the largest
if (z >= x && z >= y)
printf("\n%d is the largest number.", z);
    
return 0;
}    
*/

    //7. Write a program that reads three floating values and check if it is possible 
    //to make a triangle with them. 
    //Also calculate the perimeter of the triangle if the entered values are valid.

    /*
    //KOLMION TEKO PERUSTUEN KULMIEN KOKOON!!!!
    float x = 0;
    float y = 0;
    float z = 0;

    printf("\nKatsotaan saadaanko tehtyä syötetyistä luvuista kolmio!");
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%f", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%f", &y);
    printf("\nSyötä kolmas luku: ");
        scanf("%f", &z);
    
    if (x + y + z == 360.00) {
        printf("\nJippii, syötettyjen lukujen summa on yhteensä %2.f elikkä kolmio onnistuu!", x+y+z);
    }

    else if (x + y + z > 360.00) {
        printf("\nSyötettyjen lukujen summa on liian suuri luku muodostamaan kolmion");
    }

    else printf("\nSyötettyjen lukujen summa on liian pieni luku muodostamaan kolmion");

    //KOLMION TEKO SIVUJEN MUKAAN
    float x = 0;
    float y = 0;
    float z = 0;

    printf("\nKatsotaan saadaanko tehtyä syötetyistä luvuista kolmio!");
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%f", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%f", &y);
    printf("\nSyötä kolmas luku: ");
        scanf("%f", &z);

    if (x + y == z || y + z == x || z + x == y) {
        printf("\nMahtavaa! Kolmion teko onnistuu ja sen piiri on: %2.f", x+y+z);
    }
    else printf("\nSyötetyt arvot eivät pysty antamaan kolmiota, pyöritä ohjelma uudelleen!");
    */

//Answer
/*
#include<stdio.h>
int main() {
float  x, y, z;
printf("\nEnter the first number: "); 
scanf("%f", &x);
printf("\nEnter the second number: ");
scanf("%f", &y);
printf("\nEnter the third number: ");
scanf("%f", &z);

if(x < (y+z) && y < (x+z) && z < (y+x)) {  
printf("\nPerimeter of the triangle is: %f\n", x+y+z);	 
}
else {
printf("\nIt is impossible to form a triangle.");
}
return 0;
}
*/

    //8. Write a program that reads an integer between 1 and 7 and print the day of the week in English.

    /*
    int x = 0;

    printf("\nKatsotaanpa päivä! Syötä numero lukujen 1 ja 7 väliltä: ");
        scanf("%d", &x);

    if (x >= 8) {
        printf("\nSyötit liian suuren numeron, kokeille uudestaan!");
    }
    else if (x <= 0) {
        printf("\nSyötit liian pienen numeron, kokeille uudestaan!");
    }
    
    switch (x) {
        case 1:
            printf("\nSyötit luvun %d, päivä on siis maanantai", x);
            break;
        case 2:
            printf("\nSyötit luvun %d, päivä on siis tiistai", x);
            break;
        case 3:
            printf("\nSyötit luvun %d, päivä on siis keskiviikko", x);
            break;
        case 4:
            printf("\nSyötit luvun %d, päivä on siis torstai", x);
            break;
        case 5:
            printf("\nSyötit luvun %d, päivä on siis perjantai", x);
            break;
        case 6:
            printf("\nSyötit luvun %d, päivä on siis lauantai", x);
            break;
        case 7:
            printf("\nSyötit luvun %d, päivä on siis sunnuntai", x);
            break;
    }
    */

//Answer
/*
#include<stdio.h>
int main() {
int day;
printf("\nEnter a number between 1 to 7 to get the day name: ");
scanf("%d", &day);
switch(day) {
case 1 : printf("Monday\n"); break;
case 2 : printf("Tuesday\n"); break;
case 3 : printf("Wednesday\n"); break;
case 4 : printf("Thursday\n"); break;
case 5 : printf("Friday\n"); break;
case 6 : printf("Saturday\n"); break;
case 7 : printf("Sunday\n"); break;
default : printf("Enter a number between 1 to 7.");
}
return 0;
}
*/

    //9. Write a program to find the sum of two numbers.

    /*
    int x, y;
    printf("\nSyötä luvut x ja y: ");
        scanf("%d", &x);
    printf("\nJa y: ");
        scanf("%d", &y);
    printf("\nSyöttämäsi lukujen x ja y summa on: %d", x+y);
    */
    
//Answer
/*
#include<stdio.h>
int main() {
int a, b, sum;
a=1;
b=2;
sum = a + b;
printf("The sum of a and b = %d", sum);
return 0;
}
*/

    //10. Write a program to find the square of a number.

    /*
    int x = 13;
    float y = sqrt(x);

    //printf("\nSyötä numero ja katsotaan sen neliöjuuri: "),
    //    scanf("%d", &x);
    printf("\nSyöttämäsi luvun %d neliö on %2.f", x, y);
    */

//Answer
/*
#include<stdio.h>
#include<math.h>
int main() {
int a, b;
a=2;
b = pow((a), 2);
printf("The square of a = %d", b);
return 0;
}
*/

    //11. Write a program to find the greatest of two numbers.

    /*
    int x, y;

    printf("\nKatsotaas kumpi numeroistasi on suurin!");

    printf("\nSyötä ensmimmäinen numerosi: ");
        scanf("%d", &x);
    printf("\nJa sitten seuraava numero: ");
        scanf("%d", &y);

    if (x > y){
        printf("\nLuku %d on suurempi kuin luku %d", x, y);
    }
    else if (x == y){
        printf("\nAntamasi luvut ovat yhtäsuuret");
    }
    else printf("\nLuku %d on suurempi kuin luku %d", y, x);
    */

//Answer

/*
#include<stdio.h>
int main() {
int a, b;
a = 2;
b = 3;
if(a>b) {
printf("a is greater than b");
}
else {
printf("b is greater than a");
}
return 0;
}
*/

    //12. Write a program to print the average of the elements in the array.
    
    /*
    int a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("\nKatsotaanpa viiden numeron jonon keskimäärä!\n");
    printf("\nSyötä ensimmäinen numero: ");
        scanf("%d", &a);
    printf("\nSyötä toinen numero: ");
        scanf("%d", &b);
    printf("\nSyötä kolmas numero: ");
        scanf("%d", &c);
    printf("\nSyötä neljäs numero: ");
        scanf("%d", &d);
    printf("\nJa viimeinen numero: ");
        scanf("%d", &e);
    float ave = (a+b+c+d+e)/5;

    printf("\nSyöttämäsi jonon %d, %d, %d, %d, %d keskiarvo on %2.f", a, b, c, d, e, ave);
    */

//Answer

/*
#include<stdio.h>
int main() {
int i, avg, sum = 0;
int num [5] = {16, 18, 20, 25, 36};
for(i=0; i<5; i++) {
sum = sum + num [i];
avg = sum/5;
}
printf("Sum of the Elements in the array is: %d\n", sum);
printf("Average of the elements in the array is: %d\n", avg);
return 0;
}
*/

    //13. Write a program that prints all even numbers between 1 and 25.

    /*
    printf("\nTulostetaan kaikki parilliset numerot jonosta 1 ... 25: ");
    //for loopilla lisätään jonoon j yksi lisää niin kauan kunnes se on 25,
    //jonka jälkeen se lopettaa lisäämisen
    for (int j = 1; j <= 25; j++){
    //jos jono j jakojäännös on 0, se tulostetaan
        if (j%2 == 0 ){
            printf("%d, ", j);
        }
    }
    */

//Answer

/*
printf("Even numbers between 1 to 25:\n");
for(int i = 1; i <= 25; i++) {
if(i%2 == 0) {
printf("%d ", i);
}
}
return 0;
}
*/

    //14. Write a program that prints all odd numbers between 1 and 50.
    
    /*
    printf("\nTulostetaan kaikki parittomat numerot jonosta 1 ... 50: ");

    for (int j = 1; j <= 50; j++){
    //Voidaan myös käyttää if (j%2 != 0)...
        if (j%2 == 1){
            printf("%d, ", j);
        }
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
printf("Odd numbers between 1 to 50:\n");
for(int i = 1; i <= 50; i++) {
if(i%2 != 0) {
printf("%d ", i);
}
}
return 0;
}
*/

    //15. Write a program to print the first 10 numbers starting from 
    //one together with their squares and cubes.

    /*
    printf("\nTulostetaan numeroiden 1 ... 10 summa ja lasketaan niiden neliöt ja kuutiot\n");

    for (int j = 1; j <= 10; j++){
        printf("Jonon numero on %d numeron neliö on %d ja kuutio on %d \n", j, j*j, j*j*j);
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
for(int i=1; i<=10; i++) {
printf("Number = %d its square = %d its cube = %d\n", i , i*i, i*i*i);
}
return 0;
}
*/

    //16. Write a program:
    //If you enter a character M
    //Output must be: ch = M.

    /*
    char x;
    printf("\nSyötä kirjain: ");
    scanf("%c", &x);

    printf("\nch = %c." , x);
    */
    
//Answer

/*
#include<stdio.h>
int main() {
char M;
printf("Enter any character: ");
scanf("%c", &M);
printf("ch = %c", M);
return 0;
}
*/

    //17. Write a program to print the multiplication table of a number entered by the user.

    /*
    int x, y;

    printf("\nKatsotaanpa kertotaulukkoa!");

    printf("\nSyötä numero: ");
        scanf("%d", &x);
    for (y = 1; y <= 10; y++){
        printf("\nLuvun %d ja %d tulo on %d\n", x, y, x*y);
    }
    */
    
//Answer

/*
int n, i;
printf("Enter any number: ");
scanf("%d", &n);
for(i=1; i<=5; i++) {
printf("%d * %d = %d\n", n, i, n*i);
}
*/

    //18. Write a program to print the product of the first 10 digits.

    /*
    int x, y = 1;

    printf("\nLasketaan merkkijonon 10 ensimmäisen numeron tulo!");

    printf("\nSyötä numero: ");
        scanf("%d", &x);
    for (x = 1; x <= 10; x++){
        y = y * x;
    }
    printf("\nEnsimmäisen 10 numeron tulo on %d", y);
    */

//Answer

/*
#include<stdio.h>
int main() {
int i, product = 1;
for(i=1; i<=10; i++) {
product = product * i;
}
printf("The product of the first 10 digits is: %d", product);
return 0;
}
*/

    //19. Write a program to print whether the given number is positive or negative.

    /*
    float x;

    printf("\nTarkistetaan onko numero positiivinen vai negatiivinen!");
    printf("\nSyötä numero: ");
        scanf("%f", &x);
    if (x >= 0){
        printf("\nNumero %.2f on positiivinen!", x);
    }
    else printf("\nNumero %.2f on negatiivinen!", x);
    */

//Answer

/*
#include<stdio.h>
int main() {
int a;
a = -35;
if(a>0) {
printf("Number is positive");
}
else {
printf("Number is negative");
}
return 0;
}
*/

    //20. Write a program to check the equivalence of two numbers entered by the user.

    /*
    int x, y;

    printf("\nTarkistetaan ovatko syötetyt numerot saman kokoiset!");

    printf("\nSyötä ensimmäinen numero: ");
        scanf("%d", &x);
    printf("\nSyötä toinen numero: ");
        scanf("%d", &y);
    
    if (x == y) {
        printf("\nNumerot ovat yhtäsuuria!");
    }
    else printf("\nNumerot eivät ole yhtä suuria. Aja minut uudestaan.");
    */
    
//Answer

/*
#include<stdio.h>
int main() {
int x, y;
printf("\nEnter the first number: ");
scanf ("%d", &x);
printf("\nEnter the second number: ");
scanf ("%d", &y);
if(x-y==0) {
printf("\nThe two numbers are equivalent");
}
else {
printf("\nThe two numbers are not equivalent");
}
return 0;
}
*/

    //21. Write a program to print the remainder of two numbers entered by the user.

    /*
    printf("\nKatsotaanpa lukujen jako!");
    int x, y, z;
    printf("\nSyötä jaettava luku: ");
        scanf("%d", &x);
    printf("\nSyötä jakava luku: ");
        scanf("%d", &y);
    z = x%y;
    printf("\nAntamistasi luvuista jäljelle jaon jälkeen jää %d.", z);
    */

//Answer

/*
#include<stdio.h>
int main() {
int a, b, c;
printf("\nEnter the first number: ");
scanf ("%d", &a);
printf("\nEnter the second number: ");
scanf ("%d", &b);
c = a%b;
printf("\n The remainder of %d and %d is: %d", a, b, c);
return 0;
}
*/
 
    //22. Write a program to print the characters from A to Z.

    /*
    char x;
    printf("\nTulostetaan kirjaimet A ... Z\n");   
    for (x = 'A'; x <= 'Z'; x++) {
        printf("%c ", x);
    }
    */
 
//Answer

/*
#include<stdio.h>
int main() {
char i;
for(i='A'; i<='Z'; i++) {
printf("%c\n", i);
}
return 0;
}
*/

    //23. Write a program to print the length of the entered string.

    /*
    char x[100];
    printf("\nSyötä sana ja lasken montako merkkiä syötteessä on: ");
        scanf("%s", x);
    printf("\nSyötteen %s pituus on: %ld merkkiä!", x, strlen(x));
    */

//Answer

/*
#include<stdio.h>
#include<string.h>
int main() {
char str[1000];
printf("Enter a string to calculate its length: ");
scanf("%s", str);
printf("The length of the entered string is: %ld", strlen(str));
return 0;
}
*/

    //24. Write a program to check whether the given character is a lower case letter or not.

    /*
    char x;
    printf("\nTarkistetaan onko kirjain PIENI!");

    printf("\nSyötä kirjain: ");
        scanf("%c", &x);
    if (islower(x)){
        printf("\nSyötetty kirjain on PIENI!");
    }
    else {
        printf("\nSyötetty kirjain on iso.");
    }
    */

//Answer

/*
#include<stdio.h>
#include <ctype.h>
int main() {
char ch = 'a';
if(islower(ch)) {
printf("The given character is a lower case letter");
}
else {
printf("The given character is a upper case letter");
}
return 0;
}
*/

    //25. Write a program to check whether the given character is a upper case letter or not.

    /*
    char x;
    printf("\nTarkistetaan onko kirjain ISO!");

    printf("\nSyötä kirjain: ");
        scanf("%c", &x);
    if (isupper(x)){
        printf("\nSyötetty kirjain on ISO!");
    }
    else {
        printf("\nSyötetty kirjain on pieni.");
    }
    */

//Answer

/*
#include<stdio.h>
#include <ctype.h>
int main() {
char ch = 'A';
if(isupper(ch)) {
printf("The given character is a upper case letter");
} 
else {
printf("The given character is a lower case letter");
}
return 0;
}
*/

    //26. Write a program to convert the lower case letter to upper case letter.

    /*
    char x;

    printf("\nMuutetaanpa PIENET kirjaimet isoiksi kirjaimiksi!");
    printf("\nSyötä kirjain: ");
        scanf("%c", &x);
    printf("\nKirjain %c on nyt %c", x, toupper(x));
    */

//Answer

/*
#include<stdio.h>
#include <ctype.h>
int main() {
char ch = 'a';
char b = toupper(ch);
printf("Lower case letter '%c' is converted to Upper case letter '%c'", ch, b);
return 0;
}
*/

//27. Write a program that takes a distance in centimeters and outputs the corresponding value in inches.

    /*
    float x, y;

    printf("\nMuutetaan senttimetrit tuumiksi!");
    printf("\nSyötä senttimetrit: ");
        scanf("%f", &x);
    y = x / 2.54;

    printf("\nSyöttämäsi %.2f senttimetriä on %.2f tuumaa!", x, y);
    */

//Answer

/*
#include<stdio.h> 
#define x 2.54
int main() {
double inch, cm;
printf("Enter the distance in cm: ");
scanf("%lf", &cm);
inch = cm / x;
printf("\nDistance of %0.2lf cms is equal to %0.2lf inches", cm, inch);
return 0;
}
*/

    //28. Write a program to print the output:
    //Einstein [0] = E
    //Einstein [1] = I
    //Einstein [2] = N
    //Einstein [3] = S
    //Einstein [4] = T
    //Einstein [5] = E
    //Einstein [6] = I
    //Einstein [7] = N

    /*
    char nimi[8] = {'E', 'I', 'N', 'S', 'T', 'E', 'I', 'N'};

    for(int e = 0; e < 8; e++){
        printf("\nEinstein %d = %c ", e, nimi[e]);
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
char name [8] = {'E' , 'I', 'N', 'S', 'T', 'E', 'I', 'N'};
for(int i=0; i<8; i++) {
printf("\nEinstein [%d] = %c", i, name[i]);
}
return 0;
}
*/

    //29. Write a program to print "Hello World" 10 times.

    /*
    printf("\nKirjoitetaanpas 'Hello World' 10 kertaa!");

    for(int h = 1; h <= 10; h++){
        printf("\nHello World");
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
for(int i=1; i<=10; i++) {
printf("Hello World \n");
}
return 0;
}
*/

    //30. Write a program to print first 5 numbers using do while loop statement.

    /*
    int x, y;
    
    printf("\nTulostetaan viisi ensimmäistä numeroa!");

    printf("\nSyötä numero: ");
        scanf("%d", &x);
    y = x+5;

    do {
        printf("\n%d", x);
        x++;
    } while (x<=y);
    */

//Answer

/*
#include<stdio.h>
int main() {
int i =1;
do {
printf("%d\n", i++);
} while(i<=5);
return 0;
}
*/
    
    //31. Write a program to check whether a character is an alphabet or not.

    /*
    int x;

    printf("\nSyötä kirjain tai numero: ");
        scanf("%c", &x);
    if(isalpha(x)){
        printf("\nSyötit kirjaimen!");
    }
    else{
        printf("\nSyötit numeron!");
    }
    */
    
//Answer

/*
#include<stdio.h>
#include<ctype.h>
int main() {
int a =2;
if(isalpha(a)) {
printf("The character a is an alphabet");
}
else {
printf("The character a is not an alphabet");
}
return 0;
}
*/

    //32. Write a program to check whether a entered number is even or odd.

    /*
    int x;

    printf("\nKatsotaan onko numero parillinen vai pariton!");
    printf("\nSyötä numero: ");
        scanf("%d", &x);
    if (x%2 == 0){
        printf("\nSyöttämäsi numero on parillinen!");
    }
    else{
        printf("\nSyöttämäsi numero on pariton!");
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
int a;
printf("Enter any number: ");
scanf ("%d", &a);
if(a%2 == 0) {
printf("The entered number is even");
}
else {
printf("The entered number is odd");
}
return 0;
}
*/

    //33. Write a program to print the ASCII value of the given character.

    /*
    char x;

    printf("\nTulostetaanpa kirjaimen ASCII arvo!");

    printf("\nSyötä kirjain: ");
        scanf("%c", &x);
    printf("\nSyöttämäsi kirjaimen %c ASCII arvo on %d", x, x);
    */   

//Answer

/*
#include<stdio.h>
int main() {
char ch ='A';
printf("The ASCII value of %c is: %d", ch, ch);
return 0;
}
*/

    //34. Write a program that will print all numbers between 1 to 50 which 
    //divided by a specified number and the remainder will be 2.

    /*
    int x, y;

    printf("\nSyötä numero: ");
        scanf("%d", &x);
    for(int y = 1; y <= 50; y++){
        if ((y%x) == 2){
            printf("\n%d", y);
        }
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
int x, i;
printf("Enter a number: ");
scanf("%d", &x);
for(i=1; i<=50; i++) {
   if((i%x)==2) {
    printf("%d\n", i);
	 }
}
return 0;
}
*/

    //35. Write a program to determine whether two numbers in
    // a pair are in ascending or descending order.

    /*
    int x, y;

    printf("\nKatsotaanpa ovatko numerot nousevia vai laskevia!");

    printf("\nSyötä ensimmäinen luku: \n");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: \n");
        scanf("%d", &y);
    
    if (x > y){
        printf("\nSyöttöjen perusteella numerot ovat laskevia!");
    }
    else if (x < y){
        printf("\nSyöttöjen perusteella numerot ovat nousevia!");
    }
    else{
        printf("\nVirhe havaittu! Numerot ovat saman kokoiset!!!!");
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
int a, b;
printf("\nEnter a pair of numbers (for example 22,12 | 12,22): ");
printf("\nEnter the first number: ");
scanf("%d", &a);
printf("\nEnter the second number: ");
scanf("%d", &b);
if (a>b) {
printf("\nThe two numbers in a pair are in descending order.");
}
else {
printf("\nThe two numbers in a pair are in ascending order.");
}
return 0;
} 
*/

    //36. Write a program that reads two numbers and divides one by the other. 
    // Specify "Division not possible" if that is not possible.

    /*
    int x, y;

    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);

    if (x/y != 0){
        printf("\n%d jaettuna %d on %.1f", x, y, x/y);
        
    }
    else {
        printf("\nLASKUTOIMITUS EI OLE MAHDOLLINEN!!!!");
    }
    */
   
//Answer

/*
#include<stdio.h>
int main() {
int a, b;
float c;
printf("\nEnter the first number: ");
scanf("%d", &a);
printf("\nEnter the second number: ");
scanf("%d", &b);
if(b != 0) {
   	c = (float)a/(float)b;
	printf("\n%d/%d = %.1f", a, b, c);
} 
else {
	 printf("\nDivision not possible.\n");
}
return 0;
}
*/

    //37. Write a program that will print all numbers between 1 to 50 
    // which divided by a specified number and the remainder is equal to 2 or 3.
    
    /*
    int x, y;
    printf("\nSyötä jakaja luku: ");
        scanf("%d", &x);

    for (y=1; y <= 50; y++){
        if ((y%x)==2 || (y%x)==3){
            printf("\n%d", y);
        }
    }
    */
   
//Answer

/*
#include<stdio.h>
int main() {
int x, i;
printf("Enter a number: ");
scanf("%d", &x);
for(i=1; i<=50; i++) {
   if((i%x)==2 || (i%x) == 3) {
    printf("%d\n", i);
	 }
}
return 0;
}
*/

    //38. Write a program that adds up all numbers between 1 and 100 
    // that are not divisible by 12.

    /*
    int x =12, y, z = 0;
    printf("\nListataan kaikki 1 ... 100, jotka eivät ole jaettavissa luvulla 12!");
    for (y=1; y<=100; y++){
        if ((y%x) != 0){
            z += y;
        }
    }
    printf("\n %d \n", z);    
    */

//Answer

/*
#include<stdio.h>
int main() {
int x =12, i, sum = 0;
for(i=1; i<=100; i++) {
   if((i%x)!= 0) {
    sum += i;
	 }
}
printf("\nSum: %d\n", sum);
return 0;
}
*/

    //39. Write a program to calculate the value of x where x = 1 + 1/2 + 1/3 + … + 1/50.

    /*
    float x = 0;

    for (int y = 1; y <= 50; y++){
        x += (float)1/y;
    }
    printf("\nX:n arvo on %.2f", x);
    */

//Answer

/*
#include<stdio.h>
int main() {
float x = 0;
for(int i=1; i<=50; i++) {
   x += (float)1/i;
}
printf("Value of x: %.2f\n", x);
return 0;
}
*/

    //40. Write a program that reads a number and find all its divisor.

    /*
    int x, y;
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nLuvun %d jakajat ovat: \n", x);
    for (y=1; y<=x; y++){
        if ((x%y) == 0){
            printf("\n%d", y);
        }    
    }
    */

//Answer

/*
#include<stdio.h>
int main() {
int x, i;
printf("\nEnter a number: ");
scanf("%d", &x);
printf("All the divisor of %d are: ", x);
for(i = 1; i <= x; i++) {
    if((x%i) == 0) {
	printf("\n%d", i);
    }
}	
return 0;
}
*/

    //41. Write a program to find the incremented and decremented values of two numbers.

    /*
    int x, y, a, b, c, d;
    
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);

    a=x+1;
    b=x-1;
    c=y+1;
    d=y-1;


    printf("\nLuvuista seuraavat suuremmat ovat %d ja %d.", a, c);
    printf("\nLuvuista seuraavat pienemmät ovat %d ja %d.", b, d);
    */

//Answer

/*
#include<stdio.h>
int main() {
int a, b, c, d, e, f;
a = 10;
b=12;
c=a+1;
d=b+1;
e=a-1;
f=b-1;
printf("The incremented value of a =%d", c);
printf("The incremented value of b =%d", d);
printf("The decremented value of a =%d", e);
printf("The decremented value of b =%d", f);
return 0;
}
*/

    //42. Write a program to find square of a entered number using functions.
////////////////////////////////////////////////////////////////////
    /*
    int sqr();{
        int x;

        printf("\nSyötä numero: ");
            scanf("%d", &x);
        printf
    }
    */
//////////////////////////////////////////////////////////////////////////
//Answer

 /*
#include<stdio.h>
int square();
int main() {
int answer;
answer = square();
printf("The square of the entered number is: %d", answer);
return(0);
}
int square() {
int x;
printf("Enter any number: ");
scanf("%d", &x);
return x*x;
}
*/

    //43. Write a program that accepts principal amount, rate of interest, 
    // time and compute the simple interest.

    /*
    //p= Pääoma
    //k=korko
    //a=aika
    //yk=yksinkertainen korko

    int p, k, a, yk;

    printf("\nSyötä pääoma: ");
        scanf("%d", &p);
    printf("\nSyötä korko: ");
        scanf("%d", &k);
    printf("\nLisää aika: ");
        scanf("%d", &a);
    
    yk=(p*k*a)/100;

    printf("\nYksinkertaisen koron määrä on: %d", yk);
    */

//Answer

/*
#include<stdio.h>
int main() {
int p,r,t,SI;
printf("\nEnter the principal amount: ");
scanf("%d",&p);
printf("\nEnter the rate of interest: ");
scanf("%d",&r);
printf("\nEnter the time: ");
scanf("%d",&t);
SI=(p*r*t)/100;
printf("\nSimple interest is: %d", SI);
return 0;
}
*/ 

    //44. Write a program that swaps two numbers without using third variable.

    /*
    int x, y;

    printf("\nKäännetään syötöt x ja y muotoon y ja x!");

    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);

    printf("\nSyötit luvut %d ja %d", x, y);
    printf("\nWOOOOSH!!");
    printf("\nNyt luvut ovat %d ja %d!", y, x);
    */

//Answer

/*
#include<stdio.h>
int main() {
int a, b;
printf("\nEnter the value for a: ");
scanf("%d",&a);
printf("\nEnter the value for b: ");
scanf("%d",&b);
printf("\nBefore swapping: %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping: %d %d",a,b);
return 0;
}
*/

    //45. Write a program to find the greatest of two entered numbers using pointers.

    /*
    int x, y;

    printf("\nSyötä kaksi lukua ja katsotaan niistä suurempi!");

    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", y);

    if (x<y) {
        printf("\nSyöttämistäsi luvuista %d on suurempi!", y);
    }
    else {
        printf("\nSyöttämistäsi luvuista %d on suurempi!", x);
    }
    */
    
//Answer

/*
#include<stdio.h>
int main() {
int x, y, *p, *q;
printf("Enter the value for x: ");
scanf("%d", &x);
printf("Enter the value for y: ");
scanf("%d", &y);
p = &x;
q = &y;
if(*p>*q) {
printf("x is greater than y");
}
if(*q>*p) {
printf("y is greater than x");
}
return 0;
}
*/

    //46. Write a program to print the output:
    // body [b] = b
    // body [o] = o
    // body [d] = d
    // body [y] = y

    /*
    char k[4] = {'b', 'o', 'd', 'y'};

    for(int x = 0; x < 4; x++)
    printf("\nbody [%c] = %c", k[x], k[x]);
    */
    
//Answer

/*
#include <stdio.h>
int main() {
char i;
char body [4] = {'b', 'o', 'd', 'y'};
for(i=0; i<4; i++)
printf("\n body[%c] = %c", body[i] , body[i]);
return 0;
}
*/

    //47. Write a program to calculate the discounted price and the total price after discount
    // Given:
    // If purchase value is greater than 1000, 10% discount
    // If purchase value is greater than 5000, 20% discount
    // If purchase value is greater than 10000, 30% discount.

    /*
    int x;

    printf("\nKatsotaan paljonko alennusta saa!!");

    printf("\nSyötä hinta: ");
        scanf("%d", &x);
    if(1000 <= x && x <= 4999){
        printf("\nHinta on: %d, saat 10%% alennusta, loppu hinta on: %.2f", x, x - x*0.1);
    }
    else if(5000 <= x && x <= 9999){
        printf("\nHinta on: %d, saat 20%% alennusta, loppu hinta on: %.2f", x, x - x*0.2);
    }
    else if(10000 <= x){
        printf("\nHinta on: %d, saat 30%% alennusta, loppu hinta on: %.2f", x, x - x*0.3);
    }
    else{
        printf("\nHinta on liian pieni jotta saisit alennusts!");
    }
    */

//Answer
//THIS ANSWER MIGHT BE WRONG
/*
#include<stdio.h>
int main() {
double PV;
printf("Enter purchased value: ");
scanf("%lf", &PV);
if(PV>1000) {
printf("\n Discount = %lf", PV* 0.1);
printf("\n Total = %lf", PV - PV* 0.1);
}
else if(PV>5000) {
printf("\n Discount = %lf", PV* 0.2);
printf("\n Total = %lf", PV - PV* 0.2);
}
else {
printf("\n Discount = %lf", PV* 0.3);
printf("\n Total = %lf", PV - PV* 0.3);
}
return 0;
}
*/

    //48. Write a program to print the first ten natural numbers using while loop statement.

    /*
    int x = 1;

    while (x <= 10){
        printf("\n%d", x++);
    }
    */
    
//Answer

/*
#include<stdio.h>
int main() {
int i = 1;
while (i<=10) {
printf("%d\n", i++);
}
return 0;
}
*/
    
    //49. Write a program to shift inputted data by two bits to the left.

    /*
    int x;

    printf("\nSyötä luku: ");
        scanf("%d", &x);
    printf("%d", x<<=2);
    */

//Answer

/*
#include<stdio.h>
int main() {
int x;
printf("Enter the integer from keyboard: ");
scanf("%d",&x);
printf("\nEntered value: %d ",x);
printf("\nThe left shifted data is: %d ", x<<=2);
return 0;
}
*/
    
    //50. Write a program to shift inputted data by two bits to the Right.

    /*
    int x;

    printf("\nSyötä luku: ");
        scanf("%d", &x);
    printf("%d", x>>=2);
    */

//Answer

/*
#include<stdio.h>
int main() {
int x;
printf("Enter the integer from keyboard: ");
scanf("%d",&x);
printf("\nEntered value: %d ",x);
printf("\nThe right shifted data is: %d ", x>>=2);
return 0;
}
*/

    //51. Write a program to calculate the exact difference between x and 21. Return three times the absolute difference if x is greater than 21.

    /*
    int x, y=21, z;

    printf("\nSyötä numero: ");
        scanf("%d", &x);
    if (x <= 21){
        printf("\nEro luvun %d ja luvun 21 välillä on: %d", x, 21-x);
    }
    else{
        printf("\nEro luvun %d ja luvun 21 välillä on: %d", x, x-21);
    }
    */

//Answer

/*
#include<stdlib.h>
#include<stdio.h>
int main() {
int x;
printf("Enter the value for x: ");
scanf("%d",&x);
if(x<=21){
    printf("%d",abs(x-21));
 }
else if(x>=21) {
    printf("%d",abs(x-21)*3);
}
return 0;
}
*/

    //52. Write a program that reads in two numbers and determine whether the first number is a multiple of the second number.

    /*
    int x, y;

    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);
    
    if (x%y==0){
        printf("\nLuku %d on luvun %d kerrannainen", x, y);
    }
    else{
        printf("\nLuku %d ei ole luvun %d kerrannainen", x, y);
    }
    */

//Answer

/*
int x, y;
printf("\nEnter the first number: ");
scanf("%d", &x);
printf("\nEnter the second number: ");
scanf("%d", &y);
if(x % y == 0) {
printf("\n%d is a multiple of %d.\n", x, y);
}
else {
printf("\n%d is not a multiple of %d.\n", x, y);
}   
*/

    //53. Write a program to print the output:
    // Name of the book = B
    // Price of the book = 135.00
    // Number of pages = 300
    // Edition of the book = 8
    // using structures.

    /*
    int s = 300;
    int v = 8;
    float h = 135.00;
    char n = 'B';

    printf("\nKirjan nimi: %c", n);
    printf("\nKirjan hinta: %.2f", h);
    printf("\nSivumäärä: %d", s);
    printf("\nKirjan versio: %d", v);
    */
    
//Answer

/*
#include<stdio.h>
int main() {
struct book {
char name;
float price;
int pages;
int edition;
};
struct book b1;
b1.name = 'B';
b1.price = 135.00;
b1.pages = 300;
b1.edition = 8;
printf("\n Name of the book = %c", b1.name);
printf("\n Price of the book = %f", b1.price);
printf("\n Number of pages = %d", b1.pages);
printf("\n Edition of the book = %d", b1.edition);
return 0;
}
*/

    //54. Write a program to convert Celsius into Fahrenheit.

    /*
    int c = 0;
    float f = 0;

    printf("\nAnna lämpötila Celsius asteina: ");
    scanf("%d", &c);
    f = c * 1.8 + 32 ;
    printf("\nLämpötila on %.1f astetta fahrenheitia", f);
    */

//Answer

/*
#include<stdio.h>  
int main() {   
float fahrenheit, celsius;  
celsius = 36;  
fahrenheit = ((celsius*9)/5)+32;  
printf("\nTemperature in fahrenheit is:  %f",fahrenheit);  
return 0;  
}
*/

    //55. Write a program that will examine two inputted integers and return true if either of them is 50 or if their sum is 50.

    /*
    int x, y;
    
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);
    
    if (x == 50 || y == 50){
        printf("\nTrue");
    }
    else {
        printf("\nFalse");
    }
    */
    
//Answer

/*
#include<stdio.h>
int main() {
int x, y; 
printf("\nEnter the value for x: ");
scanf("%d", &x);
printf("\nEnter the value for y: ");
scanf("%d", &y);
if(x == 50 || y == 50 || (x + y == 50)) {
    printf("\nTrue");
} 
else {
    printf("\nFalse");
}    
return 0;
}
*/

    //56. Write a program that counts the even, odd, positive, and negative values among eighteen integer inputs.

    /*
    //x syötettävä luku, n negatiivinen, p positiivinen, t (parillinen)tasaluku, e (pariton)epätasaluku, l lukuja
    int x, y, n=0, p=0, t=0, e=0;

    printf("\nSyötä numeroiden määrä: ");
        scanf("%d", &y);
    printf("\nSyötä numeroita: ");
    
    for(int l=0; l < y; l++){
        scanf("%d", &x);
    if (x < 0){
        n++;
    }
    if(x > 0){
        p++;
    }
    if(x % 2 == 0){
        t++;
    }
    if(x % 2 != 0){
        e++;
    }
    }
    printf("\nSyötetyistä numeroista negatiivisiä on: %d", n);
    printf("\nSyötetyistä numeroista positiivisia on: %d", p);
    printf("\nSyötetyistä numeroista parillisia on: %d", t);
    printf("\nSyötetyistä numeroista parittomia on: %d", e);
    */

//Answer

/*
#include<stdio.h>
int main () {
int x, even = 0, odd = 0, positive = 0, negative = 0;
printf("\nPlease enter 18 numbers:\n");
for(int i = 0; i < 18; i++) {
scanf("%d", &x);
if (x > 0) {
    positive++;
}
if(x < 0) {
    negative++;
}
if(x % 2 == 0) {
    even++;
}
if(x % 2 != 0) {
    odd++;
}
}
printf("\nNumber of even values: %d", even);
printf("\nNumber of odd values: %d", odd);
printf("\nNumber of positive values: %d", positive);
printf("\nNumber of negative values: %d", negative);
return 0;
}
*/

    //57. Write a program to check whether the person is a senior citizen or not.

    /*
    //tehdään muuttuja ikä
    int ika;

    printf("\nSyötä ikä: ");
        scanf("%d", &age);

    //tehdään if else jolla katsotaan onko henkilö seniori vai ei
    if (x >= 05)
    {
        printf("\nHenkilö on seniori kansalainen.");
    }
    else 
    {
        printf("\nHenkilö ei ole seniorikansalainen.");
    }
    */
    
//ANSWER

/*
#include<stdio.h>
int main() {
int age;
printf("Enter age: ");
scanf("%d", &age);
if(age>=60) {
printf("Senior citizen");
}
else {
printf("Not a senior citizen");
}
return 0;
}
*/

    //58. Write a program that reads a student's three subject scores (0-100) and computes the average of those scores.

    /*
    //tehdään kolme muuttujaa ja keskiarvo
    int x, y, z;
    float kesk;

    //tehdää kolmelle oppiaineelle pisteytyksen kerääminen
    printf("\nSyötä ensimmäisen aineen pisteytys: ");
        scanf("%d", &x);
    printf("\nSyötä toisen aineen pisteytys: ");
        scanf("%d", &y);
    printf("\nSyötä kolmannen aineen pisteytys: ");
        scanf("%d", &z);

    //tehdään keskiarvolle toimivuus
    kesk = (x + y + z)/3;

    //tulostetaan aineiden keskiarvo
    printf("\nAineiden keskiarvo on: %.2f", kesk);
    */

//ANSWER

/*
#include<stdio.h>
int main() {
float score, total_score = 0;
int subject = 0;
printf("Enter three subject scores (0-100):\n");
while (subject != 3) {
scanf("%f", &score);
if(score < 0 || score > 100) {
printf("Please enter a valid score.\n");
}
else {
total_score += score;
subject++;
  }
}
printf("Average score = %.2f\n", total_score/3);
return 0;
} 
*/

    //59. What results would the following programs produce?

    /*
#include<stdio.h>
int main() {
for(int i=1; i<=5; i++) {
if(i==3) {
break;
}
printf("%d\n", i);
}
return 0;
}    
    */

   /*
   1
   2
   */

//ANSWER

/*
1
2
*/

    //60. Write a program to find the size of an array.

    /*
    //tehdään array
    int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    //tehdään arrayn koon laskeva muuttuja, joka saa arvon merkkijonon pituudesta
    int x = sizeof(myarray) / sizeof(myarray[0]);

    //tulostetaan muuttujan x arvo
    printf("\nmyarray jonon pituus on %d", x);
    */

//ANSWER

/*
#include<stdio.h>
int main() {
int num [] = {11, 22, 33, 44, 55, 66};
int n = sizeof(num) / sizeof(num [0]);
printf("Size of the array is: %d\n", n);
return 0;
}
*/

    //61. Write a program that prints a sequence from 1 to a given integer, 
    // inserts a plus sign between these numbers, 
    // and then removes the plus sign at the end of the sequence.

    /*
    //luodaan muuttujat x ja y
    int x, y;

    //
    printf("\nSyötä numero: ");
        scanf("%d", &x);

    //
    if (x > 0)
    {   
        for (y = 1; y < x; y++)
        {
            printf("%d + ", y);
        }
        printf("%d", y);
    }
    */

//ANSWER

/*
#include<stdio.h>
int main () {
int x, i;
printf("\nEnter a integer: \n");
scanf("%d", &x);
if(x>0) {
printf("Sequence from 1 to %d:\n", x);
for(i=1; i<x; i++)  {
printf("%d+", i);
}
printf("%d\n", i);
}
return 0;
}
*/

    //62. Write a program to verify whether a triangle's three sides 
    // form a right angled triangle or not.

    /*
    //luodaan muuttujat kolmion kaikille sivuille
    int a, b, c;

    //kysytään kolmion sivujen pituudet
    printf("\nAnna sivujen pituudet: ");
        scanf("%d %d %d", &a, &b, &c);

    //tarkistetaan onnistuuko kolmio. kahden sivun summan on aina oltava yhtäpaljon kuin
    // kolmannen sivun
    if (a + b == c || b + c == a || a + c == b || a == b == c)
    {
        printf("\nKolmion sivujen pituudet mahdollistavat kolmion muodostamisen");
    }
    else
    {
        printf("\nAntamasi sivujen perusteella kolmiota ei voida muodostaa.");
    }
    */

//ANSWER

/*
#include<stdio.h>
int main() {
int a,b,c;
printf("Enter the three sides of a triangle: \n");
scanf("%d %d %d",&a,&b,&c);  
if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a)) {  
printf("Triangle's three sides form a right angled triangle.\n");  
}
else { 
printf("Triangle's three sides does not form a right angled triangle.\n"); 
}
return 0;
}
*/

    //63.Write a program that will find the second-largest 
    // number among the user's input of three numbers.

    /*
    //luodaan kolme muuttujaa x, y ja z
    int x, y, z;
    
    //kysytään käyttäjältä kolme lukua
    printf("\nAnna kolme lukua: ");
        scanf("%d %d %d", &x, &y, &z);

    //etsitään toiseksi suurin luku if else lausekkeella
    if(x > y && x > z)
    {
        if(y > z)
        {
            printf("\nToiseksi suurin luku on %d", y);
        }
        if (z > y && z < x)
        {
            printf("\nToiseksi suurin luku on %d", z);
        }
    }
    if(x < y && x > z)
    {
        printf("\nToiseksi suurin luku on %d", x);
    }
    */

//ANSWER

/*
#include<stdio.h>
int main() {
int a, b, c;
printf("\nEnter the first number: ");
scanf("%d", &a);
printf("\nEnter the second number: ");
scanf("%d", &b);
printf("\nEnter the third number: ");
scanf("%d", &c);
if(a>b && a>c) {
    if(b>c)
            printf("\n%d is second largest number among three numbers", b);
        else
            printf("\n%d is second largest number among three numbers", c);
}
else if(b>c && b>a) {
    if(c>a)
            printf("\n%d is second largest number among three numbers", c);
        else
            printf("\n%d is second largest number among three numbers", a);
}
else if(a>b)
            printf("\n%d is second largest number among three numbers", a);
        else
            printf("\n%d is second largest number among three numbers", b);
    return 0;
}
*/

    //64. Write a program to calculate the sum of the two given integer values. 
    // Return three times the sum of the two values if they are equal.

    /*
    //luodaan muuttujat kahdelle luvulle sekä summalle
    int x, y, sum;

    //annetaan kahdelle muuttujalle arvot
    printf("\nAnna kaksi lukua: ");
        scanf("%d %d", &x, &y);

    sum = x + y;

    if (x == y)
    {
        printf("\n%d", sum * 3);
    }
    else
    {
        printf("\n%d", sum);
    }
    */

//ANSWER

/*
#include<stdio.h>
int myfunc();
int main() {
printf("%d", myfunc(3, 5));
printf("\n%d", myfunc(6, 6));
return 0;
}    
int myfunc(int a, int b) {
return a == b ? (a + b)*3 : a + b;
}
*/

    //65. Write a program that accepts minutes as input, 
    // and display the total number of hours and minutes.

    /*
    //annetaan muuttujat minuuteille ja tunneille
    int m, h;

    //kysytään käyttäjältä minuutit
    printf("\nAnna minuutit: ");
        scanf("%d", &m);

    //muutetaan minuutit tunneiksi ja minuuteiksi
    h = m / 60;
    m = m % 60;

    //tulostetaan minuutit ja tunnit
    printf("\n%d tuntia ja %d minuuttia", h, m);
    */

//ANSWER

/*
#include<stdio.h>
int main() {
int mins, hrs;
printf("Input minutes: ");
scanf("%d",&mins);
hrs=mins/60;
mins=mins%60;
printf("\n%d Hours, %d Minutes.\n", hrs, mins);
return 0;
}
*/

    //66. Write a program to determine whether a positive number 
    // entered by the user is a multiple of three or five.

    /*
    //luodaan muuttuja x
    int x;

    //kysytään käyttäjältä luku
    printf("\nSyötä luku: ");
        scanf("%d", &x);

    //tarkistetaan onko numero jaettavissa luvuilla 3 tai 5
    if (x % 3 == 0 || x % 5 == 0)
    {
        printf("\nNumero on jaollinen kolmella tai viidellä");
    }
    else
    {
        printf("\nNumero ei ole jaollinen kolmella eikä viidellä");
    }
    */
    
//ANSWER

/*
#include<stdio.h>
int main() {
int x;
printf("\nEnter a number: ");
scanf("%d", &x);    
if(x % 3 == 0 || x % 5 == 0) {
printf("True");   
}
else {
printf("False");    
}
return 0;
}
*/

    //67. Write a program to verify whether one of the two entered integers falls 
    // within the range of 100 to 200 included.

    /*
    //Luodaan muuttujat x ja y
    int x, y;

    //Kysytään käyttäjältä muuttujien arvot
    printf("\nSyötä ensimmäinen luku: ");
        scanf("%d", &x);
    printf("\nSyötä toinen luku: ");
        scanf("%d", &y);

    //Tehdään if lauseke, jolla tarkistetaan onko toinen numeroista välillä 100 ... 200
    if ((x >= 100 && x <= 200) || (y >= 100 && y <= 200))
    {
        printf("\nNumero löytyy väliltä 100 ... 200");
    }
    else
    {
        printf("\nKumpikaan numero ei löydy väliltä 100 ... 200");
    }
    */

//ANSWER

/*
#include<stdio.h>
int main() {
int x, y;
printf("\nEnter the value for x: ");
scanf("%d", &x); 
printf("\nEnter the value for y: ");
scanf("%d", &y); 
if((x >= 100 && x <= 200) || (y >= 100 && y <= 200)) {
printf("True");   
}
else {
printf("False");    
}
return 0;
}
*/


///////////////////////////////////////////////////////////////////////////////////////////
/*  TEHDÄÄNPÄ NYT HIEMAN PIDEMMÄN KAAVAN KAUTTA JA KÄYTETÄÄN HYVÄKSI KAIKKEA OPPIMAA     */
///////////////////////////////////////////////////////////////////////////////////////////


    //68. Write a program to determine which of the two given integers is closest to the value 100.
    // If the two numbers are equal, return 0.

    /*
    
    */

    //Luodaan int muuttujat kahdelle kokonaisluvulle
    int x, y;

    //Luodaan osoittimet a ja b
    int* a;
    a = &x;
    int* b;
    b = &y;

    //Käyttäjä antaa arvot osoittimille a ja b jotka antavat arvot muuttujille
    // x ja y
    printf("\nAnna ensimmäinen luku: ");
        scanf("%d", a);
        if (*a > 0)
            continue;
        else
        {
            printf("\n%s\n", VNRO);
                scanf("%d", a);
        }
    
    
    printf("\nSyötä toinen luku: ");
        scanf("%d", b);
        if (*b > 0)
            continue;
        else
        {
            printf("\n%s\n", VNRO);
                scanf("%d", b);
        }

    printf("\nSTOP\n");
    printf("\n%d %d\n", *a, b);



 //   printf(VIRHE);
  //  printf("\n%d ja %d\n", *a, *b);



