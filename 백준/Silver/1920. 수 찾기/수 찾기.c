#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    return (num1 > num2) - (num1 < num2);
}

int binary_search(int arr[], int target, int size) {
  int start = 0, end = size - 1;
  
  while(start <= end) {
    int mid = start + (end - start) / 2;
    if(arr[mid] == target) {
      return 1;
    }
    else if(arr[mid] > target) {
      end = mid - 1;
    }
    else if(arr[mid] < target) {
      start = mid + 1;
    }
  }
  return 0;
}

int main() {
  int N, M;
  scanf("%d", &N);

  int arr[N];
  for(int i=0; i<N; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, N, sizeof(int), compare);

  scanf("%d", &M);
  for(int i=0; i<M; i++) {
    int target;
    scanf("%d", &target);

    if(binary_search(arr, target, N)) {
      printf("1\n");
    } else {
      printf("0\n");
    }
  }

  return 0;
}