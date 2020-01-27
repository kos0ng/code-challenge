#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_STRING_SIZE 40
void pembayaran(int harga);
void printDetailKapal(int selection,char *nama);

typedef struct profile {
    char nama[50];
    int ktp;
    int nohp;
} Prof;

struct history {
    int id;
    char nama_kapal[40];
    int harga;
} hist[10];

struct detailkapal {
    char destinasi[20];
    int harga;
    char fitur[100];
} Detkap[10];

static int strCompare(const void* a, const void* b) 
{ 
    return strcmp(*(const char**)a, *(const char**)b); 
} 
  
void sort(const char* arr[], int n) 
{ 
    qsort(arr, n, sizeof(const char*), strCompare); 
} 

int * bubblesort() {
    static int return_arr[6];
    int def[6] = {10,6,14,24,18,20};
    int a[6] = {10,6,14,24,18,20};
    int n=6;
    int i = 0, j = 0, tmp;
    //bubble sort
    for (i = 0; i < n; i++) {  
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    //linear search
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(a[i]==def[j]){
    			return_arr[i]=j;	
    		}
    	}
    }
    return return_arr;
}



int main() {
    strcpy(Detkap[0].destinasi,"Ayer / Bidadari");
    strcpy(Detkap[1].destinasi,"Ayer / Bidadari");
    strcpy(Detkap[2].destinasi,"Putri / Sepa");
    strcpy(Detkap[3].destinasi,"Pulau Pari");
    strcpy(Detkap[4].destinasi,"Tidung / Pramuka");
    strcpy(Detkap[5].destinasi,"Harapan / Kelapa");
    strcpy(Detkap[0].fitur,"Ac, Televisi, 2×150 hp Suzuki, Toilet, Living Room");
    strcpy(Detkap[1].fitur,"2×115 hp Yamaha");
    strcpy(Detkap[2].fitur,"Ac, Televisi, 2×250 hp Suzuki, Toilet, Living Room");
    strcpy(Detkap[3].fitur,"Ac, Televisi, 3×250 hp Suzuki, Toilet, Living RoomKamar Tidur, Pantry, Cukup nyaman untuk Party" );
    strcpy(Detkap[4].fitur,"Non AC, 4×250 hp Suzuki, Longboat, Fiber Glass, Toilet" );
    strcpy(Detkap[5].fitur,"AC, Televisi, 2×250 hp Suzuki, Toilet, Passanger" );
    Detkap[0].harga=1780000;
    Detkap[1].harga=2200000;
    Detkap[2].harga=6400000;
    Detkap[3].harga=25000000;
    Detkap[4].harga=8475000;
    Detkap[5].harga=22600000;
	Prof akun;
    strcpy(akun.nama,"coba");
    akun.ktp=123;
    char nama_kapal[][MAX_STRING_SIZE] =
	{ "MICHAEL",
  	  "LITTLE STAR",
  	  "STYNGRAY",
      "PREDATOR",
      "VINCENT",
      "COLUMBUS"
    };
    int selection,select2,counter=0,tmp_ktp;
    char tmp_nama[50];
    menu_login:
    for(int i=0;i<10;i++){
        hist[i].id=0;
    }
    printf("==========================\n");
    printf("||Program Sewa Speedboat||\n");
    printf("==========================\n");
    printf("1. Punya Akun\n");
    printf("2. Buat Akun\n");
    printf("==========================\n");
    printf("Pilih menu: ");
    scanf("%d", &selection);
    if(selection==1){
            printf("Login akun\n");
            printf("Nama : ");
            scanf("%s",tmp_nama);
            printf("No. KTP : ");
            scanf("%d",&tmp_ktp);
    if(strcmp(tmp_nama,akun.nama)!=0 || akun.ktp!=tmp_ktp){
        printf("Data tidak cocok\n");
        goto menu_login;   
    }
    }
    else if(selection==2){
            printf("Masukkan nama : ");
        	scanf("%s", akun.nama);
        	printf("Masukkan nomor KTP : ");
        	scanf("%d", &akun.ktp);
        	printf("Masukkan nomor Handphone : ");
        	scanf("%d", &akun.nohp);
    }
    else{
    	printf("Input tidak diketahui\n");
    	exit(0);
    }
    	menu_kapal:
    	printf("==========================\n");
    	printf("No  Nama Kapal\n");
        for (int i = 0; i < 6; i++)
		{
			printf("%d.  %s\n", i+1,nama_kapal[i]);
		}
		printf("==========================\n");
        printf("Urutkan kapal berdasarkan seat: \n");
        printf("1. Iya\n2. Tidak\n");
        printf("==========================\n");
        printf("Pilih menu : ");
    	scanf("%d", &selection);
        if(selection==1){
			int *return_arr = bubblesort();
			printf("==========================\n");
    		printf("No  Nama Kapal\n");
			for(int i=0;i<6;i++){
    			printf("%d.  %s\n",i+1,nama_kapal[return_arr[i]]);
    		}	
    		printf("==========================\n");
    		printf("Lihat detail kapal nomor : ");
    		scanf("%d", &selection);
    		printDetailKapal(return_arr[selection-1],nama_kapal[return_arr[selection-1]]);
    		printf("Sewa kapal \n1. Sewa \n2. Tidak\n==========================\nPilih Menu :");
    		scanf("%d", &select2);
    		if(select2==1){
    			if(counter==10){
    					printf("History maksimal 10\n");
    					goto menu;
    				}
                pembayaran(Detkap[return_arr[selection-1]].harga);
    			for(int i=0;i<10;i++)
    			{
    				if(hist[i].id==0){
    					hist[i].id=i+1;
    					strcpy(hist[i].nama_kapal,nama_kapal[return_arr[selection-1]]);
                        hist[i].harga=Detkap[return_arr[selection-1]].harga;
    					counter+=1;
    					goto menu;
    				}
    			}
    		}
    		else{
    			goto menu;
    		}
        }
		else if(selection==2){
    		printf("Lihat detail kapal nomor : ");
            scanf("%d", &selection);
            printDetailKapal(selection-1,nama_kapal[selection-1]);	
    		printf("Sewa kapal \n1. Sewa \n2. Tidak\n==========================\nPilih Menu :");
    		scanf("%d", &select2);
            if(select2==1){
    			if(counter==10){
    					printf("History maksimal 10\n");
    					goto menu;
    				}
                pembayaran(Detkap[selection-1].harga);
    			for(int i=0;i<10;i++)
    			{
    				if(hist[i].id==0){
    					hist[i].id=i+1;
    					strcpy(hist[i].nama_kapal,nama_kapal[selection-1]);
                        hist[i].harga=Detkap[selection-1].harga;
    					counter+=1;
    					goto menu;
    				}
    			}
    		}
    		else{
    			goto menu;
    		}
		}
    menu:
    printf("=======Main Menu========\n");
    printf("1. Lihat History\n");
    printf("2. Sewa Lagi\n");
    printf("3. Ke Menu Awal\n");
    printf("==========================\n");
    printf("Pilih Menu : ");
    scanf("%d",&selection);
    if(selection == 1){
    	printf("=============================\n");
        printf("1. Urutkan berdasarkan nama\n");
        printf("2. Urutkan berdasarkan ID\n");
        printf("==========================\n");
        printf("Pilih Menu : ");
        scanf("%d",&selection);
        if(selection==1){
            int tmp_cnt=0;
            const char *tmp_arr[]={};
            const char **ptr = tmp_arr;
            for(int i=0;i<10;i++){
    			if(hist[i].id!=0){
    				ptr[i]=hist[i].nama_kapal;
                    tmp_cnt+=1;
    			}
    		}
            sort(tmp_arr, tmp_cnt); 
            printf("==========================\n");
            printf("No. Nama Kapal\tHarga\n");
            printf("==========================\n");
            for(int i=0;i<tmp_cnt;i++){
    			printf("%d.  %s\t",hist[i].id,tmp_arr[i]);
                for(int j=0;j<10;j++){
    			    if(hist[j].id!=0){
    				    if(hist[j].nama_kapal==tmp_arr[i])
                        {
                            printf("%d\n",hist[j].harga);
                            break;
                        }
    			    }
    		    }
    		}
            goto menu;
        }
        else if(selection==2){
        printf("==========================\n");
        printf("No. Nama Kapal\tHarga\n");
        printf("==========================\n");
        for(int i=0;i<10;i++){
    		if(hist[i].id!=0){
    				printf("%d.  %s\t%d\n",hist[i].id,hist[i].nama_kapal,hist[i].harga);
    			}
    		}
        goto menu;
        }
    }
    else if(selection==2){
        goto menu_kapal;
    }
    else if(selection==3){
        goto menu_login;
    }
    else{
    	printf("Input tidak diketahui\n");
    	exit(0);
    }
    return 0;
}



