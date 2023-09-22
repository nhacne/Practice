# include <stdio.h>

int cong(int num1, int num2); 	// khai bao ham tinh tong
int tru(int num1, int num2); 	// khai bao ham tinh hieu
int nhan(int num1, int num2);	//khai bao ham tinh tich
int chia(int num1, int num2);	//khai bao ham tinh thuong

int cong(int num1, int num2) {
	return num1 + num2;
}

int tru(int num1, int num2){
	return num1 - num2;
}
int nhan(int num1, int num2){
	return num1 * num2;
}
int chia(int num1, int num2){
	return num1 / num2;
}



int main (){
	int num1, num2, PhepCong, PhepTru, PhepChia, PhepNhan;  // Khai bao bien num theo kieu so nguyen
	
	printf("\n Nhap gia tri 1 : "); 
	scanf("%d",&num1);	// nhap gia tri 1
	printf("\n Nhap gia tri 2 : ");
	scanf("%d",&num2); // nhap gia tri 2
	
	PhepCong = cong(num1,num2);  // gan gia tri cho bien de lay gia tri tu ham
	printf("\n Ket qua phep cong : %d", PhepCong);
	
	PhepTru = tru(num1,num2);	// gan gia tri cho bien de lay gia tri tu ham
	printf("\n Ket qua phep tru : %d", PhepTru);
	
	PhepNhan = nhan(num1,num2);	  // gan gia tri cho bien de lay gia tri tu ham
	printf("\n Ket qua phep nhan : %d", PhepNhan);
	
	PhepChia = chia(num1,num2);	  // gan gia tri cho bien de lay gia tri tu ham
	printf("\n Ket qua phep chia : %d", PhepChia);
}
