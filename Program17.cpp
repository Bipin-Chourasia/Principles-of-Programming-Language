//Write a C++ program to calculate the simple interest where the rate of interest has a default value of 15%.

//Source Code:-

#include <iostream>

using namespace std;
class Interest{
public:void simple(float p,float t,float r=0.15){
    float SI=p*r*t;
    cout<<"The Simple Interest is:"<<SI<<endl;
}
};
int main(){
    float a,b,c;
    cout<<"Enter the Principal:";
    cin>>a;
    cout<<"Enter the time:";
    cin>>b;
    c/=100;
    Interest i;
    i.simple(a,b);
}

/*OUTPUT:-
Enter the Principal:5000
Enter the time:4
The Simple Interest is:3000
*/
