// ** ZADANIA PROGRAMU **
//•	Zrealizuje operację rotacji tablicy
//•	Ograniczy liczbę elementów tablicy do 100
//•	Zweryfikuje czy wszystkie liczby w tablicy należą do zbioru liczb naturalnych

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
using namespace std;
bool lnatur;
int main()
{

    const int a = 7;
    int tab[a];
    int i, j, b = 0;

    cout << "sprawdzam czy wielkosc tablicy nie przekracza 100\n.\n.\n.\n";

    if (a > 100)
    {
        cout << "za duza tablica!";
    }
    else {

        cout << "wielkosc tablicy jest prawidlowa!\n.\n.\n." << endl << "Zapelnianie tablicy liczbami: \n.\n.\n." << endl << "tab[";
        for (int i = 0; i < a; i++)
        {

            srand(time(NULL));
            tab[i] = rand() % 10;

            cout << tab[i];
            if (i < a - 1)
            {
                cout << " ";
            }
            if (tab[i] < 0)
            {
                lnatur = false;
            }
            Sleep(1000);



        }
        cout << "]" << endl;

        cout << endl << "sprawdzan czy wszystkie elementy tablicy sa liczbami naturalnymi" << endl << "..........." << endl;
        if (lnatur = false)
        {
            cout << "jeden z elementów jest ujemny!\n" << endl;
        }
        else {
            cout << endl << "zaden z elementow nie jest ujemny!\n.\n.\n" << endl << "przesuniecie tablicy: " << endl << "tab[";

            for (int j = 0; j < a; j++)
            {

                if (j > 0) {
                    cout << tab[j - 1];

                }
                else if (j == 0)
                {
                    cout << tab[a - 1];
                }
                if (j < a - 1)
                    cout << " ";
            }
            cout << "]" << endl;
        }
    }
}


