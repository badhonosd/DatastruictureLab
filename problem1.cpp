#include <iostream>

using namespace std;

int main() {
  int arr[10];
  cout << "Input some elements onto the stack: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < 10 - 1; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }


  int i = 0, j = 9;


  int min_sum = abs(arr[i] + arr[j]);
  int min_i = i, min_j = j;
  while (i < j) {
    int sum = arr[i] + arr[j];
    if (abs(sum) < min_sum) {
      min_sum = abs(sum);
      min_i = i;
      min_j = j;
    }

    if (sum < 0) {
      i++;
    } else {
      j--;
    }
  }


  cout << "The two elements whose sum is closest to zero are: " << arr[min_i] << " and " << arr[min_j] << endl;

  return 0;
}
