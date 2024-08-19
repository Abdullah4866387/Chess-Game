class pawn : public piece
{
    pawn(char clr, int pts, coordinates c, string sts, int health);
    pawn(pawn &p1);
    void move();
    void set_points(int pts);
    int get_points();
};