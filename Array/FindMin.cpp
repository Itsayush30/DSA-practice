#include<iostream>
#include<math.h>
using namespace std;

int Arr(int arr[],int size){
        int min = INT_MAX;
        for(int i=0;i<size;i++){
          if(arr[i]< min){
            min = arr[i];
          }
          
        }
          return min;
}
      

int main() {

    int FirstArray[]={1,2,3,4,5};
    int mini = Arr(FirstArray, 5);
    cout << mini;


    
}
