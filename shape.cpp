#include "SHAPE_H"

Shape(){
};
virtual ~Shape(){};

virtual string getType() = 0;
string area();
float circumference();
float position();
bool isConvex();
float distance(Shape s);
Shape operator=(const &Shape other){
  if(this == other){
    return *this;
  }
  else{
  nrOfCordinates = other.nrOfCordinates;
  delete[] this.vertices;
  *this.vertices = nullptr;
  *this.vertices = new float[nrOfVerticies];
for(int i = 0; i < nrOfVerticies; i++){
  *this.vertices[i] = other.vertices[i];
}
  return *this;
}
Shape operator<<(){
string s = "x\ty\n";
for(int i = 0; i < this.nrOfvertices; i+= 2){
  s += to_string(this.vertices[i]) + "\t" + to_string(this.vertices[i+1]) + "\n";
}
  return s;
}
