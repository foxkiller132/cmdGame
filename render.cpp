#include "render.h"
#include <windows.h>
#include <iostream>
using namespace std;

Render::Render(){
}

Render::~Render(){
}

void Render::draw(char screen[100][50]){
    for (int y = 0; y < 50; y++){
        for (int x = 0; x < 100; x++){
            cout << screen[x][y] << " ";
        }
        cout << endl;
    }
}

void Render::setCursorPosition(int x, int y)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}

char Render::updateScreen(char **map) {

    return **map;
}
