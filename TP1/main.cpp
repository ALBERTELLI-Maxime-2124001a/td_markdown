#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void exo2()
{
    cout << "Bonjour" << endl;
}

void exo3()
{
    for (unsigned i = 0; i<10; i=i+1)
    {
         cout << i << '\t';
    }
    cout << endl;
}

void exo4()
{
    for(unsigned i = 0; i<200; i = i+1){
        if(i%10 == 0)
        {
            cout << endl;
        }
        cout << i << '\t';
        }
    cout << endl;
}

void exo5()
{
    unsigned N;
    cout << "Saisir nombre d'entiers" << endl;
    cin >> N;
    for(unsigned i = 0; i < N; i = i+1)
    {
        cout << i << endl;
    }
}

void AffichNPremiersEntiersNat(const unsigned & N, const char & Sep)
{
    for(unsigned i = 0; i < N; i = i+1)
    {
        cout << i << Sep;
    }
    cout << endl;
}

void exo6()
{
    unsigned entAffich = 0;
    char charSep;
    cout << "Saisir un entier" << endl;
    cin >> entAffich;
    cout << "Saisir caractère de séparation" << endl;
    cin >> charSep;
    AffichNPremiersEntiersNat(entAffich, charSep);
}

void exo8()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float delta= 0;
    float racine1 = 0;
    float racine2 = 0;
    cout << "Saisir a, b et c" << endl;
    cin >> a >> b >> c;
    delta = (b*b)-4*a*c;
    if(delta == 0)
    {
        racine1 = -b/(2*a);
        cout << "La racine vaut: " << racine1 << endl;
    }
    else if(delta > 0)
    {
        racine1 = (-b-sqrt(delta))/(2*a);
        racine2 = (-b+sqrt(delta))/(2*a);
        cout << "Les racines valent: x1= " << racine1 << "  x2= " << racine2 << endl;
    }
    else if(delta < 0)
    {
        cout << "Pas de résultats" << endl;
    }
}

void exo9()
{
    srand(time(NULL));
    unsigned nbrATrouver = rand() % 50 + 1;
    unsigned nbrRentre = 0;
    cout << "Devinez un nombre entre 0 et 50" << endl;
    while(nbrRentre != nbrATrouver)
    {
        cin >> nbrRentre;
        if(nbrRentre == nbrATrouver)
        {
            cout << "Bravo ! Vous avez gagné." << endl;
        }
        else if(nbrRentre > nbrATrouver)
        {
            cout << "Plus petit" << endl;
        }
        else if(nbrRentre < nbrATrouver)
        {
            cout << "Plus grand" << endl;
        }
    }
}

void exo10()
{
    for(unsigned i = 99; i>1; i = i-1)
    {
        cout << i << " bottles of beer on the wall," << i << " bottles of beer" << endl << "Take one down and pass it around," << i-1 << " bottles of beer on the wall" << endl << endl;
    }
    cout << "2 bottles of beer on the wall, 2 bottles of beer" << endl << "Take one down and pass it around, 1 bottle of beer on the wall" << endl << endl << "1 bottle of beer on the wall, 1 bottle of beer" << endl << "Take one down and pass it around, no more bottles of beer on the wall" << endl << endl;
    cout << "No more bottles of beer on the wall, no more bottles of beer" << endl << "Go to the store and buy some more, 99 bottles of beer on the wall" << endl << endl;
}

void exo11()
{
    cout << "Saisir une string" << endl;
    string affichChaine;
    getline(cin,affichChaine);
    cout << affichChaine << endl;
}

void exo7()
{
    string numEx;
    for(;;)
    {
        cout << "Choisir un exercice de exo2 à exo11 (exo 7 et 1 n'existent pas):" << endl;
        cin >> numEx;
        if(numEx == "out") break;

        if(numEx == "exo2")
        {
            exo2();
        }
        else if(numEx == "exo3")
        {
            exo3();
        }
        else if(numEx == "exo4")
        {
            exo4();
        }
        else if(numEx == "exo5")
        {
            exo5();
        }
        else if(numEx == "exo6")
        {
            exo6();
        }
        else if(numEx== "exo8")
        {
            exo8();
        }
        else if(numEx == "exo9")
        {
            exo9();
        }
        else if(numEx == "exo10")
        {
            exo10();
        }
        else if(numEx == "exo11")
        {
            exo11();
        }
    }
}

int main()
{
    exo11();
}
