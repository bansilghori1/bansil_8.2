/*Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040
*/

#include<stdio.h>

void main(){
int i,n,m,j=0;

printf("enter the first number :    ");
scanf("%d",&n);

printf("enter the last number :    ");
scanf("%d",&m);

int a[m+n];

for(i=n;i<=m;i++){
if(i%4==0){
   a[j]=i;
   j++;
}}

for(i=0;i<j;i++){
printf(" The leap year is : %d\n",a[i]);
}

}



