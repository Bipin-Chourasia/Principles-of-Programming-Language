//Write a C program to access array elements using pointers.

//Source Code:-

#include <stdio.h>
int main() {
	int n;
	printf("Enter the number of array elements:\n");
	scanf("%d",&n);
	
    int data[n];
    

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i){
        scanf("%d", data + i);
     }

    printf("The elements entered are: \n");
    for (int i = 0; i < n; ++i)
      {
        printf("%d\n", *(data + i));
       }
      return 0;
  }
  
  /*OUTPUT
  Enter the number of array elements:
5
Enter elements: 48
47
46
25
30
The elements entered are:
48
47
46
25
30 */

