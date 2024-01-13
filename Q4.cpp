// Q4 WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std ;
int main(){
    float r,h ;
    cout<<"Enter the value of radius = ";
    cin>>r;
    cout<<"Enetr the value of height = ";
    cin>>h;
    float v,pai= 3.1415926 ;
     v= pai*r*r*h;
    cout<<"Volume of cylinder is = "<<v;
}