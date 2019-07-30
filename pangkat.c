#include<stdio.h>

int pangkat(int x, int y);

int main(){
	int a,b, hasil;

	printf("masukkan X: ");
	scanf("%d",&a);


	printf("masukkan Y: ");
	scanf("%d",&b);

	printf("\nhasil %d pangkat %d adalah %d", a, b, pangkat(a,b));

return 0;
}


int pangkat(int x, int y){
	int hasil;

	if(y==0){
		hasil =1;
		return hasil;
	}
	else if(y==1){
		hasil = x;
		return hasil;
	}
	else{
		hasil = x * pangkat(x,y-1);
		return hasil;
	}

}

