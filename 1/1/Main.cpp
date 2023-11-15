#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void improvedBubbleSort(int arr[], int n) {
	int i, j;
	int swapped;

	for (i = 0; i < n - 1; i++) {
		swapped = 0;

		// ��֨C�����������
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// �洫����
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				swapped = 1;
			}
		}

		// �p�G�S���洫�o�͡A��ܼƾڤw�g�B�󥿽T�����ǡA�פ�Ƨ�
		if (swapped == 0)
			break;
	}
}

int main() {
	int n = 10; // �Ʋդj�p
	int arr[10];

	// �ͦ��H���ƶ�R�Ʋ�
	srand(time(NULL));
	printf("�H���ͦ����Ʋ�: ");
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100; // �ͦ�0��99�������H����
		printf("%d ", arr[i]);
	}
	printf("\n");

	// �ϥΧ�i����w�ƧǶi��Ƨ�
	improvedBubbleSort(arr, n);

	// ��X�Ƨǫ᪺�Ʋ�
	printf("�Ƨǫ᪺�Ʋ�: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
