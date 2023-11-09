#include<iostream>
#include<math.h>
using namespace std;

bool isTrue(int arr[], int size, int key){
    for(int i=0;i<size;i++){
    if(arr[i] == key ){

        return 1;

    }

    }
    return 0;
}

int main(){
   int Arr[]={1,2,3,4,5,6,7,8,9};
   cout << "Enter the element to find!" << endl;
   int key;
   cin >> key;

    int found = isTrue(Arr, 9, key);

   if(found){

     cout << "Present" <<endl;

   }

    else{
        cout << "not present" <<endl;
    }

    return 0;
}