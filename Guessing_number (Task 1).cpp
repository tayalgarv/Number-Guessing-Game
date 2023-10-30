#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctype.h>
#include <conio.h>
using namespace std;
void again();
void game()
{
    system("CLS");
    srand(time(0));

    int rand_num = rand() % 10;
    cout << endl;
    cout << "\t";
    cout << "--------------------------------------";
    cout << endl;
    cout << "\t";
    cout << "| WELECOME TO NUMBER GUESSING GAME!! |" << endl;
    cout << "\t";
    cout << "--------------------------------------";
    cout << endl;
    cout << endl;
    cout << "Rules for the game are :- \n"
            "1. Please enter number between 0-9 \n"
            "2. Please enter in given range only"
         << endl;

    int x;
    char x1;
    x1 = char(x);
    cout << endl;
    cout << "------------------";
    cout << endl;
lol:
    cout << " My number is:-  ";
    cin >> x;
    cout << endl;
    if (x > 9 || x < 0)
    {
        cout << "\t-> Error, You entered number out of range!!!" << endl;
        goto lol;
    }
    else
    {
        while (x >= 0 && x <= 9)
        {
            if (x > rand_num)
            {
                cout << "\t-> Wrong Guess, Enter lower value!!" << endl;
                cout << endl;
                cout << "-----------------" << endl;
                cout << "My number is:- ";
                cin >> x;
            }
            else if (x < rand_num)
            {
                cout << "\t-> Wrong Guess, Enter greater value!!" << endl;
                cout << endl;
                cout << "------------------" << endl;
                cout << "My number is:- ";
                cin >> x;
            }
            else
            {
                cout << "\t\t\t--------------" << endl;
                cout << "\t\t\t| -> YOU WIN |" << endl;
                cout << "\t\t\t--------------" << endl;
                cout << endl;
                cout << endl;
                again();
            }
        }
    }
}

void again()
{
    char ch;
    cout << "----------------------------------" << endl;
    cout << "Do you want to play again(y/n):- ";
    cin >> ch;
    cout << endl;
    cout << endl;
    cout << endl;

    if (ch != 'n' && ch != 'y')
    {
        cout << " ------------------------" << endl;
        cout << "  -> Wrong value Entered " << endl;
        cout << " ------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << "----------------------------------" << endl;
        cout << "Do you want to play again(y/n):- ";
        cin >> ch;
        cout << endl;
        cout << endl;
        cout << endl;
    }

    if (ch == 'y')
    {
        game();
        // system("CLS");
    }

    else
    {
        cout << "\t\t----------------------" << endl;
        cout << "\t\t| THANKS FOR PLAYING |" << endl;
        cout << "\t\t----------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        return;
    }
}

int main()
{

    game();
}
