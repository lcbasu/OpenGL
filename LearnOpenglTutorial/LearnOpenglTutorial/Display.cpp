#include "Display.h"
#include <iostream>

Display::Display(int width, int height, const string & title)
{
    cout << "Constructor" << endl;
}

Display::~Display()
{
    cout << "Destructor" << endl;

    system("pause");
}
