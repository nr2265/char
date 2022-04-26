#include <stdio.h>
#include <math.h>

int mainc()
{
    int x,y,choice,res;float result;char sign;
    printf("Enter 2 numbers \n");
    scanf("%d %d",&x,&y);
    printf("Enter 1 if you want to use arithematic operators,2 if you want relational,3 if you want bitwise and 4 if you want to use ternary opertor\n");
    scanf("%d",&choice);
    switch(choice)
     {
         case 1 : printf("Enter sign you want to use\n");
                  scanf("%c",&sign);
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
                   printf("Result is = %f",result);
                   break;
     
         case 2 :  if(x!=y)
                     {  if(x>y)
                         printf("%d is greater",x);
                        else if(x<y)
                         printf("%d is greater",y);
                     }
                   else
                      printf("Both are equal");
                
                    break;
        
         case 3 : printf(" Bitwise AND operation %d & %d : %d\n",x,y,x&y);
                  printf(" Bitwise OR operation %d | %d : %d\n",x,y,x|y);
                  printf(" Bitwise XOR operation %d ^ %d : %d\n",x,y,x^y);
                  printf(" Bitwise ONE'S COMPLEMENT ~ %d operation : %d\n",x,~x);
                  
                  break;
         
         case 4 : res = (x>y)? x : y ;
                  printf("%d is greater than the other",res);
                  
                  break;
                  
         default : printf("Invalid Input");
                   break;
                          
            
     }
  return 0;   
}
