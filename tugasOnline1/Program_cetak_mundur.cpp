#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    char data[150];
    int panjangData = 0;
	printf("Program Cetak mundur kata\n");
    printf("Masukan data string : ");
    cin.getline(data, 150);
    for(int i = 0; data[i]!='\0'; ++i)
    {
    	panjangData++;
    }
    printf("Output : ");
    for(int j = panjangData; j >= 0 ; j--){
    	printf("%c", data[j]);
	}
	return 1;
}
