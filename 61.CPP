//WAP to create binary search
#include<stdio.h>
#include<conio.h>
int binary(int a[],int lt,int rt,int k)
{
	if(rt>=lt){
	int mid=lt+(rt-lt)/2;
	if(a[mid]==k)
	return mid;
	if(a[mid]>k)
	return binary(a,lt,mid -1,k);
	return binary(a,mid+1,rt,k);
	}
	return -1;
	}
	int main(void)
	{
	int a[]={2,3,5,7,11};
	int n=sizeof(a)/sizeof(a[0]);
	int k=11;
	int res=binary(a,0,n-1,k);
	clrscr();
	if(res==-1)
	{
	printf("Element is not found");
	}
	else
	{
	printf("Element found at index %d",res);

		}
	return 0;
	}

