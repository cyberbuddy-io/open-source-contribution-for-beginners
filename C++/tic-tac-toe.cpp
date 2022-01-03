#include <iostream>
using namespace std;

int choice;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void display(void)
{

    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |   " << board[0][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |   " << board[1][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |   " << board[2][2] << " \n";
    cout << "\t\t     |     |     \n";
}
void X(void)
{
    cout << "             T i c k -  T a c k -  T o e\n\n";
    cout << "     Player1[X] \n     Player2[O]\n\n\n";
    display();
    cout << "\n      Player1 [X] turn: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        board[0][0] = 'X';
        breturn 0;
    }
    case 2:
    {
        board[0][1] = 'X';
        break;
    }
    case 3:
    {
        board[0][2] = 'X';
        break;
    }
    case 4:
    {
        board[1][0] = 'X';
        break;
    }
    case 5:
    {
        board[1][1] = 'X';
        break;
    }
    case 6:
    {
        board[1][2] = 'X';
        break;
    }
    case 7:
    {
        board[2][0] = 'X';
        break;
    }
    case 8:
    {
        board[2][1] = 'X';
        break;
    }
    case 9:
    {
        board[2][2] = 'X';
        break;
    }
    default:
    {
        cout << "invalid choice!!!";
        break;
    }
    }
    display();
}
void O(void)
{
    cout << "\n      Player1 [O] turn: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        board[0][0] = 'O';
        break;
    }
    case 2:
    {
        board[0][1] = 'O';
        break;
    }
    case 3:
    {
        board[0][2] = 'O';
        break;
    }
    case 4:
    {
        board[1][0] = 'O';
        break;
    }
    case 5:
    {
        board[1][1] = 'O';
        break;
    }
    case 6:
    {
        board[1][2] = 'O';
        break;
    }
    case 7:
    {
        board[2][0] = 'O';
        break;
    }
    case 8:
    {
        board[2][1] = 'O';
        break;
    }
    case 9:
    {
        board[2][2] = 'O';
        break;
    }
    default:
    {
        cout << "invalid choice!!!";
    }
    }
    display();
}
int wx()
{
    if (board[0][0] == board[1][1] == board[2][2] == 'X')
    {
        cout << "----------Winner is Player X----------";
        return 0;
    }
    else if (board[0][0] == board[1][0] == board[2][0] == 'X')
    {

        cout << "----------Winner is Player X----------";

        return 0;
    }
    else if (board[0][1] == board[1][1] == board[2][1] == 'X')
    {

        cout << "----------Winner is Player X----------";

        return 0;
    }
    else if (board[0][2] == board[1][2] && board[2][2] == 'X')
    {

        cout << "----------Winner is Player X----------";

        return 0;
    }
    else if (board[1][0] == board[1][1] == board[1][2] == 'X')
    {

        cout << "----------Winner is Player X----------";

        return 0;
    }
    else if (board[2][0] == board[2][1] == board[2][2] == 'X')
    {

        cout << "----------Winner is Player X----------";
        return 0;
    }
}
int  wo()
{
    if (board[0][0] == board[1][1] == board[2][2] == 'O')
    {
        cout << "----------Winner is Player O----------";
        return 0;
    }

    else if (board[0][0] == board[1][0] == board[2][0] == 'O')
    {

        cout << "----------Winner is Player O----------";
        return 0;
    }

    else if (board[0][1] == board[1][1] == board[2][1] == 'O')
    {

        cout << "----------Winner is Player O----------";
        return 0;
    }

    else if (board[0][2] == board[1][2] == board[2][2] == 'O')
    {

        cout << "----------Winner is Player O----------";
        return 0;
    }

    else if (board[1][0] == board[1][1] == board[1][2] == 'O')
    {

        cout << "----------Winner is Player O----------";
        return 0;
    }

    else if (board[2][0] == board[2][1] == board[2][2] == 'O')
    {

        cout << "----------Winner is Player O----------";
        return 0;
    }
    else
    {
        wx();
    }
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        X();
        O();
        wo();
    }

    return 0;
}