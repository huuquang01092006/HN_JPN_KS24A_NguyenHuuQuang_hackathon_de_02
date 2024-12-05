#include<stdio.h>
int main (){
	int array[100];
	int choice, number = 0;
	int chan = 0, le = 0;
	int max, maxSt2, index, value;
	do{
		printf("\nMENU\n");
		printf("1.nhap so phan tu va gia tri cho mang \n");
		printf("2.in ra cac gia tri cua phan tu \n");
		printf("3.so luong cac phan tu chan le trong mang \n");
		printf("4.gia tri lon thu hai cua mang \n");
		printf("5.them mot phan tu vao mang \n");
		printf("6.xoa mot phan tu trong mang \n");
		printf("7.sap xep mang theo thu tu giam dan(insertion sort) \n");
		printf("8.tim kiem phan tu trong mang \n");
		printf("9.in ra toan bo so nguyen to trong mang \n");
		printf("10.sap xep mang theo thu tu giam dan(bubble sort) \n");
		printf("11.thoat \n");
		printf("\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				le = 0;
				chan = 0;
				printf("nhap so phan tu cua mang: ");
				scanf("%d", &number);
				for(int i = 0; i < number; i++){
					printf("gia tri cua phan tu thu %d: ", i + 1);
					scanf("%d", &array[i]);
				}
				break;
			case 2:
				for(int i = 0; i < number; i++){
					printf("arr[%d] = %d\n", i, array[i]);
				}
				break;
			case 3:
				for(int i =0; i < number; i++){
					if(array[i] % 2 == 0){
						chan++;
					}
					else{
						le++;
					}
				}
				printf("so luong so chan trong mang la: %d\n", chan);
				printf("so luong so le trong mang la: %d", le);
				break;
			case 4:
				max = array[0];
				for(int i = 0; i < number; i++){
					if(array[i] > max){
						max = array[i];
				    }
				}
				printf("gia tri lon thu hai trong mang: %d", max);
				break;
			case 5:
				printf("nhap gia tri muon them: ");
				scanf("%d", &value);
				index = 0;
				for(int i = number; i > index; i--){
					array[i] = array[i-1]; 
				}
				number++;
				array[index] = value;
				break;
			case 6:
				printf("nhap phan tu muon xoa: ");
				scanf("%d", &value);
				index = -1;
				for(int i = 0; i < number; i++){
					if(array[i] == value){
						index = i;
						break;
					}
				}
				if(index != -1){
					for(int i = index; i < number - 1; i++){
						array[i] = array[i + 1];
					}
					number--;
				}
				else{
					printf("phan tu khong ton tai");
				}
				break;
			case 10:
				for(int i = number; i > 0 ; i--){
					for(int j = i - 1; j > -1; j--){
						if (array[i] > array[j]){
							int temp = array[i];
							array[i] = array[j];
							array[j] = temp;
						}
					}
				}
				break;
			case 11:
				printf("thoat chuong trinh");
				return 0;
			default:
				printf("so khong hop le");
				break;
	}
	}while(choice != 11);
	return 0;
}
