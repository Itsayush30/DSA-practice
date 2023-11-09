#include<iostream>
#include<math.h>
using namespace std;

int GetSum(int arr[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int Arr[]={1,-2,4,5,6};
    int ans = GetSum(Arr, 5);

    cout << ans;


}