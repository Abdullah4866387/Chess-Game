class king : public piece
{
    king(char clr, int pts, coordinates c, string sts, int health);
    king(king &k1);
    void move();
    void set_points(int pts);
    int get_points();
};