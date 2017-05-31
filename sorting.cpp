//Rakesh 108116048

//BUBBLE SORT - ASCENDING ORDER

#include<stdio.h>

void main()
{
	int n,a[20],i,j,temp;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	 if(a[j+1]<a[j])
	 {
	 	temp=a[j];
	 	a[j]=a[j+1];
	 	a[j+1]=temp;
	 }
	 
	 for(i=0;i<n;i++)
	 cout<<a[i]<<" ";
	
}