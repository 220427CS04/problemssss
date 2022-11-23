#include <iostream>
#include <array>
using namespace std;

//problem 1
//
//int main(){
//    int n=0;
//    int m=n;
//    cout<<&n<<" "<<&m<<endl;
//    m++;
//    cout<<n<<" "<<m<<endl;
//    int &r=n;
//    cout<<&n<<" "<<&r<<endl;
//    r++;
//    cout<<n<<" "<<r<<endl;

//problem 2
//int main(){
//    int a;
//    cout<<&a<<endl;
//    cin>>a;
//    cout<<&a<<endl;
//    int *p=&a;
//    cout<<*p<<endl;
//    cout<<p<<endl;
//    a++;
//    cout<<*p<<endl;
//    p++;
//    cout<<a<<endl;
//
//
//
//}
//problem 3
//void swap(int &num1, int &num2){
//    num1=num1+num2;
//    num2=num1-num2;
//    num1=num1-num2;
//    cout<<num1<<" "<<num2<<endl;
//}
//
//int main(){
//    int a,b;
//    cin>>a>>b;
//    swap(a,b);
//}

//problem 4
//void swap(int num1, int num2){
//    num1=num1+num2;
//    num2=num1-num2;
//    num1=num1-num2;
//    cout<<num1<<" "<<num2<<endl;
//}
//
//int main(){
//    int a,b;
//    cin>>a>>b;
//    int *ptrA=&a;
//    int *ptrB=&b;
//    swap(*ptrA,*ptrB);
//}

//problem 5


//problem 6


//problem 7


//problem 8
int main(){
array <int, 6> arr{};
int input;
for(int & i : arr){
    cin>>i;
}

for(int i=0; i<arr.size();i++){
    for(int z=1; z<arr.size(); z++){
        if(arr[z]<arr[z-1]){
            int temp=arr[z];
            arr[z]=arr[z-1];
            arr[z-1]=temp;
        }
    }
}
for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
