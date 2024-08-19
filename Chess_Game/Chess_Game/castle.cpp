#include"master_header.h"

castle :: castle(char clr, int pts, coordinates c, string sts, int health) : piece(clr, pts, c, sts, health)
{
    set_color(clr);
    set_points(pts);
    set_coordinates(c);
    set_status(sts);
    set_health(health);
}

castle :: castle(castle &c1) : piece(c1)
{
    c1.set_color(c1.get_color());
    c1.set_points(c1.get_points());
    c1.set_coordinates(c1.get_coordinates());
    c1.set_status(c1.get_status());
    c1.set_health(c1.get_health());
}

void castle :: move()
{
    cout<<"Castle"<<endl;
}

void castle :: set_points(int pts)
{
    if(pts == 5)
    {
        set_points(pts);
    }
}

int castle :: get_points()
{
    if(get_points() == 5)
    {
        return get_points();
    }
    else
    {
        return 5;
    }
}

//----------------------------------------------------------------------------------------------------------------------

