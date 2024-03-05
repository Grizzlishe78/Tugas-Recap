#include <stdio.h>

int main() {
    int jumlahTransaksi, nominal, Total = 0;

    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
    } else {
        for (int i = 1; i <= jumlahTransaksi; ++i) {
            printf("Masukkan nominal transaksi ke-%d: ", i);
            scanf("%d", &nominal);
            Total += nominal;
        }

        printf("Total pengeluaran hari ini: %d\n", Total);
    }

    return 0;
}
