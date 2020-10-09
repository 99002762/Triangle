#include<function.h>

int main()
{
  double a, b, c, area=0, perimeter=0;
  
  int typeoftriangle=0;

  printf("Enter the lengths of sides of a triangle\n");

  scanf("%lf%lf%lf", &a, &b, &c);
  
  printf("\n");
  
  perimeter = perimeter_of_triangle(a, b, c);
  
   printf("Perimeter of the triangle = %.2lf\n", perimeter);
   
   printf("\n");

  area = area_of_triangle(a, b, c);

  printf("Area of the triangle = %.2lf\n", area);
  
  printf("\n");
  
  typeoftriangle=TypeOfTriangle(a,  b, c);
  
  if(typeoftriangle<=0)
  {
  	printf("Triangle not constructed with given lengths");
  	
  	printf("\n");
  }
  
  if(typeoftriangle==1)
  {
  	printf("Triangle is Equilateral");
  	
  	printf("\n");	
  }
  
  if(typeoftriangle==2)
  {
  	printf("Triangle is Isosceles ");
  	
  	printf("\n");
  }
  
  if(typeoftriangle==3)
  {
  	printf("Triangle is Right Angled ");
  	
  	printf("\n");
  }
  
  if(typeoftriangle==4)
  {
  	printf("Triangle is Scalene");
  	
  	printf("\n");
  }
  
  return 0;
}
