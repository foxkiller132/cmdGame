#ifndef RENDER_H
#define RENDER_H

class Render{
private:

public:
    Render();
    ~Render();
    void draw(char screen[100][50]);
    void setCursorPosition(int x, int y);
    char updateScreen(char **map);
};

#endif
