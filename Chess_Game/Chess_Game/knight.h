class knight : public piece
{
    knight(char clr, int pts, coordinates c, string sts, int health);
    knight(knight &kn1);
    void move();
    void set_points(int pts);
    int get_points();
};