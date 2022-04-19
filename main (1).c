#include <stdio.h>
#include <math.h>


int main()
{
  float x;
  float y;
  char sign;
  float result;

  scanf("%f %c %f", &x,&sign,&y);

  switch(sign)
    {
    case '/': result = x/y;
      break;
    case '*': result=x*y;
      break;
    case '+': result=x+y;
      break;
    case '-': result = x-y;
      break;
    case '^': result = pow(x,y);
      break;
    case 'r': result = sqrt(x);
      break;
    default: printf("Invalid Input");
    }
 printf("Result is = %.2f",result);
 return 0;
}