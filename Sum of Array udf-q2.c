#include<stdio.h>
  int sum1(int a[],int n)
 {
 	int i,sum=0;
 
    for(i=0; i<n; i++)
    {
         sum+=a[i]; 
    }
 	return sum;
 }
 main()
{
	int  a[100] ,i,n,sum;
	
    printf("Enter size of the array :-");
	scanf("%d",&n);
	
	 printf("Enter elements in array :- ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
	   
     sum=sum1(a,n);
    printf("sum of array is %d",sum);
	
}
