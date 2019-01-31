#ifndef POINT_H
#define POINT_H

class Point: public Shape {
  public:
    Point(int x1, int y1);
    float area() const;
    string getType() const;
    float circumference() const;
    float position() const;
    bool isConvex() const;
    float distance(Shape s) const;
  private:
  int vertices[2];
#endif;
