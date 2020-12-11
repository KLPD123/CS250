#ifndef REFEREE_H_INCLUDED
#define REFEREE_H_INCLUDED

///player's scores
    extern int lScore;
    extern int nScore;
///for the while loop to continue
    extern int y;
///die roll
    extern int roll;
///if the player wants to roll again on an edge space
    extern char yesOrNo;

    int endTheGame();
    void dieRollL();
    void dieRollN();

    void pieceMovementL();
    void pieceMovementN();


#endif // REFEREE_H_INCLUDED
