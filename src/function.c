#include<function.h>

double perimeter_of_triangle(double a, double b, double c)
{
	double perimeter;
	
	perimeter = (a+b+c);
	
	return perimeter;
}

double area_of_triangle(double a, double b, double c)
{
  double s, area;

  s = (a+b+c)/2;

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  return area;
}

int TypeOfTriangle(double a, double b, double c)
{
    if(a<=0||b<=0||c<=0)
    {
	    return -1;
    } 
    
    if(!(a+b>c && b+c>a && a+c>b))
    {
	    return 0;
    }
    
    else if(a==b && b==c)
    {
       return 1;
    }
    
    else if(a==b || b==c || c==a)
    {
       return 2;
    }
    
    else if((a*a==(b*b)+(c*c)) || (b*b==(a*a)+(c*c)) || (c*c==(a*a)+(b*b)))
    {
       return 3;
    }
    
    else
    {
    	return 4;
	}
    
}
