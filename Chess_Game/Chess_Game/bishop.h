class bishop : public piece
{
    bishop(char clr, int pts, coordinates c, string sts, int health);
    bishop(bishop &b1);
    void move();
    void set_points(int pts);
    int get_points();
};