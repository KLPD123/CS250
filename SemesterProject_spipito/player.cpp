#include <iostream>
#include "player.h"
using namespace std;

///when a game piece reaches the end, it becomes invalid
///to use again by being set to '1'
    bool deadA = 0;
    bool deadB = 0;
    bool deadC = 0;
    bool deadD = 0;
    bool deadE = 0;
    bool deadF = 0;
    bool dead1 = 0;
    bool dead2 = 0;
    bool dead3 = 0;
    bool dead4 = 0;
    bool dead5 = 0;
    bool dead6 = 0;

    Selection pick;

void wrongGamePieceL()
{
    ///if the user tries to place a game piece which has already reached the end, ask for a different game piece
        if (pick.getSelectionL() == 'A' || pick.getSelectionL() == 'a')
        {
            if (deadA == 1)
            {
                while (pick.getSelectionL() == 'A' || pick.getSelectionL() == 'a')
                {
                cout << "Piece A has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionL(cin);
                }
            }
        }
        else if (pick.getSelectionL() == 'B' || pick.getSelectionL() == 'b')
        {
            if (deadB == 1)
            {
                while (pick.getSelectionL() == 'B' || pick.getSelectionL() == 'b')
                {
                cout << "Piece B has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionL(cin);
                }
            }
        }
        else if (pick.getSelectionL() == 'C' || pick.getSelectionL() == 'c')
        {
            if (deadC == 1)
            {
                while (pick.getSelectionL() == 'C' || pick.getSelectionL() == 'c')
                {
                cout << "Piece C has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionL(cin);
                }
            }
        }
        else if (pick.getSelectionL() == 'D' || pick.getSelectionL() == 'd')
        {
            if (deadD == 1)
            {
                while (pick.getSelectionL() == 'D' || pick.getSelectionL() == 'd')
                {
                cout << "Piece D has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionL(cin);
                }
            }
        }
        else if (pick.getSelectionL() == 'E' || pick.getSelectionL() == 'e')
        {
            if (deadE == 1)
            {
                while (pick.getSelectionL() == 'E' || pick.getSelectionL() == 'e')
                {
                cout << "Piece E has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionL(cin);
                }
            }
        }
        else if (pick.getSelectionL() == 'F' || pick.getSelectionL() == 'f')
        {
            if (deadF == 1)
            {
                while (pick.getSelectionL() == 'F' || pick.getSelectionL() == 'f')
                {
                cout << "Piece F has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionL(cin);
                }
            }
        }

        ///if the player doesn't select a valid character
        while (pick.getSelectionL() != 'A' && pick.getSelectionL() != 'a' && pick.getSelectionL() != 'B' && pick.getSelectionL() != 'b' && pick.getSelectionL() != 'C' && pick.getSelectionL() != 'c' && pick.getSelectionL() != 'D'
         && pick.getSelectionL() != 'd' && pick.getSelectionL() != 'E' && pick.getSelectionL() != 'e' && pick.getSelectionL() != 'F' && pick.getSelectionL() != 'f' && pick.getSelectionL() != 'P' && pick.getSelectionL() != 'p')
        {
            cout << "Please enter a valid character: ";
            pick.setSelectionL(cin);
        }
}
void wrongGamePieceN()
{
    ///if the user tries to place a game piece which has already reached the end, ask for a different game piece
        if (pick.getSelectionN() == '1')
        {
            if (dead1 == 1)
            {
                while (pick.getSelectionN() == '1')
                {
                cout << "Piece 1 has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionN(cin);
                }
            }
        }
        else if (pick.getSelectionN() == '2')
        {
            if (dead2 == 1)
            {
                while (pick.getSelectionN() == '2')
                {
                cout << "Piece 2 has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionN(cin);
                }
            }
        }
        else if (pick.getSelectionN() == '3')
        {
            if (dead3 == 1)
            {
                while (pick.getSelectionN() == '3')
                {
                cout << "Piece 3 has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionN(cin);
                }
            }
        }
        else if (pick.getSelectionN() == '4')
        {
            if (dead4 == 1)
            {
                while (pick.getSelectionN() == '4')
                {
                cout << "Piece 4 has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionN(cin);
                }
            }
        }
        else if (pick.getSelectionN() == '5')
        {
            if (dead5 == 1)
            {
                while (pick.getSelectionN() == '5')
                {
                cout << "Piece 5 has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionN(cin);
                }
            }
        }
        else if (pick.getSelectionN() == '6')
        {
            if (dead6 == 1)
            {
                while (pick.getSelectionN() == '6')
                {
                cout << "Piece 6 has already made it to the end of the board. Please select a game piece which hasn't" << endl;
                pick.setSelectionN(cin);
                }
            }
        }

        ///prevents the player from input outside the scope
        while (pick.getSelectionN() != '1' && pick.getSelectionN() != '2' && pick.getSelectionN() != '3' && pick.getSelectionN() != '4' && pick.getSelectionN() != '5' && pick.getSelectionN() != '6' && pick.getSelectionN() != 'P' && pick.getSelectionN() != 'p')
        {
            cout << "Please enter a valid character: ";
            pick.setSelectionN(cin);
        }
}
