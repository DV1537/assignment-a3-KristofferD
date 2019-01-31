#include "TRIANGLE_H"
#include <cmath>

Triangle(float x1, float y1, float x2, float y2, float x3, float y3){
this->float vertices[6] = {x1, y1, x2, y2, x3, y3};
};

~Triange(){};

float area() const{
//Heron's formula
float a, b, c, s;
a=distanceOfPoints(vertices[0], vertices[2], vertices[1],vertices[3]);
b=distanceOfPoints(vertices[2], vertices[4], vertices[3],vertices[5]);
c=distanceOfPoints(vertices[0], vertices[4], vertices[1],vertices[5]);
s=(a+b+c)/2.0;

return std::abs(std::sqrt((s*(s-a)*s-b)*s-c))));;
};


string getType() const {return "Triangle";};
float distanceOfPoints(float x1, float x2, float y1, float y2) const{
  float x std::abs(x1 - x2));
  x *= x; //x = pow(x, 2);
  float y = std::abs(y1 - y2);
  y *= y; //y = pow(y, 2);
  float distance = sqrt(x + y);
    return distance;
};

float circumference() const{
  float circ = 0.0;
for int i = 0; i < 5;i+=2)
{
if (i == 5){
  circ += distanceOfPoints(cords[4], cords[0], cords[5], cords[1]);
    }
else
  circ += distancePoints(cords[i], cords[i+2], cords[i+1], cords[i+3];)
  }
};

string position() const{
  float x = (cords[0] + cords[2] + cords[4])/3.0;
  float y = (cords[1] + cords[3] + cords[5])/3.0;
  string xAndY = to_string(x) + " " + to_string(y);
  return xAndY;
};

bool isConvex() const{

};

float distance(Shape s) const{
  std::string tempCenter = s.position();
  std::string::size_type sz;
  float x = std::stof (tempCenter,&sz);
  float y = std::stof (tempcenter.substr(sz));
  x = fmax(x,cords[0]) - fmin(x,cords[0]);
  x *= x; //x = pow(x, 2);
  y = fmax(y,cords[1]) - fmin(y,cords[1]);
  y *= y; //y = pow(y, 2);
  float distance = x + y;
  distance = sqrt(distance);
    return distance;
};

float getCordinates(int cordinate) const {return cords[cordinate];}
