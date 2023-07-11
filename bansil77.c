/*
Q.3 Write a Program to find square of each element from the given array.
For example,
Input:
Enter array size: 5

Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2


Output:
The squares are: 49, 16, 81, 25, 4
*/
#include<stdio.h>
void main(){
int n,i;


printf("enter the size of array :    ");
scanf("%d",&n);
int a[n];


printf("enter the elements of array\n ");
for(i=0;i<n;i++){
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++){

    a[i]=a[i]*a[i];
}


for(i=0;i<n;i++){

    printf("a[%d]=%d\n",i,a[i]);
}
}
