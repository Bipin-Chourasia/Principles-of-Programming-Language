/*Write a C progarm to implement bubble sort and if the elements are already sorted 
then it will not work.*/

//Source Code:-

#include<stdio.h>
int main(){
	int n;
	printf("The size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter element in the index %d:",i);
		scanf("%d",&arr[i]);	
		}
		for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
}
 printf("The sorted array is:\n");
 for(int i=0; i<n; i++){
 	printf("%d",arr[i]);
 }
}


/*The size of the array:4
Enter element in the index 0:45
Enter element in the index 1:78
Enter element in the index 2:49
Enter element in the index 3:56
The sorted array is:
45495678*/
