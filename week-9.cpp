#include <iostream>

using namespace std;


//Problem 1


/*
void average(int size, int array[]){
int sum=0;
double aver;
    for(int i=0; i<size; i++){
cin>>array[i];
        sum+=array[i];
    }
aver=static_cast <double>(sum)/size;
    cout<<"sum is: "<<sum<<endl<<"average is: "<<aver<<endl;
}

int main() {

    int size;
    cin >> size;
    int array[size];


    average(size, array);
    cout << endl;
}
*/


//Problem 2
/*


void gpa(double grade[]){

    double sum=0;
    double average;
    for(int i=0; i<4; i++){
        sum+=grade[i];
    }
    average=sum/4;
    cout<<average;


}

int main(){
    string subjects[]={"English", "ICT", "Computer Programming", "Math"};
double array[4];
for(int i=0; i<4; i++){
cin>>array[i];
}
for(int i=0; i<4; i++){
    cout<<subjects[i]<<": "<<array[i]<<endl;
}
    gpa(array);
}
*/


//Problem3


//void min_number( int size){
//    double array[size];
//    for(int i=0; i<size; i++){
//        cin>>array[i];
//    }
//    double min=array[0];
//    for(int i=0; i<size;i++){
//        if(min>array[i]){
//            min=array[i];
//        }
//    }
//cout<<"Min is: "<<min<<endl;
//}
//
//int main(){
//    int size;
//    cin>>size;
//
//    min_number(size);
//
//
//
//}

//problem 4


int x=220427;

int fun(){
    return ::x+1000;
}

int main(){
    int x=2005;
    cout<<::x<<" is id"<<endl;
    cout<<x<<" is a birth year"<<endl;
    cout<<"Product of these numbers is: "<<::x*x<<endl;
cout<<"Calling function: "<<fun();
}

