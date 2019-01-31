#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle: public Shape{
public:
  Triangle(float x1, float y1, float x2, float y2, float x3, float y3);
  ~Triange();
  const float area();
  string getType();
  float circumference();
  float position();
  bool isConvex();
  float distance(Shape s);
private:
float vertices[6];
float getCordinates(int cordinate);
float distanceOfPoints(float x1, float x2, float y1, float y2);
}




#endif TRIANGLE_H
