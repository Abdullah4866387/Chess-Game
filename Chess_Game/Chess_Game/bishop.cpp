#include"master_header.h"

bishop :: bishop(char clr, int pts, coordinates c, string sts, int health) : piece(clr, pts, c, sts, health)
{
    set_color(clr);
    set_points(pts);
    set_coordinates(c);
    set_status(sts);
    set_health(health);
}

bishop :: bishop(bishop &b1) : piece(b1)
{
    b1.set_color(b1.get_color());
    b1.set_points(b1.get_points());
    b1.set_coordinates(b1.get_coordinates());
    b1.set_status(b1.get_status());
    b1.set_health(b1.get_health());
}

void bishop :: move()
{
    cout<<"Bishop"<<endl;
}

void bishop :: set_points(int pts)
{
    if(pts == 3)
    {
        set_points(pts);
    }
}

int bishop :: get_points()
{
    if(get_points() == 3)
    {
        return get_points();
    }
    else
    {
        return 3;
    }
}

//----------------------------------------------------------------------------------------------------------------------