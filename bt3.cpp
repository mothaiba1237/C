#include <stdio.h>

int main() {
    int donvitt;
    double sotien, tygia;

    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8): ");
    scanf("%d", &donvitt);
    printf("Nhap so tien can chuyen doi: ");
    scanf("%lf", &sotien);
    switch (donvitt) {
        case 1:
            tygia = sotien * 23500;
            printf("%.2f USD = %.2f VND\n", sotien, tygia);
            break;
        case 2:
            tygia = sotien * 25000;
            printf("%.2f EUR = %.2f VND\n", sotien, tygia);
            break;
        case 3:
            tygia = sotien * 28000;
            printf("%.2f GBP = %.2f VND\n", sotien, tygia);
            break;
        case 4:
            tygia = sotien * 180;
            printf("%.2f JPY = %.2f VND\n", sotien, tygia);
            break;
        case 5:
            tygia = sotien / 23500;
            printf("%.2f VND = %.2f USD\n", sotien, tygia);
            break;
        case 6:
            tygia = sotien / 25000;
            printf("%.2f VND = %.2f EUR\n", sotien, tygia);
            break;
        case 7:
            tygia = sotien / 28000;
            printf("%.2f VND = %.2f GBP\n", sotien, tygia);
            break;
        case 8:
            tygia = sotien / 180;
            printf("%.2f VND = %.2f JPY\n", sotien, tygia);
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}

