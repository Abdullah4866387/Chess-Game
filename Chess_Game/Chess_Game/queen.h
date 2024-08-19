class queen : public piece
{
    queen(char clr, int pts, coordinates c, string sts, int health);
    queen(queen &q1);
    void move();
    void set_points(int pts);
    int get_points();
};