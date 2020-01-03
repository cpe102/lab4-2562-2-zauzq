#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double x,double y,double z){
  double A = (x*z)+(0.5*y*z*z);
  return A;
}

int main(){
   double u,a,t;
   cout<<"Enter u: ";
   cin>>u;
   cout<<"\nEnter a: ";
   cin>>a;
   cout<<"\nEnter t: ";
   cin>>t;
   cout<<"\nS = "<<findDistance(u,a,t);

  return 0;
}
