/*
Welcome to Patolli! Most of the comments for this code lies within game piece 'A' because all eleven other game pieces were copy-pasted from 'A'
and work the exact same. The code is very length because I programmed every possible move (space 1 to space 2, space 1 to space 3, etc.) for every game piece.
This was probably not the way to complete this assignment that was expected, but the game works perfectly nonetheless. Enjoy!
*/

///HIGHLIGHTS///
/*
-The game board is made out of 33 arrays with 33 characters.
-All 6 letter pieces act the exact same and all 6 number pieces act the exact same. This is due to copy-pasting.
-Player L always goes first and player N always goes second. It is up to the players to decide who goes first (plays as player L).
-I wrote all the code for A first, then copy-pasted it for B, C, D, E, and F. I changed the A's to the respective letter for each piece.
-For the numbers, I also copy-pasted A for those, but I started the copy at the number's starting location and looped it back around so they move properly.
-I had to write more code for two unused spaces in the letter's possible moves and remove two spaces that are now unused (because the letters will never
appear on their final space and the one after it, the numbers will also never appear on their final space or the one after it).
-If the player lands on an edge space, it asks if they want to roll again and they must take the new roll if they agree to a re-roll.
-If the player lands on one of the center four squares, they are vulnerable to being overwritten by the opponent but not by their other pieces.
-If the player tries to put down a game piece that has already reached the end, the game will not let them and ask them for a valid one (if they
try to put down a different piece which has also already made it to the end, it will get placed down HOWEVER it will be unable to move, essentially wasting their
turn as punishment for trying to do an illegal move, of course they can put down a new piece their next turn).
-A player can never overwrite one of their own pieces, unless they choose to put down a different piece immediately after they already put one down on the starting space.
Changing the letter or number would be a pointless move however because all pieces are worth one point upon landing on the final space, but it can be done if the player wants.
-First player to 6 points wins and the game terminates upon a victor.
*/

#include <iostream>
///for generating a random number
#include <cstdlib>
#include <ctime>
#include "player.h"
#include "board.h"
#include "referee.h"

using namespace std;

int main()
{
    ///while the game does not have a victor, keep playing the game alternating between turns
    while(y)
    {
        ///player L's turn
        gameBoard();

        endTheGame();

        dieRollL();

        pick.setSelectionL(cin);

        wrongGamePieceL();

        ///every possible die roll for all spaces with the letter game pieces
        pieceMovementL();

        ///player N's turn
        gameBoard();

        endTheGame();

        dieRollN();

        pick.setSelectionN(cin);

        wrongGamePieceN();

        ///all possible moves for the number game pieces
        pieceMovementN();
    }
    return 0;
}
