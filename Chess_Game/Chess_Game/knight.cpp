#include"master_header.h"

knight :: knight(char clr, int pts, coordinates c, string sts, int health) : piece(clr, pts, c, sts, health)
{
    set_color(clr);
    set_points(pts);
    set_coordinates(c);
    set_status(sts);
    set_health(health);
}

knight :: knight(knight &kn1) : piece(kn1)
{
    kn1.set_color(kn1.get_color());
    kn1.set_points(kn1.get_points());
    kn1.set_coordinates(kn1.get_coordinates());
    kn1.set_status(kn1.get_status());
    kn1.set_health(kn1.get_health());
}

void knight :: move()
{
    cout<<"Knight"<<endl;
}

void knight :: set_points(int pts)
{
    if(pts == 3)
    {
        set_points(pts);
    }
}

int knight :: get_points()
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

