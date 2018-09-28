//This code uses bubble sort algo along with function as a parameter..

#include<bits/stdc++.h>
using namespace std;
  
void swap(int &xp, int &yp) 
{ 
    int temp = xp; 
    xp = yp; 
    yp = temp; 
} 

int smaller(int a, int b)
{
	if(a>b)
		return 1;
	else
		return 0;
}
int great(int a, int b)
{
	if(a<b)
		return 1;
	else
		return 0;
}

int lastdigit(int a, int b)
{
	if(a%10>b%10)
		return 1;
	else
		return 0;
}

void bubbleSort(int arr[], int n,int compare(int ,int )) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)        
	{
		for (j = 0; j < n-i-1; j++)  
        {
        	if (compare(arr[j] , arr[j+1])==1) 
            {
            	swap(arr[j], arr[j+1]);
			}
		} 
	}
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}  
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n,smaller); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    bubbleSort(arr, n,lastdigit); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    
    return 0; 
} 
