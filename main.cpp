#include "render.h"
#include "initialize.h"
#include <fstream>
#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    //temp variable
    char userIn;

    char screen[100][50];
    int characterPos[2];

    //class objects
    Render rend;
    Initialize innit;

    innit.OnOpen(screen);
    rend.draw(screen);

    cin >> userIn;
    return 0;
}
