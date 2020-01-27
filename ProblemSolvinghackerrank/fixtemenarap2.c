#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printhistory(int jenis);

struct history {
    int id;
    char nama[50];
    int harga;
    int jumlah;
    int jenis;
} hist[20];

struct detailikan {
    int id;
    char nama[50];
    int jenis;
    int stok;
    int harga;
} Detik[6];

int cek_harga(int jumlah,int harga)
{
    int result;
    result=jumlah*harga;
    return result;
}

int main() {
    strcpy(Detik[0].nama,"pari");
    strcpy(Detik[1].nama,"kakap");
    strcpy(Detik[2].nama,"tuna");
    strcpy(Detik[3].nama,"koi" );
    strcpy(Detik[4].nama,"lele" );
    strcpy(Detik[5].nama,"mujair" );
    Detik[0].id=0;
    Detik[1].id=1;
    Detik[2].id=2;
    Detik[3].id=3;
    Detik[4].id=4;
    Detik[5].id=5;
    Detik[0].harga=30000;
    Detik[1].harga=10000;
    Detik[2].harga=50000;
    Detik[3].harga=12000;
    Detik[4].harga=5000;
    Detik[5].harga=8000;
    Detik[0].jenis=1;
    Detik[1].jenis=1;
    Detik[2].jenis=1;
    Detik[3].jenis=2;
    Detik[4].jenis=2;
    Detik[5].jenis=2;
    Detik[0].stok=3;
    Detik[1].stok=4;
    Detik[2].stok=5;
    Detik[3].stok=4;
    Detik[4].stok=3;
    Detik[5].stok=2;
    int selection,counter1=0,counter2=0;
    menu_awal:
    printf("==========================\n");
    printf("||   Selamat Datang di Provitgo   ||\n");
    printf("==========================\n");
    printf("1. Lihat harga ikan\n");
    printf("2. Beli ikan\n");
    printf("3. Jual ikan\n");
    printf("4. Cari ikan\n");
    printf("5. History Pembelian\n");
    printf("6. Selesai\n");
    printf("==========================\n");
    printf("Pilih menu: ");
    scanf("%d", &selection);
    if(selection==1){
            menu_lihat:
            printf("==========================\n");
            printf("1. Ikan air asin\n");
            printf("2. Ikan air tawar\n");
            printf("3. Kembali ke menu awal\n");
            printf("==========================\n");
            printf("Pilih menu: ");
            scanf("%d",&selection);
            if(selection==1){
                printf("==========================\n");
                printf("No  Nama Ikan\tHarga\t\tStok\n");
                for(int i=0;i<6;i++){
                    if(Detik[i].jenis==1){
                        printf("%d   %s\tRp%d,00\t%d kg\n",i+1,Detik[i].nama,Detik[i].harga,Detik[i].stok);
                    }     
                }
                printf("===========================\n");
                printf("1. Urutkan dari harga termurah\n");
                printf("2. Urutkan dari harga termahal\n");
                printf("3. Kembali ke menu awal\n");
                printf("Pilih menu: ");
                scanf("%d",&selection);
                int a[3] = {};
                    int i = 0, j = 0, tmp;
                    for(int k=0;k<3;k++){
                        a[k]=Detik[k].harga;
                    }

                    // bubble sort
                    for (i = 0; i < 3; i++) {  
                        for (j = 0; j < 3 - i - 1; j++) { 
                            if (a[j] > a[j + 1]) { 
                            tmp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = tmp;
                        }
                    }
                }
                if(selection==1)
                {
                    // linear search
                    printf("=====================================\n");
                    printf("No  Nama Ikan\tHarga\t\tStok\n");
                    printf("=====================================\n");
                    for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                            if(a[i]==Detik[j].harga){
                            printf("%d    %s\tRp%d,00\t%d kg\n",i+1,Detik[j].nama,Detik[j].harga,Detik[j].stok);
                            }
                        }
                    }
                    goto menu_lihat;
    
                }
                else if(selection==2)
                {
                    for(int i=2;i>=0;i--){
                        for(int j=0;j<3;j++){
                            if(a[i]==Detik[j].harga){
                            printf("%d   %s\tRp%d,00\t%d kg\n",i+1,Detik[j].nama,Detik[j].harga,Detik[j].stok);
                            }
                        }
                    }
                    goto menu_lihat;
                }   
                else if(selection==3)
                {
                    goto menu_awal;
                }
            }
            else if(selection==2)
            {
                printf("==========================\n");
                printf("No  Nama Ikan\tHarga\t\tStok\n");
                for(int i=0;i<6;i++){
                    int j=0;
                    if(Detik[i].jenis==2){
                        printf("%d  %s\tRp%d,00\t%d kg\n",j+1,Detik[i].nama,Detik[i].harga,Detik[i].stok);
                        j+=1;
                    }     
                }
                printf("===========================\n");
                printf("1. Urutkan dari harga termurah\n");
                printf("2. Urutkan dari harga termahal\n");
                printf("3. Kembali ke menu awal\n");
                printf("Pilih menu: ");
                scanf("%d",&selection);
                int a[3] = {};
                    int i = 0, j = 0, tmp;
                    for(int k=3;k<6;k++){
                        a[k-3]=Detik[k].harga;
                    }

                    // bubble sort
                    for (i = 0; i < 3; i++) {  
                        for (j = 0; j < 3 - i - 1; j++) { 
                            if (a[j] > a[j + 1]) { 
                            tmp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = tmp;
                        }
                    }
                }
                if(selection==1)
                {
                    // linear search
                    printf("=====================================\n");
                    printf("No  Nama Ikan\tHarga\t\tStok\n");
                    printf("=====================================\n");
                    for(int i=0;i<3;i++){
                        for(int j=3;j<6;j++){
                            if(a[i]==Detik[j].harga){
                            printf("%d    %s\tRp%d,00\t%d kg\n",i+1,Detik[j].nama,Detik[j].harga,Detik[j].stok);
                            }
                        }
                    }
                    goto menu_lihat;
    
                }
                else if(selection==2)
                {
                    for(int i=2;i>=0;i--){
                        for(int j=3;j<6;j++){
                            if(a[i]==Detik[j].harga){
                            printf("%d    %s\tRp%d,00\t%d kg\n",i+1,Detik[j].nama,Detik[j].harga,Detik[j].stok);
                            }
                        }
                    }
                    goto menu_lihat;
                }
                else if(selection==3)
                {
                    goto menu_awal;
                }
            }
            else if(selection==3){
                goto menu_awal;
            }
            
    }
    else if(selection==2)
    {
        int check1=0,tmp_jumlah,tmp_id,total_harga;
        char tmp_nama[20];
        printf("===================\n");
        printf("1. Ikan air asin\n");
        printf("2. Ikan air tawar\n");
        printf("Pilih Menu : ");
        scanf("%d",&selection);
        if(selection==1){
            menu_beli1:
            printf("==================\n");
            printf("1. Masukkan nama ikan\n");
            printf("2. Masukkan Jumlah / kg\n");
            printf("Pilih Menu : ");
            scanf("%d",&selection);
            if(selection==1){
                printf("Nama ikan : ");
                scanf("%s",tmp_nama);
                for(int i=0;i<3;i++){
                    if(strcmp(tmp_nama,Detik[i].nama)==0){
                        printf("Ikan %s sukses ditambahkan ke keranjang\n",Detik[i].nama);
                        tmp_id=i;
                        check1=1;
                        goto menu_beli1;
                        
                    }
                }
                if(check1==0){
                    printf("Nama ikan tidak ditemukan\n");
                    goto menu_beli1;
                }
            }
            else if(selection==2){
                if(check1==0){
                    printf("Harap memasukkan nama ikan terlebih dahulu");
                    goto menu_beli1;
                }
                printf("Jumlah / kg : ");
                scanf("%d",&tmp_jumlah);
                if(tmp_jumlah>Detik[tmp_id].stok){
                    printf("Maaf stok di toko kami kurang\n");
                    goto menu_beli1;
                }
                else{
                    total_harga=cek_harga(tmp_jumlah,Detik[tmp_id].harga);
                    printf("============================\n");
                    printf("Total Harga : Rp%d,00\n",total_harga);
                    printf("============================\n");
                    if(counter1==10){
    					    printf("History maksimal 10\n");
    					    goto menu_awal;
    			    }
                    Detik[tmp_id].stok-=tmp_jumlah;
                    for(int j=0;j<10;j++)
    			        {
    				        if(hist[j].id==0){
    					        hist[j].id=j+1;
    					        strcpy(hist[j].nama,Detik[tmp_id].nama);
                                hist[j].harga=total_harga;
                                hist[j].jumlah=tmp_jumlah;
                                hist[j].jenis=1;
    					        counter1+=1;
                                goto menu_awal;
    				        }
    			        }
                }

            }

        }
        else if(selection==2){
            menu_beli2:
            printf("==================\n");
            printf("1. Masukkan nama ikan\n");
            printf("2. Masukkan Jumlah / kg\n");
            printf("Pilih Menu : ");
            scanf("%d",&selection);
            if(selection==1){
                printf("Nama ikan : ");
                scanf("%s",tmp_nama);
                for(int i=3;i<6;i++){
                    if(strcmp(tmp_nama,Detik[i].nama)==0){
                        printf("Ikan %s sukses ditambahkan ke keranjang\n",Detik[i].nama);
                        tmp_id=i;
                        check1=1;
                        goto menu_beli2;
                    }
                }
                if(check1==0){
                    printf("Nama ikan tidak ditemukan\n");
                    goto menu_beli2;
                }
            }
            else if(selection==2){
                if(check1==0){
                    printf("Harap memasukkan nama ikan terlebih dahulu");
                    goto menu_beli2;
                }
                printf("Jumlah / kg : ");
                scanf("%d",&tmp_jumlah);
                if(tmp_jumlah>Detik[tmp_id].stok){
                    printf("Maaf stok di toko kami kurang\n");
                    goto menu_beli2;
                }
                else{
                    total_harga=cek_harga(tmp_jumlah,Detik[tmp_id].harga);
                    printf("============================\n");
                    printf("Total Harga : Rp%d,00\n",total_harga);
                    printf("============================\n");
                    Detik[tmp_id].stok-=tmp_jumlah;
                    if(counter1==10){
    					    printf("History maksimal 10\n");
    					    goto menu_awal;
    			    }
                    Detik[tmp_id].stok-=tmp_jumlah;
                    for(int j=0;j<10;j++)
    			        {
    				        if(hist[j].id==0){
    					        hist[j].id=j+1;
    					        strcpy(hist[j].nama,Detik[tmp_id].nama);
                                hist[j].harga=total_harga;
                                hist[j].jumlah=tmp_jumlah;
                                hist[j].jenis=1;
    					        counter1+=1;
                                goto menu_awal;
    				        }
    			        }
                }

            }

        }
    }
    else if(selection==3)
    {
        int check1=0,tmp_jumlah,tmp_id,total_harga;
        char tmp_nama[20];
        printf("===================\n");
        printf("1. Ikan air asin\n");
        printf("2. Ikan air tawar\n");
        printf("Pilih Menu : ");
        scanf("%d",&selection);
        if(selection==1){
            menu_jual1:
            printf("==================\n");
            printf("1. Masukkan nama ikan\n");
            printf("2. Masukkan Jumlah / kg\n");
            printf("Pilih Menu : ");
            scanf("%d",&selection);
            if(selection==1){
                printf("Nama ikan : ");
                scanf("%s",tmp_nama);
                for(int i=0;i<3;i++){
                    if(strcmp(tmp_nama,Detik[i].nama)==0){
                        printf("Ikan %s sukses ditambahkan ke keranjang\n",Detik[i].nama);
                        tmp_id=i;
                        check1=1;
                        goto menu_jual1;
                    }
                }
                if(check1==0){
                    printf("Nama ikan tidak ditemukan\n");
                    goto menu_jual1;
                }
            }
            else if(selection==2){
                if(check1==0){
                    printf("Harap memasukkan nama ikan terlebih dahulu");
                    goto menu_jual1;
                }
                printf("Jumlah / kg : ");
                scanf("%d",&tmp_jumlah);
                total_harga=cek_harga(tmp_jumlah,Detik[tmp_id].harga);
                printf("============================\n");
                printf("Total Harga : Rp%d,00\n",total_harga);
                printf("============================\n");
                if(counter1==10){
    					    printf("History maksimal 10\n");
    					    goto menu_awal;
    			}
                Detik[tmp_id].stok+=tmp_jumlah;
                for(int j=10;j<20;j++)
    			    {
    				    if(hist[j].id==0){
    					    hist[j].id=j+1;
    					    strcpy(hist[j].nama,Detik[tmp_id].nama);
                            hist[j].harga=total_harga;
                            hist[j].jumlah=tmp_jumlah;
                            hist[j].jenis=2;
    					    counter2+=1;
                            goto menu_awal;
    				    }
    			    }

            }

        }
        else if(selection==2){
            menu_jual2:
            printf("==================\n");
            printf("1. Masukkan nama ikan\n");
            printf("2. Masukkan Jumlah / kg\n");
            printf("Pilih Menu : ");
            scanf("%d",&selection);
            if(selection==1){
                printf("Nama ikan : ");
                scanf("%s",tmp_nama);
                for(int i=3;i<6;i++){
                    if(strcmp(tmp_nama,Detik[i].nama)==0){
                        printf("Ikan %s sukses ditambahkan ke keranjang\n",Detik[i].nama);
                        tmp_id=i;
                        check1=1;
                        goto menu_jual2;
                    }
                }
                if(check1==0){
                    printf("Nama ikan tidak ditemukan\n");
                    goto menu_jual2;
                }
            }
            else if(selection==2){
                if(check1==0){
                    printf("Harap memasukkan nama ikan terlebih dahulu");
                    goto menu_jual2;
                }
                printf("Jumlah / kg : ");
                scanf("%d",&tmp_jumlah);
                total_harga=cek_harga(tmp_jumlah,Detik[tmp_id].harga);
                printf("============================\n");
                printf("Total Biaya yang anda dapatkan : Rp%d,00\n",total_harga);
                printf("============================\n");
                if(counter1==10){
    					    printf("History maksimal 10\n");
    					    goto menu_awal;
    			}
                Detik[tmp_id].stok+=tmp_jumlah;
                for(int j=10;j<20;j++)
    			    {
    				    if(hist[j].id==0){
    					    hist[j].id=j+1;
    					    strcpy(hist[j].nama,Detik[tmp_id].nama);
                            hist[j].harga=total_harga;
                            hist[j].jumlah=tmp_jumlah;
                            hist[j].jenis=2;
    					    counter2+=1;
                            goto menu_awal;
    				    }
    			    }
            }

        }
    }
    else if(selection==4){
        int tmp_budget;
        printf("========================\n");
        printf("1. Ikan air asin\n");
        printf("2. Ikan air tawar\n");
        printf("Pilih menu : ");
        scanf("%d",&selection);
        if(selection>2 || selection<1){
            printf("Maaf input tidak diketahui");
            goto menu_awal;
        }
        printf("Masukkan budget yang anda miliki : ");
        scanf("%d",&tmp_budget);
        if(selection==1){
            int j=0;
            printf("============Hasil Pencarian==========\n");
            printf("No  Nama Ikan\tHarga\t\tStok\n");
            printf("=====================================\n");
            for(int i=0;i<3;i++){
                //linear search
                if(tmp_budget>=Detik[i].harga){
                    printf("%d    %s\tRp%d,00\t%d kg\n",j+1,Detik[i].nama,Detik[i].harga,Detik[i].stok);   
                    j+=1;
                }
            }
            goto menu_awal;
        }
        if(selection==2){
            int j=0;
            printf("============Hasil Pencarian==========\n");
            printf("No  Nama Ikan\tHarga\t\tStok\n");
            printf("=====================================\n");
            for(int i=3;i<6;i++){
                //linear search
                if(tmp_budget>=Detik[i].harga){
                    printf("%d    %s\tRp%d,00\t%d kg\n",j+1,Detik[i].nama,Detik[i].harga,Detik[i].stok);   
                    j+=1;
                }
            }
            goto menu_awal;
        }
    }
    else if(selection==5)
    {
        printf("==========================\n");
        printf("1. Riwayat Pembelian\n");
        printf("2. Riwayat Penjualan\n");
        printf("Pilih menu : ");
        scanf("%d",&selection);
        if(selection==1){
            printhistory(1);
            goto menu_awal;
        }
        else if(selection==2){
            printhistory(2);
            goto menu_awal;
        }
    }
    else if(selection==6){
        printf("Terimakasih Telah Menggunakan aplikasi Provitgo\n");
        exit(0);
    }

	
    return 0;
}

void printhistory(int jenis)  
{  
    if(jenis==1){
        printf("========History Pembelian=========\n");
        printf("No  Nama Ikan\tTotal Harga\tJumlah\n");
            printf("=====================================\n");
        for(int i=0;i<10;i++){
            if(hist[i].id!=0){
                printf("%d    %s\tRp%d,00\t%d kg\n",i+1,hist[i].nama,hist[i].harga,hist[i].jumlah);   
            }
        }
    }
    else if(jenis==2){
        printf("========History Pembelian=========\n");
        printf("No  Nama Ikan\tTotal Harga\tJumlah\n");
            printf("=====================================\n");
        int j=0;
        for(int i=10;i<20;i++){
            if(hist[i].id!=0){
                printf("%d    %s\tRp%d,00\t%d kg\n",j+1,hist[i].nama,hist[i].harga,hist[i].jumlah);   
                j+=1;
            }
        }
    }
}  
