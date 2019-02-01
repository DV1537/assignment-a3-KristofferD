#include <cmath>
#include <string>
#include "point.h"
#include "shape.h"


  Point::Point(float x, float y){
    
  this->verticies[0] = x;
  this->verticies[1] = y;
  };
  

  float Point::area() const
  {
    return -1.0;
  };


  string Point::getType()
  {
	  return "Point";
  };


  float Point::circumference()const {
    return -1;
  };

  string Point::position() const{
	  string p = to_string(verticies[0]) + ' ' + to_string(verticies[1]);
    return p;
  };


  bool Point::isConvex()const {
    return false;
  };


float Point::distance(Shape *s)const{
std::string tempCenter = s->position();
std::string::size_type sz;
float x = std::stof (tempCenter,&sz);
float y = std::stof (tempCenter.substr(sz));
x = fmax(x,verticies[0]) - fmin(x,verticies[0]);
x *= x; //x = pow(x, 2);
y = fmax(y,verticies[1]) - fmin(y,verticies[1]);
y *= y; //y = pow(y, 2);
float distance = x + y;
distance = sqrt(distance);
  return distance;
}
Point::~Point()
{
};
