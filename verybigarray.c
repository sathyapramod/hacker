
/*Input Format

The first line of the input consists of an integer N. The next line contains N space-separated integers describing the array.*/
/*Input Format

The first line of the input consists of an integer N. The next line contains N space-separated integers describing the array.

Constraints 
1≤N≤10 
0≤A[i]≤1010

Output Format

Output a single value equal to the sum of the elements of the array.

Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005
Sample Output

5000000015
*/

#include<stdio.h>

int main()
{
int i,a;
 scanf("%d",&a);
long int sum=0,arr[1000];
 for(i=0;i<a;i++)
  {
   scanf("%ld",&arr[i]);
  }
 for(i=0;i<a;i++)
 {
  sum=sum+arr[i];
}
printf("%ld",sum);
}
~                                                                               
                                                              24,1          Bot
