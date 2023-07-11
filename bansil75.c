/*Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
Input:
Enter array A's size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's size: 3

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 6

Output:
Array C is: 7, 4, 9, 5, 2, 1, 3, 6*/

#include<stdio.h>


void main(){
int i,n,m,j;


printf("enter the size of A array :    ");
scanf("%d",&n);
int a[n];

printf("enter array A elements \n");
for(i=0;i<n;i++){
printf("a[%d] =  ",i);
scanf("%d",&a[i]);
    }



printf("enter the size of B array :    ");
scanf("%d",&m);
int b[m];

printf("enter array b elements \n");
for(i=0;i<m;i++){
printf("b[%d] =  ",i);
scanf("%d",&b[i]);
    }

int c[n+m];

for(i=0;i<n;i++){

c[i]=a[i] ;   
}

for(i=0;i<m;i++){

c[i+n]=b[i] ;   
}

for(i=0;i<n+m;i++){

    printf("c[%d] = %d\n",i,c[i]);
}



}



