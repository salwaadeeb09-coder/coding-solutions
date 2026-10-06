#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
 {
   int i,j,m1=0,m2=0,m3=0;
  for(i =1;i<=n;i++)
  {
    for(j=i+1; j<=n; j++)
  {
    int  and_result =i&j;
     if(and_result <k && and_result >m1)
     {
        m1=and_result;
     }
   int or_result =i|j;
    if(or_result <k && or_result >m2)
    {
        m2 =or_result;
    }
int xor_result =i^j;
 if(xor_result < k && xor_result >m3)
    {
     m3=xor_result;
    }
  }
}
 printf("%d\n%d\n%d\n", m1, m2 , m3 );
   }
     int main()

 {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
