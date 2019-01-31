#ifndef POLYGON_H
#define POLYGON_H

class Polygon: public Shape{
public:
  Polygon(int nrOfVerticies);
  ~Polygon();
  string getType();
  float area();
  float circumference();
  float position();
  bool isConvex();
  float distance(Shape s);

private:
  int nrOfVerticies;
  float vertices[];
float getCordinates(int cordinate);
float distanceOfPoints(float x1, float x2, float y1, float y2);
};

#endif
