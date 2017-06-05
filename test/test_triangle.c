#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}



void test_validity_of_triangle(void)
{
  TEST_ASSERT_EQUAL_STRING ("valid",Validity(3,4,5));
}

void test_Type_of_triangle_Right_angled(void){
  
  TEST_ASSERT_EQUAL_STRING ("right-angled",TriangleType(3,4,5));
          printf("crct");
  
}
void test_Type_of_triangle_Obtuse(void){
  
  TEST_ASSERT_EQUAL_STRING ("obtuse",TriangleType(3,4,4));
          printf("crct2");
  
}
void test_Type_of_triangle_acute(void){
  
  TEST_ASSERT_EQUAL_STRING ("acute",TriangleType(3,3,5));
          printf("crct3");
  
}
void test_Type_of_triangle_isosceles(void){
  
  TEST_ASSERT_EQUAL_STRING ("isosceles",TriangleType(4,4,5));
          printf("crct4");
  
}



