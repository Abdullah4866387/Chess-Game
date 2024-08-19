#include"master_header.h"

king :: king(char clr, int pts, coordinates c, string sts, int health) : piece(clr, pts, c, sts, health)
{
    set_color(clr);
    set_points(pts);
    set_coordinates(c);
    set_status(sts);
    set_health(health);
}

king :: king(king &k1) : piece(k1)
{
    k1.set_color(k1.get_color());
    k1.set_points(k1.get_points());
    k1.set_coordinates(k1.get_coordinates());
    k1.set_status(k1.get_status());
    k1.set_health(k1.get_health());
}

void king :: move()
{
    cout<<"King"<<endl;
}

void king :: set_points(int pts)
{
    if(pts == 0)
    {
        set_points(pts);
    }
}

int king :: get_points()
{
    if(get_points() == 0)
    {
        return get_points();
    }
    else
    {
        return 0;
    }
}

//----------------------------------------------------------------------------------------------------------------------