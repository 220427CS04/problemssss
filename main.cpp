#include <iostream>
#include <vector>
using namespace std;
int get_max(int arr[], int size=3){
    int max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int get_min(int arr[], int size=3){
    int min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

void print(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
//problem 1
//    int *ptr;
//    int input;
//    cin>>input;
//    ptr=&input;
//    cout<<ptr<<endl;
    //problem 2
//    int *ptr;
//        int input;
//        cin>>input;
//        ptr=&input;
//        cout<<&ptr<<endl;
//problem 3
//    int a, b;
//    int *ptrA, *ptrB;
//    cin>>a>>b;
//    ptrA=&a;
//    ptrB=&b;
//    cout<<*ptrA<<endl<<*ptrB<<endl;
//problem 4
//
//    int input;
//    int *ptr=&input;
//    cin>>input;
//    cout<<*ptr<<endl;

  //problem 5
  
//    int input;
//    int *ptr=&input;
//    cin>>input;
//    cout<<*ptr<<endl;
//problem 6
//    int num1, num2;
//    int *ptr1=&num1;
//    int *ptr2=&num2;
//    cin>>num1>>num2;
//    cout<<*ptr1+ *ptr2<<endl;
//problem 7
//        int num1, num2;
//        int *ptr1=&num1;
//        int *ptr2=&num2;
//        cin>>num1>>num2;
//        cout<<*ptr1 * *ptr2<<endl;
//problem 8
    
//    int arr[3];
//    for(int i=0; i<3; i++){
//        cin>>arr[i];
//    }
//    cout<<get_max(arr)<<endl;
    //problem 9
//        int arr[3];
//        for(int i=0; i<3; i++){
//            cin>>arr[i];
//        }
//        cout<<get_min(arr)<<endl;
//}
//problem 10
    //vector<int> marks{123, 22, 123, 6135, 1241};
    //problem 11
//    vector<int> marks{123, 22, 123, 6135, 1241};
//    for(int i=0; i<marks.size(); i++){
//        cout<<marks[i]<<" ";
//    }
//    cout<<endl;
    
    //problem 12
//    vector<int> marks{};
//    int input;
//    int size;
//    cout<<"Enter a size: ";
//    cin>>size;
//
//    for(int i=0; i<size; i++){
//        cin>>input;
//        marks.push_back(input);
//    }
//    for(int i=0; i<size; i++){
//        cout<<marks[i]<<" ";
//    }
//    cout<<endl;
//problem 13
//    vector<int> marks{10, 20 ,30, 40 ,50};
//    marks.pop_back();
//    for(int i=0; i<marks.size(); i++){
//        cout<<marks[i]<<" ";
//    }
//    cout<<endl;

//problem 14
//    vector<int> marks{};
//    int input;
//    int size;
//    cout<<"Enter a size: ";
//    cin>>size;
//
//    for(int i=0; i<size; i++){
//        cin>>input;
//        marks.push_back(input);
//    }
//    print(marks);
//    cout<<endl;
    
//problem 15
//    vector<vector<int>> vec_array = {{1, 2}, {3, 4}, {5 ,6}, {7, 8 }};
//    for(int i=0; i<4; i++){
//        for(int j=0; j<2; j++){
//            cout<<vec_array[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    
    int input;
    int rows;
    int column;
    cout<<"Enter size of rows: ";
    cin>>rows;
    cout<<"Enter size of columns: ";
    cin>>column;
    
    vector<vector<int>> marks(rows);
   
    for(int l=0; l<rows; l++){
        for(int i=0; i<column; i++){
        cin>>input;
        marks[l].push_back(input);
    }
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }


}

