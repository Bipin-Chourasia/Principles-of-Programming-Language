//Write a program in c to add two distances given in foot and inches using structure.

//Source Code:-

#include<stdio.h>
int main(){
	struct distance{
		int foot;
		int inches;
	} s1,s2,s3;
	printf("Enter the first distance of Foot:");
	scanf("%d",&s1.foot);
	printf("Enter the first distance of Inches:");
	scanf("%d",&s1.inches);
	printf("Enter the second distance of Foot:");
	scanf("%d",&s2.foot);
	printf("Enter the second distance of Foot:");
	scanf("%d",&s2.inches);
	s3.foot=s1.foot+s2.foot;
	s3.inches=s1.inches+s2.inches;
	if(s3.inches>=12){
		s3.foot=s3.foot+1;
		s3.inches=s3.inches-12;
	}
	printf("The distance is %d foot and %d inches",s3.foot,s3.inches);
}

/*OUTPUT:-
Enter the first distance of Foot:25
Enter the first distance of Inches:20
Enter the second distance of Foot:12
Enter the second distance of Foot:45
The distance is 38 foot and 53 inches
*/
