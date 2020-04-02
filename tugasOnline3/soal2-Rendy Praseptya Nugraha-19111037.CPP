#include <stdio>
#include <conio>
#include <iostream>
void inputBilangan(int bilanganArray[]){
   int bilangan;
   printf("Program penghitung bilangan terkecil\n");
   for(int i = 0; i < 10; i++){
   	printf("Masukan bilangan ke-%i : ", i+1);
      scanf("%i", &bilangan);
      bilanganArray[i] = bilangan;
   }
}

int tampilkanBilanganTerkecil(int bilanganArray[]){
   int cariTerkecil = bilanganArray[0];
   for(int j = 0; j < 10; j++){
   	if(bilanganArray[j] < cariTerkecil){
      	cariTerkecil = bilanganArray[j];
      }
   }

   return cariTerkecil;
}
void main(){
   int bilanganArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int bilanganTerkecil;
   inputBilangan(bilanganArray);
   bilanganTerkecil = tampilkanBilanganTerkecil(bilanganArray);
   printf("Bilangan terkecil : %i", bilanganTerkecil);
   getch();
}