#ifndef POINT_H__
#define POINT_H__

#include <string>
#include <sstream>

class Point {
public:
    float x;
    float y;
    float z;
    
    Point(float _x, float  _y, float _z);
    
    std::string ToString();
};

#endif
