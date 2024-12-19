#include<stdio.h>
#include<string.h>
int main(){
	struct Students{
		char name[50];
		int age;
		char phone[20];
	};
	
	struct Students student[5];
	int i=0;
	for(i=0;i<5;i++){
		printf("nhap thong tin cho sinh vien thu %d \n",i+1);
		printf("nhap ho va ten\n");
		fgets(student[i].name,sizeof(student[i].name),stdin);
		fflush(stdin);
		printf("nhap so tuoi\n");
		scanf("%d",&student[i].age);
		fflush(stdin);
		printf("nhap so dien thoai\n");
		scanf("%s",student[i].phone);
		fflush(stdin);
	}
	int j=0;
	for(j=0;j<5;j++){
		printf("Thong tin sinh vien %d:\n",i+1);
    	printf("Ho va ten: %s\n", student[i].name);
    	printf("Tuoi: %d\n", student[i].age);
    	printf("So dien thoai: %s\n", student[i].phone);
	}
	return 0;
}
