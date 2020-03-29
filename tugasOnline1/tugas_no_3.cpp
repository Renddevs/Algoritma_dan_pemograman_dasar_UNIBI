#include <conio.h>
#include <stdio.h>

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
		if(valueLow < arr[l]){
			valueLow = arr[l];
		}
	}
	printf("The lowest value : %i\n", valueLow);
}

int main(){
	int arr[10];
	int value;
	printf("Input your value : \n");
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		printf("Value-%i : ", i+1);
		scanf("%i", &arr[i]); 
	}
	printf("Input value : ");
	scanf("%i", &value);
	showFrequencyOfValue(value,arr,sizeof(arr)/sizeof(arr[0]));
	showHighestValue(arr,sizeof(arr)/sizeof(arr[0]));
	showLowestValue(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
