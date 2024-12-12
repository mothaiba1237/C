#include <stdio.h>

int main(){
	float gio,luong,phucap,tong,luongcoban;
	printf("nhap so gio lam viec trong thang: "); 
	scanf("%f" ,&gio);
	printf("nhap so muc luong theo gio: ");
	scanf("%f" ,&luong);
	luongcoban = gio * luong ;

	if (gio > 160) {
		phucap = luongcoban * 0.1 ;
	
	}
	 else{
		phucap = 0; 
	} 
	tong = luongcoban + phucap ;
	printf("tien luong cua ban la:%.2f",tong); 
	
	return 0; 
} 
