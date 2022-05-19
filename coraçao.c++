#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout<<"Print Heart....C++\n";

        int n=7; //size of heart
        for(int i=-3*n/2;i<=n;i++){
            for(int j=-3*n/2;j<=3*n/2;j++){

            if((abs(i)+abs(j)<n)||((-n/2-i)*(-n/2-i)+(n/2-j)*(n/2-j)<=n*n/2)||((-n/2-i)*(-n/2-i)+(-n/2-j)*(-n/2-j)<=n*n/2)){
                   cout<<"V ";
               }
               else{
                   cout<<"  ";
               }
            }
               cout<<"\n";
        }
        cout<<"   igual a vc, nem o google maps encontra\n ";
    return 0;
}