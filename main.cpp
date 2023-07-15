#include<iostream>
using namespace std;
int main(){
    int s1[10]={2,0,3,3,1,3,3,1,3,3};
    int s2[10]={4,2,2,2,3,2,3,2,4,3};
    int count=0;
    cin>>count;
    while(count--){
    	int flag=1;
        int num;
        cin>>num;
        int sum1=0,sum2=0;
        while(num||flag){
            int n=num%10;
            num/=10;
            sum1+=s1[n];
            sum2+=s2[n];
            cout<<sum1<<" "<<sum2<<endl;
            flag=0;
        }
    }
    return 0;
}
