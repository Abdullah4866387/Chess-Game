#include"master_header.h"

piece :: piece(char clr, int pts, coordinates c, string sts, int h)
{
    color = clr;
    points = pts;
    cord = c;
    status = sts;
    health = h;
}

piece :: piece(piece &p1)
{
    color = p1.color;
    points = p1.points;
    cord = p1.cord;
    status = p1.status;
    health = p1.health;
}

void piece :: set_color(char clr)
{
    if(clr == 'W' || clr == 'w' || clr == 'B' || clr == 'b')
    {
        color = clr;
    }
}
char piece :: get_color()
{
    return color;
}

void piece :: set_points(int pts)
{
    if(pts == 0 || pts == 1 || pts == 3 || pts == 5 || pts == 9)
    {
        points = pts;
    }
}
int piece :: get_points()
{
    if(points == 0 || points == 1 || points == 3 || points == 5 || points == 9)
    {
        return points;
    }
}

void piece :: set_coordinates(coordinates c)
{
    if(c.column >= 1 && c.column <= 8)
    {
        cord.column = c.column;
        if(c.row >= 'A' && c.row <= 'H' || c.row >= 'a' && c.row <= 'h')
        {
            cord.row = c.row;
        }
    }

}
coordinates piece :: get_coordinates()
{
    if(cord.column >= 1 && cord.column <= 8)
    {
        if(cord.row >= 'A' && cord.row <= 'H' || cord.row >= 'a' && cord.row <= 'h')
        {
            return cord;
        }
    }
}

void piece :: set_status(string sts)
{
    if(sts == "passive" || sts == "underattack" || sts == "readytoattack")
    {
        status = sts;
    }
}
string piece :: get_status()
{
    return status;
}

void piece :: set_health(int h)
{
    health = h;
}
int piece :: get_health()
{
    return health;
}

void move()
{
    cout << "Me nahi jau ga..." << endl;
}

//----------------------------------------------------------------------------------------------------------------------
