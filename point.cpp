#include <cmath>
#include <string>
#include "POINT_H"



  Point(float x, float y){
    float vertices[2];
  this->vertices[0] = x;
  this->vertices[1] = y;
};


  float area(){
    return -1.0;
  };


  string getType()const{
    return "Point"};


  float circumference()const {
    return -1;
  };


  string position(){
    string p = to_string(vertices[0]) + ' ' + to_string(vertices[1];)
    return p;
  };


  bool isConvex()const {
    return false;
  };


float distance(Shape s){
std::string tempCenter = s.position();
std::string::size_type sz;
float x = std::stof (tempCenter,&sz);
float y = std::stof (tempcenter.substr(sz));
x = fmax(x,vertices[0]) - fmin(x,vertices[0]);
x *= x; //x = pow(x, 2);
y = fmax(y,vertices[1]) - fmin(y,vertices[1]);
y *= y; //y = pow(y, 2);
float distance = x + y;
distance = sqrt(distance);
  return distance;
}
