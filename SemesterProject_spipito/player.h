#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

///reads if the player wants to move, pass, etc.
class Selection
{
private:

    char selectionL;
    char selectionN;
public:

    inline int getSelectionL()
    {
        return selectionL;
    }
    inline int getSelectionN()
    {
        return selectionN;
    }
    inline void setSelectionL(std::istream& in)
    {
        std::cin.get(selectionL);
    }
    inline void setSelectionN(std::istream& in)
    {
        std::cin.get(selectionN);
    }

};

    extern Selection pick;

///when a game piece reaches the end, it becomes invalid
///to use again by being set to '1'
    extern bool deadA;
    extern bool deadB;
    extern bool deadC;
    extern bool deadD;
    extern bool deadE;
    extern bool deadF;
    extern bool dead1;
    extern bool dead2;
    extern bool dead3;
    extern bool dead4;
    extern bool dead5;
    extern bool dead6;

    void wrongGamePieceL();
    void wrongGamePieceN();

#endif // PLAYER_H_INCLUDED
