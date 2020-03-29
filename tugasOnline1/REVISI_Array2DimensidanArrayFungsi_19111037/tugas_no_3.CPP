#include <conio>
#include <stdio>

void showFrequencyOfValue(int value, int arr[], int lengthArr){
	int valueFrequency = 0;
	for(int j = 0; j < lengthArr; j++){
		if(arr[j] == value){
			valueFrequency++;
		}
	}
	printf("Frequency of appearence : %i\n", valueFrequency);
}

void showHighestValue(int arr[], int lenghtArr){
	int valueHigh = arr[0];
	for(int k = 0; k < lenghtArr; k++){
		if(valueHigh < arr[k]){
			valueHigh = arr[k];
		}
	}
	printf("The highest value : %i\n", valueHigh);
}

void showLowestValue(int arr[], int lenghtArr){
	int valueLow = arr[0];
	for(int l = 0; l < lenghtArr; l++){
		if(valueLow > arr[l]){
			valueLow = arr[l];
		}
	}
	printf("The lowest value : %i\n", valueLow);
}

void showTotalValue(int arr[], int lenghtArr){
	int total = 0;
	for(int m = 0; m < lenghtArr; m++){
		total += arr[m];
	}
	printf("The total value : %i\n", total);
}

void showAverageValue(int arr[], int lenghtArr){
	int totalValue = 0;
	for(int n = 0; n < lenghtArr; n++){
		totalValue += arr[n];
	}
	printf("The average value : %d\n", (totalValue/lenghtArr));
}

void deleteValueMethod(int value, int arr[], int lenghtArr){
	for(int o = 0; o < lenghtArr; o++){
		if(value == arr[o]){
      	arr[o] = 0;
      }
	}
	printf("Value with value = %i, has been deleted", value);
}
void main(){
	int arr[10];
	int value;
   int deleteValue;
	printf("Input your value : \n");
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		printf("Value-%i : ", i+1);
		scanf("%i", &arr[i]);
	}
	showTotalValue(arr,sizeof(arr)/sizeof(arr[0]));
   showAverageValue(arr,sizeof(arr)/sizeof(arr[0]));
	showHighestValue(arr,sizeof(arr)/sizeof(arr[0]));
	showLowestValue(arr,sizeof(arr)/sizeof(arr[0]));
   printf("1. Frequency of appearance value\n");
   printf("Input value : ");
	scanf("%i", &value);
	showFrequencyOfValue(value,arr,sizeof(arr)/sizeof(arr[0]));
   printf("3. Delete some value\n");
   printf("Input value : ");
	scanf("%i", &deleteValue);
	deleteValueMethod(deleteValue,arr,sizeof(arr)/sizeof(arr[0]));
	getch();
}