#include <bits/stdc++.h>
using namespace std;

int heap[1000001];
int heap_count = 0;

void push(int data) {
	int index = ++heap_count;
	heap[index] = data;

	while(index > 1 && heap[index / 2] < data) {
		swap(heap[index], heap[index / 2]);
		index /= 2;
	}
}

int pop() {
	int result = heap[1];
	heap[1] = heap[heap_count--];
	
	int parent = 1;
	int child;
	while(1) {
		child = parent * 2;
		if(child + 1 <= heap_count && heap[child] < heap[child + 1]) child++;
		if(child > heap_count || heap[parent] >= heap[child]) break;
		swap(heap[parent], heap[child]);
		parent = child;
	}
	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	while(N--) {
		int x;
		cin >> x;

		if(x == 0) {
			if(heap_count < 1) cout << 0 << '\n';
			else cout << pop() << '\n';
		} else {
			push(x);
		}
	}

	return 0;
}