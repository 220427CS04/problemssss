//#include <iostream>
//using namespace std;
//
//
//int main(){
//
//    int num;
//    cout<<"Enter a number: ";
//    cin>>num;
//
//    if(num%3==0){
//        cout<<"YES \n";
//    } else
//        cout<<"NO \n";
//
//
//}

//#include <iostream>
//using namespace std;
//
//int get_max(int row[], int size){
//    int max=row[0];
//    for(int i=0; i<size; i++){
//        if(max<row[i]){
//            max=row[i];
//        }
//
//    }
//
//    return max;
//}
//
//int main(){
//
//    int row[5]={213, 321, 56, 789, 3};
//    int size= sizeof(row)/sizeof(row[0]);
//
//    cout<<get_max(row, size)<<endl;
//
//}


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main (){
    int num, counter = 0, i = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(true) {
        if (isPrime(i)) {
            cout << " " << i;
            counter++;
        }
        if (counter == num) {
            break;
        }
        i++;
    }
    cout<<endl;
}
