#include <iostream>
using namespace std;

// problem 7
//void recursive(int num) {
//	if (num == 0) {
//		cout << num;
//		return;
//	}
//	cout << num << ",";
//	return recursive(num - 1);
//}
//int main() {
//	int num;
//	cin >> num;
//	recursive(num);
//}


//problem 8

//void natural(int num=1) {
//	
//	if (num==50){
//		cout << num;
//		return;
//	}
//	cout << num << ",";
//	return natural(num + 1);
//}
//
//
//int main() {
//	natural();
//}

//problem 9
//int rec(int num, int sum=0) {
//	if (sum == num)
//		return sum;
//	return sum + rec(num, sum+1);
//}
//
//
//int main() {
//	int num;
//	cin >> num;
//	cout << rec(num);
//}
//problem 10
//int fact(int num) {
//    if (num > 1)
//        return num * fact(num - 1);
//    else
//        return 1;
//};
//
//int main() {
//
//    int n;
//
//    cin >> n;
//
//    cout << fact(n)<<endl;
//
//}

//problem 11

//void even(int num, int check = 2) {
//	if (check == num) {
//		if (check % 2 == 0)
//			cout << check;
//		return;
//	}
//	else if (check % 2 == 0) {
//		cout << check << " ";
//	}
//		return even(num, check + 1);
//	
//}
//	void odd(int num, int check = 1) {
//		if (check == num) {
//			if (check % 2 != 0)
//				cout << check;
//			return;
//		}
//		else if (check % 2 != 0) {
//			cout << check << " ";
//		}
//			return odd(num, check + 1);
//		
//
//
//} 
//
//	int main() {
//		int num;
//		cin >> num;
//		even(num);
//		cout << endl;
//		odd(num);
//	}

//problem 12
//int pow(int a, int b) {
//	if (b != 0) {
//		return (a * pow(a, b - 1));
//	}
//	else
//		return 1;
//
//}
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << pow(a, b);
//
//}
//problem 13

int get_min(int array[], int size) {
	if (size == 1)
		return array[0];
	return max(array[size - 1], get_min(array, size - 1));
}

int main() {
	int size;
	cin >> size;
	int row[size];
	for (int i = 0; i < size; i++) {
		cin >> row[i];
	}
	cout << get_min(row, size);

}