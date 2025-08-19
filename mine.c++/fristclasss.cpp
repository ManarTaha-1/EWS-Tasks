#include <iostream>
#include "class.h"
int main()
{
    car c1;
    c1.setmaker("Honda");
    c1.setmodel(2022);
    cout <<"The car maker is" <<c1.getmaker() << endl<< "The car model is " << c1.getmodel();
}