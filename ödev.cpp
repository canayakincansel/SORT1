#include <stdio.h>
int main(){
	
	int secim,secim2,secim3;
	printf("===================== MENU ====================\n");
	printf("1) Bir siralama algoritmasi secerek diziyi siralayiniz.\n");
	printf("2) Tum siralama algoritmalarini karsilastiriniz.\n");
	printf("seciminiz...:");
	
	scanf("%d", &secim);
	
				if(secim==1){
		
	
				printf("Siralama Algoritmasi Seciniz:\n");
				printf("1.Bubble Sort\n");
				printf("2.Selection Sort\n");
				printf("3.Insertion Sort\n");
				printf("4.Shell Sort\n");
	
				printf("seciminiz...:");
				scanf("%d", &secim2);
									switch(secim2){
									
									case 1:
										printf("bubble sort sectin");
										break;
											
									case 2:
										printf("selection sort sectin");
										break;
									case 3:
										printf("insertion sort sectin");
										break;
									case 4:
										printf("shell sort sectin");
										break;
													
									
									default:
											printf("HATA: Bilinmeyen bir deðer girdiniz!\n");
										
									}
						
						printf("Siralama sekli:\n 1.	Kucukten Buyuge\n 2.	Buyukten Kucuge\n Seciminiz...:")	;	
							scanf("%d", &secim3);
							if(secim3==1)
							{
							}
							else if(secim3==2)
							{

							}	
							
							else 
							printf("lutfen sadece 1-2 seceneklerini giriniz...");					
							
		    	}
				else if (secim==2) 
					printf("gelistiricez....");	
				
				else
					printf("Lutfen 1 ya da 2 secenegini giriniz...");
					
					
}
