#include<stdio.h>
#include<string.h>
int main(){
	struct Students{
		int id;
		char name[50];
		int age;
		char phone[20];
	};
	
	struct Students student[50];
	int i=0;
	int n;
	printf("nhap so sinh vien ban muon them\n");
	scanf("%d",&n);
	fflush(stdin);
	
	for(i=0;i<n;i++){
		student[i].id=i+1;
		
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
	for(j=0;j<n;j++){
		printf("Thong tin sinh vien %d:\n",student[i].id);
    	printf("Ho va ten: %s\n", student[j].name);
    	printf("Tuoi: %d\n", student[j].age);
    	printf("So dien thoai: %s\n", student[j].phone);
	}
	return 0;
}
