#ifndef SHAPE_H
#define SHAPE_H

class Shape{
public:
  Shape();
  ~Shape();
  virtual string getType() = 0;
  float area();
  float circumference();
  float position();
  bool isConvex();
  float distance(Shape s);
private:
  float distanceOfPoints(float x1, float x2, float y1, float y2);
};


#endif
