#include "LINE_H"
#include <string>
#include <cmath>

Line(){
  this->float vertices[4];
}
~Line();
string getType(){return "Line";};
float area(){return -1;};
float circumference(){return -1;};
string position(){
  float x = (vertices[0] + vertices[2])/2.0;
  float y = (vertices[1] + vertices[3])/2.0;
  string xAndY = to_string(x) + " " + to_string(y);
  return xAndY;
};
bool isConvex(){

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
};


float getCordinates(int cordinate){
  return vertices[cordinate];
};


float distanceOfPoints(float x1, float x2, float y1, float y2){
  float x std::abs(x1 - x2));
  x *= x; //x = pow(x, 2);
  float y = std::abs(y1 - y2);
  y *= y; //y = pow(y, 2);
  float distance = sqrt(x + y);
    return distance;
};
