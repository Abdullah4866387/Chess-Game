#include"master_header.h"

using namespace std;

int main()
{
    piece* black[16];
    piece* white[16];
    
    char clr = 'B';
    int pts = 3;
    struct coordinates c1;
    c1.row = 1;
    c1.column = 'c';
    string sts = "passive";
    int h = 100;

    piece(clr, pts, c1, sts, h);

    struct coordinates a1;
    c1.row = 1;
    c1.column = 'a';

    struct coordinates a2;
    c1.row = 2;
    c1.column = 'a';

    struct coordinates b1;
    c1.row = 1;
    c1.column = 'b';

    struct coordinates b2;
    c1.row = 2;
    c1.column = 'b';

    struct coordinates c1;
    c1.row = 1;
    c1.column = 'c';

    struct coordinates c2;
    c1.row = 2;
    c1.column = 'c';

    struct coordinates d1;
    c1.row = 1;
    c1.column = 'd';

    struct coordinates d2;
    c1.row = 2;
    c1.column = 'd';

    struct coordinates e1;
    c1.row = 1;
    c1.column = 'e';

    struct coordinates e2;
    c1.row = 2;
    c1.column = 'e';

    struct coordinates f1;
    c1.row = 1;
    c1.column = 'f';

    struct coordinates f2;
    c1.row = 2;
    c1.column = 'f';

    struct coordinates g1;
    c1.row = 1;
    c1.column = 'g';

    struct coordinates g2;
    c1.row = 2;
    c1.column = 'g';

    struct coordinates h1;
    c1.row = 1;
    c1.column = 'h';

    struct coordinates h2;
    c1.row = 2;
    c1.column = 'h';

    struct coordinates a7;
    c1.row = 7;
    c1.column = 'a';

    struct coordinates a8;
    c1.row = 8;
    c1.column = 'a';

    struct coordinates b7;
    c1.row = 7;
    c1.column = 'b';

    struct coordinates b8;
    c1.row = 8;
    c1.column = 'b';

    struct coordinates c7;
    c1.row = 7;
    c1.column = 'c';

    struct coordinates c8;
    c1.row = 8;
    c1.column = 'c';

    struct coordinates d7;
    c1.row = 7;
    c1.column = 'd';

    struct coordinates d8;
    c1.row = 8;
    c1.column = 'd';

    struct coordinates e7;
    c1.row = 7;
    c1.column = 'e';

    struct coordinates e8;
    c1.row = 8;
    c1.column = 'e';

    struct coordinates f7;
    c1.row = 7;
    c1.column = 'f';

    struct coordinates f8;
    c1.row = 8;
    c1.column = 'f';

    struct coordinates g7;
    c1.row = 7;
    c1.column = 'g';

    struct coordinates g8;
    c1.row = 8;
    c1.column = 'g';

    struct coordinates h7;
    c1.row = 7;
    c1.column = 'h';

    struct coordinates h8;
    c1.row = 8;
    c1.column = 'h';

    pawn(clr, pts, a2, sts, h);
    pawn(clr, pts, b2, sts, h);
    pawn(clr, pts, c2, sts, h);
    pawn(clr, pts, d2, sts, h);
    pawn(clr, pts, e2, sts, h);
    pawn(clr, pts, f2, sts, h);
    pawn(clr, pts, g2, sts, h);
    pawn(clr, pts, h2, sts, h);
    pawn(clr, pts, a7, sts, h);
    pawn(clr, pts, b7, sts, h);
    pawn(clr, pts, c7, sts, h);
    pawn(clr, pts, d7, sts, h);
    pawn(clr, pts, e7, sts, h);
    pawn(clr, pts, f7, sts, h);
    pawn(clr, pts, g7, sts, h);
    pawn(clr, pts, h7, sts, h);

    king(clr, pts, d1, sts, h);
    king(clr, pts, d8, sts, h);

    queen(clr, pts, e1, sts, h);
    queen(clr, pts, e8, sts, h);

    bishop(clr, pts, c1, sts, h);
    bishop(clr, pts, c8, sts, h);
    bishop(clr, pts, f1, sts, h);
    bishop(clr, pts, f8, sts, h);

    knight(clr, pts, b1, sts, h);
    knight(clr, pts, b8, sts, h);
    knight(clr, pts, g1, sts, h);
    knight(clr, pts, g8, sts, h);

    castle(clr, pts, a1, sts, h);
    castle(clr, pts, a8, sts, h);
    castle(clr, pts, h1, sts, h);
    castle(clr, pts, h8, sts, h);

    return 0;
}