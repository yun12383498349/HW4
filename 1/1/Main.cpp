#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void improvedBubbleSort(int arr[], int n) {
	int i, j;
	int swapped;

	for (i = 0; i < n - 1; i++) {
		swapped = 0;

		// 減少每輪的比較次數
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// 交換元素
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				swapped = 1;
			}
		}

		// 如果沒有交換發生，表示數據已經處於正確的順序，終止排序
		if (swapped == 0)
			break;
	}
}

int main() {
	int n = 10; // 數組大小
	int arr[10];

	// 生成隨機數填充數組
	srand(time(NULL));
	printf("隨機生成的數組: ");
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100; // 生成0到99之間的隨機數
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 使用改進的氣泡排序進行排序
	improvedBubbleSort(arr, n);

	// 輸出排序後的數組
	printf("排序後的數組: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
