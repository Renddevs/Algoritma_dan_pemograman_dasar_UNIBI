#include <stdio>
#include <conio>
char tentukanBobotNilai(int nilai);
void main(){
	int nilai;
   char index;
	printf("Program penentu bobot penilaian\n");
   printf("Masukan nilai : ");
   scanf("%i", &nilai);
   index = tentukanBobotNilai(nilai);
   printf("Bobot nilai yang dihasilkan : %c", index);
	getch();
}

char tentukanBobotNilai(int nilai){
	char indexPenilaian;
	if(nilai >= 85 ){
   	indexPenilaian = 'A';
   }else if(nilai >= 70 && nilai < 85){
   	indexPenilaian = 'B';
   }else if(nilai >= 60 && nilai < 70){
   	indexPenilaian = 'C';
   }else if(nilai >= 45 && nilai < 60){
   	indexPenilaian = 'D';
   }else{
   	indexPenilaian = 'E';
   }

   return indexPenilaian;
}

