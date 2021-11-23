#include "render.h"
#include <fstream>
#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    //temp variable
    char userIn;

    char screen[50][50];
    Render rend;

    system("cls");

    fstream mFile("data.txt");
    if(mFile) {
        cout << "Data File Found, Initializing.";

        for (int x = 0; x < 50; x++) {
            for (int y = 0; y < 50; y++) {
                mFile >> screen[x][y];
            }
        }
        mFile.close();
    }
    else {
        cout << "Performing First Time Setup\n";
        mFile.close();
        fstream newFile("data.txt");
        newFile.open("data.txt", ios::out);


        for (int x = 0; x < 50; x++){
            for (int y = 0; y < 50; y++){
                newFile << "o ";
            }
            newFile << "\n";
        }
        newFile.close();
        ifstream existFile;
        existFile.open("data.txt");
        
        for (int x = 0; x < 50; x++) {
            for (int y = 0; y < 50; y++) {
                existFile >> screen[x][y];
            }
        }
        existFile.close();
    }

    system("cls");

    rend.draw(screen);

    cin >> userIn;
    return 0;
}