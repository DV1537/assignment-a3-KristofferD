#include <iostream>
#include <fstrean>
#include <string>
#include "SHAPE_H"


/*Todo:
Check calculations on different shapes, do they return correct area?
clean up arrays (delete)
check that all functions are written and functional
*/
void expandArray(float *&arr, int &arrSize);
int main(int argc, const char * argv[])
{
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
  std::ifstream myReadFile;
   if(!validFile(argc, argv, std::ifstream myReadFile){return -1;} //Validate fileformat and that the program got any argv at all if not exit with -1
   else{
     unsigned int arrSize = 3;
     unsigned int nrOfCordinates = 0;
     myReadFile.open(argv[1]);
     float *cordinates = new float[nrOfCordinates];
     float instream = 0.0;
     while(myReadFile >> inStream)
     {
       if(nrOfCordinates >= arrSize){/*Expand arr*/}
       cordinates[nrOfCordinates] = instream;
       nrOfCordinates++;
     }

if(nrOfCordinates == 2) //Point
{
  Shape *myshape = new Shape(cordinates[0], cordinates[1]);
}
else if(nrOfCordinates == 4) // line
{
  Shape *myshape = new Shape(cordinates[0], cordinates[1],cordinates[2],cordinates[3]);
}
else if(nrOfCordinates == 6) // Triangle
{
  Shape *myshape = new Shape(cordinates[0], cordinates[1],cordinates[2],cordinates[3],cordinates[4], cordinates[5]);
}
else if(nrOfCordinates > 6 && nrOfCordinates % 2 == 0) //Polygon
{
Shape *myshape = new Shape(nrOfCordinates, cordinates[]);
}
else{
  delete [] cordinates;
  return -2; //Else invalid nr of cordinates to create any figure and exit program.
}
if(static_cast<int>myShape.area() == myShape.area()
)
printf("%.0f", myShape.area());
else if((myShape.area()*1000)%100){
  printf("%.1", myShape.area());
else if((myShape.area()*1000%10)){
  printf("%.2",myShape.area());
}
  else printf("%.3f", myShape.area());
}

delete [] cordinates;
return 0;
}

void expandArray(float *&arr, int &arrSize){
  float *temp = new float[arrSize+1];
  for(int i = 0; i < arrSize; i++){
    temp[i] = arr[i];
  }
  delete[] arr;
  arr = temp;
  arrSize++;
}
