#include <iostream>
using namespace std;
class ttt
{
public:
    int choice;
    char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    void draw()
    {
        cout << "\n\n<--------------------  TIC TAC TOE  ------------------->\nPLAYER 1:  X\nPLAYER 2:  O" << endl
             << endl
             << endl;
        cout << "      |"
             << "      |" << endl;
        cout << "   " << a[0][0] << "  |"
             << "  " << a[0][1] << "   |"
             << "   " << a[0][2] << endl;
        cout << "______|"
             << "______|"
             << "______" << endl;
        cout << "      |"
             << "      |" << endl;
        cout << "   " << a[1][0] << "  |"
             << "  " << a[1][1] << "   |"
             << "   " << a[1][2] << endl;
        cout << "______|"
             << "______|"
             << "______" << endl;
        cout << "      |"
             << "      |" << endl;
        cout << "   " << a[2][0] << "  |"
             << "  " << a[2][1] << "   |"
             << "   " << a[2][2] << endl;
        cout << "      |"
             << "      |" << endl;
    }
    void  logicX()
    {
        if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
        {
            cout << "!!!!!!!!  player X is a winner  !!!!!!!!!!";
            exit(0);
        }
    }
    void  logicO()
    {
        if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
        if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'O')
        {
            cout << "!!!!!!!!  player O is a winner  !!!!!!!!!!";
            exit(0);
        }
    }
    void X()
    {

        cout << "\n\nPLAYER[X] TURN :" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            a[0][0] = 'X';
            break;
        }
        case 2:
        {
            a[0][1] = 'X';
            break;
        }
        case 3:
        {
            a[0][2] = 'X';
            break;
        }
        case 4:
        {
            a[1][0] = 'X';
            break;
        }
        case 5:
        {
            a[1][1] = 'X';
            break;
        }
        case 6:
        {
            a[1][2] = 'X';
            break;
        }
        case 7:
        {
            a[2][0] = 'X';
            break;
        }
        case 8:
        {
            a[2][1] = 'X';
            break;
        }
        case 9:
        {
            a[2][2] = 'X';
            break;
        }
        default:
        {
            cout << "!!! INVALID CHOICE !!!" << endl;
            break;
        }
        }
        draw();
        logicX();
    }
    void O()
    {
        cout << "\n\nPLAYER[O] TURN :" << endl;
        cout << "enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            a[0][0] = 'O';
            break;
        }
        case 2:
        {
            a[0][1] = 'O';
            break;
        }
        case 3:
        {
            a[0][2] = 'O';
            break;
        }
        case 4:
        {
            a[1][0] = 'O';
            break;
        }
        case 5:
        {
            a[1][1] = 'O';
            break;
        }
        case 6:
        {
            a[1][2] = 'O';
            break;
        }
        case 7:
        {
            a[2][0] = 'O';
            break;
        }
        case 8:
        {
            a[2][1] = 'O';
            break;
        }
        case 9:
        {
            a[2][2] = 'O';
            break;
        }
        default:
        {
            cout << "!!! INVALID CHOICE !!!" << endl;
            break;
        }
        }
        draw();
        logicO();
    }
};
int main()
{
    ttt t;
    int i;

    for (i = 0; i < 5; i++)
    {
        t.draw();
        t.X();
        t.O();
    }
    cout << "!! TRY AGAIN LOSERS !!" << endl;
    return 0;
}