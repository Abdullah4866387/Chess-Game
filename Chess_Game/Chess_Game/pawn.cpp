#include"master_header.h"

pawn :: pawn(char clr, int pts, coordinates c, string sts, int health) : piece(clr, pts, c, sts, health)
{
    set_color(clr);
    set_points(pts);
    set_coordinates(c);
    set_status(sts);
    set_health(health);
}

pawn :: pawn(pawn &p1) : piece(p1)
{
    p1.set_color(p1.get_color());
    p1.set_points(p1.get_points());
    p1.set_coordinates(p1.get_coordinates());
    p1.set_status(p1.get_status());
    p1.set_health(p1.get_health());
}

void pawn :: move()
{
    cout<<"Pawn"<<endl;
}

void pawn :: set_points(int pts)
{
    if(pts == 1)
    {
        set_points(pts);
    }
}

int pawn :: get_points()
{
    if(get_points() == 1)
    {
        return get_points();
    }
    else
    {
        return 1;
    }
}

//----------------------------------------------------------------------------------------------------------------------



