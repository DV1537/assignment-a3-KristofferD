#ifndef LINE_H
#define LINE_H

class Line: public Shape{
public:
  Line();
  ~Line();
  string getType();
  float area();
  float circumference();
  float position();
  bool isConvex();
  float distance(Shape s);
private:
  float vertices[6];
  float getCordinates(int cordinate);
  float distanceOfPoints(float x1, float x2, float y1, float y2);
}




#endif
