class castle : public piece
{
    castle(char clr, int pts, coordinates c, string sts, int health);
    castle(castle &c1);
    void move();
    void set_points(int pts);
    int get_points();
};