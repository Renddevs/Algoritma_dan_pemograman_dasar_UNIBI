#include <conio.h>
#include <stdio.h>

int main(){
	int umur,b;
	printf("Masukan Umur anda : ");
	scanf("%i");
	if(umur > 50){
		printf("Anda sudah lansia");
	}else if(umur > 19 && umur < 50 ){
		printf("Anda sudah dewasa");
	}else{
		printf("Anda masih anak-anak");
	}
}
