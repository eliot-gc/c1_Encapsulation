#include "Point.h"

Point::Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

std::string Point::ToString() {
    std::stringstream stream;
    
    stream << "Point: x: " << x << ", y: " << y << ", z: " << z << std::endl;
    
    return stream.str();
}