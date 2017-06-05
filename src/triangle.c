#include "triangle.h"

char *sortSidesforValidTriangle (int a , int b , int c , 
                        int *shortSide1,
                        int *shortSide2,
                        int *longSide){
 
 if (a>b && a>c)
 {
   *longSide = a;
   *shortSide1 = b;
   *shortSide2 = c;
   }
   else if (b>a && b>c){
     *shortSide1 = a;
     *longSide = b;
     *shortSide2 = c ;
   }
   else if (c>a && c>b){
     *shortSide1 = a;
     *shortSide2 = b;
     *longSide = c;
   }
                        }
   
char *Validity(int a,int b,int c){
  int ss1,ss2,ls;
  sortSidesforValidTriangle(a , b , c,&ss1,&ss2,&ls);
  if(ss1<0||ss2<0||ls<0)
  {
    return "invalid";
  }
    else if (ss1+ss2<ls)
    {
      return "invalid";
    }
    else 
    {
      return "valid";
      return TriangleType(ss1,ss2,ls);
    }
}


char  *TriangleType(int a , int b , int c ){
  
  if ((a*a+b*b) > c*c)
  {
    if (a==b)
    {
      return "isosceles";
    }
    else
    return "obtuse";
  }
  else if ((a*a+b*b)<c*c)
  {
    return "acute";
  } 
else if ((a*a+b*b)== c*c)
  {
     return "right-angled" ;
  }

}

     
    
