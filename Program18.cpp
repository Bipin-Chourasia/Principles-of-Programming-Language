//Write a C++ program that will create a class which will calculate the area of triangle, reactangle and circle having the same name.

//Source Code:-

#include <iostream>
#include <math.h>

using namespace std;
class Calculation{
public:void Area(){
    float b,h;
    cout<<"Enter the height and base of the triangle:";
    cin>>b>>h;
    float area=0.5*b*h;
    cout<<"The area of triangle is:"<<area<<endl;
}
void Area(float l,float b){
    float area=l*b;
    cout<<"The area of rectangle is:"<<area<<endl;
}
void Area(float r){
    float area=3.14* pow(r,2);
    cout<<"The area of circle is:"<<area;
}
};
int main(){
    float a,c,d;
    Calculation v;
    v.Area();
    cout<<"Enter length and breadth of the rectangle:";
    cin>>a>>c;
    v.Area(a,c);
    cout<<"Enter the radius of the circle:";
    cin>>d;
    v.Area(d);
}

/*OUTPUT:-
Enter the height and base of the triangle:5
8
The area of triangle is:20
Enter length and breadth of the rectangle:5
4
The area of rectangle is:20
Enter the radius of the circle:6
The area of circle is:113.04
*/
