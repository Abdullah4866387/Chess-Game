#include"master_header.h"

using namespace std;

class piece
{
    private:

    char color;
    int points;
    struct coordinates cord;
    string status;
    int health;

    public:

    piece(char c, int p, coordinates c1, string s, int h);
    piece(piece &p1);

    void set_color(char clr);
    char get_color();

    void set_points(int pts);
    int get_points();

    void set_coordinates(coordinates c);
    coordinates get_coordinates();

    void set_status(string sts);
    string get_status();

    void set_health(int h);
    int get_health();

    void move();
    
};

struct coordinates
{
    int row;
    char column;
};