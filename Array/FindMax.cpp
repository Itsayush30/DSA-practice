#include<iostream>
#include<math.h>
using namespace std;

int Arr(int arr[],int size){
        int max = INT_MIN;
        for(int i=0;i<size;i++){
          if(arr[i]>max){
            max = arr[i];
          }
          
        }
          return max;
}
      

int main() {

    int FirstArray[]={1,2,3,4,5};
    int maxi = Arr(FirstArray, 5);
    cout << maxi;


    
}
