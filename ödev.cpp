#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
} 

int shellSort(int arr[], int n) 
{ 
    // Start with a big gap, then reduce the gap 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        // Do a gapped insertion sort for this gap size. 
        // The first gap elements a[0..gap-1] are already in gapped order 
        // keep adding one more element until the entire array is 
        // gap sorted  
        for (int i = gap; i < n; i += 1) 
        { 
            // add a[i] to the elements that have been gap sorted 
            // save a[i] in temp and make a hole at position i 
            int temp = arr[i]; 
  
            // shift earlier gap-sorted elements up until the correct  
            // location for a[i] is found 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
              
            //  put temp (the original a[i]) in its correct location 
            arr[j] = temp; 
        } 
    } 
    return 0; 
} 


/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end) 
{ 
    int temp; 
    while (start < end) 
    { 
        temp = arr[start];    
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }    
}    
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}

int main(){

	char secim;
	int secim2,secim3;
	printf("===================== MENU ====================\n");
	printf("A) Bir siralama algoritmasi secerek diziyi siralayiniz.\n");
	printf("B) Tum siralama algoritmalarini karsilastiriniz.\n");
	printf("seciminiz...:");

	scanf("%c", &secim);
	
	if(secim=='A' || secim=='a'){
		
	
				printf("Siralama Algoritmasi Seciniz:\n");
				printf("1.Bubble Sort\n");
				printf("2.Selection Sort\n");
				printf("3.Insertion Sort\n");
				printf("4.Shell Sort\n");
	
				printf("seciminiz...:");
				scanf("%d", &secim2);
				if(secim2!=1 && secim2!=2 && secim2!=3 && secim2!=4)
				{
				printf("HATA: Bilinmeyen bir deger girdiniz!\n");
				return 0;
				}
				
				
			srand(time(NULL));
			int i,my_array[10];
			for (i = 0; i < 10; i++)
			my_array[i] =1+ rand() % 100;
			printf("rastgele elemanlar: ");
			printArray(my_array,10);
			  
							
				printf("Siralama sekli:\n 1.	Kucukten Buyuge\n 2.	Buyukten Kucuge\n Seciminiz...:")	;	
				scanf("%d", &secim3);
				if(secim3!=1 && secim3!=2){
				printf("lutfen sadece 1 veya 2 seceneklerini giriniz...");	
				return 0 ;
				}
				
				if(secim3==1)
				{
					switch(secim2)
					{
					case 1:
					bubbleSort(my_array,10); 
					printf("bubbleSort ile kucukten buyuge siralanmis hali : ");
					printArray(my_array,10);
					break;
				
					case 2:
					selectionSort(my_array,10);
					printf("selectionSort ile kucukten buyuge siralanmis hali :");
					printArray(my_array,10);
					break;
					
					case 3:
					insertionSort(my_array,10);
					printf("insertionSort ile kucukten buyuge siralanmis hali :");
					printArray(my_array,10);
					break;
					
					case 4:
					shellSort(my_array,10);
					printf("shellSort ile kucukten buyuge siralanmis hali :");
					printArray(my_array,10);
					break;
				}
		}
		        if(secim3==2)
				{
					switch(secim2)
					{
					case 1:
					bubbleSort(my_array,10); 
					reverseArray(my_array,0,9);
					printf("bubbleSort ile buyukten kucuge siralanmis hali : ");
					printArray(my_array,10);
					break;
				
					case 2:
					selectionSort(my_array,10);
					reverseArray(my_array,0,9);
					printf("selectionSort ile buyukten kucuge siralanmis hali :");
					printArray(my_array,10);
					break;
					
					case 3:
					insertionSort(my_array,10);
					reverseArray(my_array,0,9);
					printf("insertionSort ile buyukten kucuge siralanmis hali :");
					printArray(my_array,10);
					break;
					
					case 4:
					shellSort(my_array,10);
					reverseArray(my_array,0,9);
					printf("shellSort ile buyukten kucuge siralanmis hali :");
					printArray(my_array,10);
					break;
				}
			}								
	}

	else if (secim=='B' || secim=='b') 
	{
				
		srand(time(NULL));
		int i,my_array2[50000],my_array3[50000],my_array4[50000],my_array5[50000];
		for (i = 0; i < 50000; i++)
		my_array2[i] = 1+rand() % 200000;
		
		for (i = 0; i < 50000; i++)
		my_array3[i] = 1+rand() % 200000;
		
		for (i = 0; i < 50000; i++)
		my_array4[i] = 1+rand() % 200000;
		
		for (i = 0; i < 50000; i++)
		my_array5[i] = 1+rand() % 200000;	 	
			 	
		// ÇALIÞMIYOR?? 
		//çalýþýyorda yamuk yapýyo yamuk
		/*
		
		time_t start, end, total;
		start=time(0);
		printf("arrayin ilk indexi : %d\n",my_array2[0]);

		bubbleSort(my_array2,50000);
		printf("arrayin ilk indexi : %d\n",my_array2[0]);
		end = time(0);
		total = (double)(end - start) / CLOCKS_PER_SEC;
		printf("siralama suresi= %f",total);
		
*/
	time_t start, end, duration;
    printf ("Lutfen Bekleyiniz\n");
    
    
    start = time (0);
   	bubbleSort(my_array2,50000);
    end = time (0);
    duration = end - start;
    printf ("Bubble Sort siralama suresi = %d\n", duration);
    
    start = time (0);
   	selectionSort(my_array3,50000);
    end = time (0);
    duration = end - start;
    printf ("SelectionSort siralama suresi= %d\n", duration);
       
    start = time (0);
   	insertionSort(my_array4,50000);
    end = time (0);
    duration = end - start;
    printf ("insertion sort siralama suresi= %d\n", duration);
    
    start = time (0);
   	shellSort(my_array5,50000);
    end = time (0);
    duration = end - start;
    printf ("Shellsort siralama suresi= %d\n", duration);
    
    return 0;
		
	}
				
	else
	{
				
	printf("Lutfen A ya da B secenegini giriniz...");
	return 0;
	}
					
					
}

