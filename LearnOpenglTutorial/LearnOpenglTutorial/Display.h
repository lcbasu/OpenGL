#pragma once
#include <string>

using namespace std;

class Display
{
public:
    Display(int width, int height, const string& title);
    virtual ~Display();
};

