#include <stdio>
#include <conio>
#include <iostream>
#include <ctype>
void hitungFrekuensiHuruf(char alphabet[], int frekuensi[], char teks[]){
   for(int h = 0; teks[h] != '\0'; h++){
   	for(int i = 0; i < 25; i++){
      	if(tolower(teks[h]) == alphabet[i]){
             	frekuensi[i]++;
         }
      }
   }
}

void tampilkanFrekuensiHuruf(char alphabet[], int frekuensi[], char teks[]){
   printf("Frekuensi keluaran huruf pada teks \"%s\"\n", teks);
   for(int j = 0; j < 26; j++){
   	printf("%c : %i\n",alphabet[j], frekuensi[j]);
   }
}
void main(){
   char teks[100];
   char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   int frekuensi[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   printf("Program penghitung frekuensi keluaran huruf\n");
   printf("Masukan teks : ");
   cin.getline(teks,100);
   hitungFrekuensiHuruf(alphabet, frekuensi, teks);
   tampilkanFrekuensiHuruf(alphabet, frekuensi, teks);

   getch();
}
