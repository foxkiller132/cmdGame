#ifndef RENDER_H
#define RENDER_H

class Render{
private:

public:
    Render();
    ~Render();
    void draw(char map[50][50]);
    void setCursorPosition(int x, int y);
    char updateScreen(char **map);
};

#endif