void printDetailKapal(int selection,char *nama)  
{  
	int seat[6] = {10,6,14,24,18,20};
    printf("===================\nKapal %s\n",nama);
    printf("===================\nJumlah Seat:\n%d seat \n===================\nList Destinasi :\n%s\n===================\nHarga:\nRp%d,00\n===================\nFitur:\n%s\n===================\n", seat[selection],Detkap[selection].destinasi,Detkap[selection].harga,Detkap[selection].fitur);
}  

void pembayaran(int harga)
{
    int selection;
    printf("========Pembayaran=======\n");
    printf("1. Tunai\n");
    printf("2. Transfer\n");
    printf("Pilih menu : ");
    scanf("%d",&selection);
    if(selection==1)
    {
        printf("Harga : Rp%d,00 \nSilahkan membayar ketika datang ke tempat persewaan\n",harga);
    }
    else if(selection==2)
    {
        printf("=====List Bank=====\n");
        printf("1. Mandiri\n");
        printf("2. BRI\n");
        printf("3. BCA\n");
        printf("Pilih menu : ");
        scanf("%d",&selection);
        if(selection==1)
        {
            printf("Silahkan transfer ke 123123 a.n coba dengan nominal Rp%d,00\n",harga);
        }
        else if(selection==2)
        {
            printf("Silahkan transfer ke 456456 a.n try dengan nominal Rp%d,00\n",harga);
        }
        else if(selection==3)
        {
            printf("Silahkan transfer ke 789789 a.n tryagain dengan nominal Rp%d,00\n",harga);
        }
    }
}
