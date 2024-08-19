#include"master_header.h"

queen :: queen(char clr, int pts, coordinates c, string sts, int health) : piece(clr,pts,c,sts,health)
{
    set_color(clr);
    set_points(pts);
    set_coordinates(c);
    set_status(sts);
    set_health(health);
}

queen :: queen(queen &q1) : piece(q1)
{
    q1.set_color(q1.get_color());
    q1.set_points(q1.get_points());
    q1.set_coordinates(q1.get_coordinates());
    q1.set_status(q1.get_status());
    q1.set_health(q1.get_health());
}

void queen :: move()
{
    cout<<"Queen"<<endl;
}

void queen :: set_points(int pts)
{
    if(pts == 9)
    {
        set_points(pts);
    }
}

int queen :: get_points()
{
    if(get_points() == 9)
    {
        return get_points();
    }
    else
    {
        return 9;
    }
}

//----------------------------------------------------------------------------------------------------------------------

