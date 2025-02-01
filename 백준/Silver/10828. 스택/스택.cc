#include <bits/stdc++.h>
using namespace std;

int arr[10000];
int top = -1;

int isEmpty() {
	if(top < 0) {
		return 1;
	}
	return 0;
}

void push(int n) {
	top++;
	arr[top] = n;
} 

int pop() {
	if(isEmpty()) {
		return -1;
	}
	int val = arr[top];
	top--;
	return val;
}

int main() {
	int N;
	cin >> N;

	while(N--) {
		string str;
		cin >> str;
		if (str == "push") {
    	int n;
      cin >> n;
      push(n);
    } else if (str == "pop") {
      cout << pop() << endl;
    } else if (str == "size") {
      cout << top + 1 << endl;
    } else if (str == "empty") {
      cout << isEmpty() << endl;
    } else if (str == "top") {
      if (isEmpty()) {
        cout << -1 << endl;
      } else {
        cout << arr[top] << endl;
      }
    }
	}

	return 0;
}