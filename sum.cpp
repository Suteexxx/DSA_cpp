#include<iostream>
using namespace std;
int main() {
    int num= 10;
    int sum=0;
    for(int i=1; i<num; i++) {
        sum+=i;
    }
    cout<<"Sum of odd numbers from 1 to "<<num-1<<" is: "<<sum<<endl;       
    return 0;
}