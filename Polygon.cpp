#include "POLYGON_H"
Polygon(int nrOfVerticies){
  this->float* vertices = new float[nrOfVerticies*2];
};
~Polygon();
string getType(){
  return "Polygon";
};
float area(){
  float area = 0.0;
  int i = 0;
  while(i < nrOfPoints*2)
      area += vertices[i]*vertices[i+2]+vertices[i+1]*vertices[i+3];
    i+= 2;
  }
area += vertices[i]*vertices[1]+vertices[i+1]*vertices[0];
area /= 2.0;
return area; //Will be false if the polygon is self intersecting.
};
float circumference(){
int i = 0;
float circ = 0.0;
while(i < nrOfPoints){
  circ += distancePoints(vertices[i], vertices[i+2], vertices[i+1], vertices[i+3]);
  i+2;
}
  circ += distancePoints(vertices[i], vertices[0], vertices[i+1], vertices[1]);
  return circ;
};


float position();
float minY = vertices[1];
float maxY = vertices[1];
float minX = vertices[0];
float maxX = vertices[0]
for(int i = 2; i < nrOfPoints; i + 2;)
{
  if(minY > vertices[i+1]){minY = vertices[i+1];}
  else if(maxY < vertices[i+1]){maxY = vertices[i+1];}

  if (minX > vertices[i]){minX = vertices[i];}
  else if(maxX < vertices[i]{maxX = vertices[i];}
  }
float centerX = minX +((maxX - minX)/2.0);
float centerY = minY +((maxY - minY)/2.0);
string center = to_string(centerX) + "" + to_string(centerY);
}

bool isConvex(){ //https://stackoverflow.com/questions/471962/how-do-i-efficiently-determine-if-a-polygon-is-convex-non-convex-or-complex
  //False positive if self-intersecting.
  if (vertices.size() < 4)
         return true;

     bool sign = false;

     for(int i = 0; i < n; i++)
     {
         float dx1 = vertices(i);
         float dy1 = vertices(i +1);
         float dx2 = vertices(i+2);
         float dy2 = vertices(i+3);
         float zcrossproduct = dx1 * dy2 - dy1 * dx2;

         if (i == 0)
             sign = zcrossproduct > 0;
         else if (sign != (zcrossproduct > 0))
             return false;
     }
 }
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
