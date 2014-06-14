#ifndef WALL_H
#define WALL_H
#include <stdio.h>
#include <assert.h>

// Include the next line to turn off the routines that use OpenGL
// #define RGBIMAGE_DONT_USE_OPENGL

class Wall
{
public:
    /**
    * @brief Wall::Wall
    * @param x
    * @param y
    * @param z
    * @param width
    * @param height
    * @param orientation if 0 = horizontal, if 1, vertical, if 2, vertical side
    */
    Wall(float x,float y,float z,float width,float height,int orientation);
    //destroy
    ~Wall();
    void draw();

private:
    float x;
    float y;
    float z;
    float width;
    float height;
    float orientation;
};
inline Wall::~Wall()
{
}
#endif // WALL_H