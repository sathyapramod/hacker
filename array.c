/*you are given an array of integers of size N. You need to print the sum of the elements of the array.

Input Format 
The first line of the input consists of an integer N. The next line contains N space-separated integers describing the array.

Constraints 
1≤N≤1000 
0≤A[i]≤1000

Output Format 
Output a single value equal to the sum of the elements of the array.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
Explanation 
1+2+3+4+10+11=31*/

#include<stdio.h>
#include<stdlib.h>
#define N 1000

int main()
{
 int i,n,sum=0,a[N];
  scanf("%d",&n);
   for(i=0;i<n;i++)
    if(i==0)
     {
      scanf("%d",&a[i]);sum=a[i];
      }
    else 
    {
     scanf("%d",&a[i]);sum=sum+a[i];
     }
     printf("%d",sunm);
  }
  
