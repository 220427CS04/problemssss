#include <iostream>

using namespace std;
//problem 10
//int main(){
//
//    int size;
//    cin>>size;
//    int arr[size];
//    for (int i=0; i<size; i++){
//        cin>>arr[i];
//    }
//    cout<<"Original array: ";
//    for(int i=0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    cout<<"Reversed array: ";
//    for(int i=size-1; i>=0; i--){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}


//problem 11
//void reverse(int arr[], int size){
//    if(size>=1) {
//        cout << arr[size - 1] << " ";
//        reverse(arr, size - 1);
//
//    }
//}
//
//int main (){
//    int size;
//    cin>>size;
//    int array[size];
//    for(int i=0; i<size; i++){
//        cin>>array[i];
//    }
//    reverse(array, size);
//
//}
//problem 12
//int main(){
//    int size;
//    cin>>size;
//    int arr[size];
//
//
//    for(int i=0; i<size; i++){
//        cin>>arr[i];
//    }
//    cout<<"Original array: ";
//    for(int i=0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//
//    for(int i=0; i<size; i++){
//        for(int l=1; l<size; l++){
//            if(arr[l]<arr[l-1]) {
//                int temp = arr[l];
//                arr[l] = arr[l - 1];
//                arr[l - 1] = temp;
//            }
//        }
//    }
//    cout<<"Sorted array: ";
//    for(int i=0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
//

//problem 13
//
//void occur(int arr[], int size, int x){
//    int counter=0;
//    for(int i=0; i<size; i++){
//        if(arr[i]==x){
//            counter++;
//        }
//    }
//    cout<<counter;
//}
//
//int main(){
//    int arrr[ ] = {1, 1, 2, 2, 2, 2, 3};
//    int x = 2;
//   int size=sizeof(arrr)/sizeof(arrr[0]);
// occur(arrr, size, x);
//}
//problem 14
//int main(){
//    int size;
//    cin>>size;
//    int arr[size];
//
//
//    for(int i=0; i<size; i++){
//        cin>>arr[i];
//    }
//    cout<<"Original array: ";
//    for(int i=0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//
//    for(int i=0; i<size; i++){
//        for(int l=1; l<size; l++){
//            if(arr[l]<=arr[l-1]) {
//                int temp = arr[l];
//                arr[l] = arr[l - 1];
//                arr[l - 1] = temp;
//            }
//        }
//    }
//    cout<<"Sorted array: ";
//    for(int i=0; i<size; i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}

//problem 14
//int main(){
//int arr[4][2]={{1,2},{3,4},{5,6},{7,8}};
//    for (int i = 0; i < 4; i++) {
//      for (int j = 0; j < 2; j++) {
//        cout << arr[i][j]<<" ";
//      }
//cout<<endl;
//    }
//}

// problem 15

int main() {
    int arr[2][2];

    for (int i = 0; i < 2; i++) {
        for (int l = 0; l < 2; l++) {
            cin >> arr[i][l];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int l = 0; l < 2; l++) {
            cout << arr[i][l] << " ";
        }
        cout << endl;
    }
}
