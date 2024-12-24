#include<stdio.h>
#include<string.h>

int main(){
	int i,n;
	struct Student{
		int id;
		char name[30];
		int age;
		char phone[20];
	};
	struct Student students[50];
	printf("moi ban nhap vao danh sach sinh vien \n");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		students[i].id=i+1;
		printf("moi ban nhap ten sinh vien thu %d\n",students[i].id);
		fgets(students[i].name,sizeof(students[i].name),stdin);
		students[i].name[strcspn(students[i].name, "\n")] = 0;
		printf("moi ban nhap so tuoi \n");
		scanf("%d",&students[i].age);
		getchar();		
		printf("moi ban nhap so dien thoai\n");
		fgets(students[i].phone,sizeof(students[i].phone),stdin);
		students[i].phone[strcspn(students[i].phone, "\n")] = 0; 
		printf("\n");	
	}
	printf("danh sach sinh vien ban dau la \n");
	for(i=0;i<n;i++){
		printf("thong tin sinh vien thu %d\n",students[i].id);
		printf("ho va ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
	int id;
	int d;
	printf("moi ban nhap stt cua sinh vien can sua\n");
	scanf("%d",&id);
	getchar();
	for(i=0;i<n;i++){
		if(students[i].id==id){
			d=1;
			printf("moi ban nhap ten muon sua\n");
			fgets(students[i].name,sizeof(students[i].name),stdin);
			students[i].name[strcspn(students[i].name,"\n")]=0;
			printf("moi ban nhap so tuoi muon sua\n");
			scanf("%d",&students[i].age);
			getchar();
		}
	}
	if(!d){
		printf("khong tim thay sinh vien\n");
	}
	printf("\n");
	printf("danh sach sinh vien sau khi da sua la \n");
	for(i=0;i<n;i++){
		printf("thong tin sinh vien thu %d\n",students[i].id);
		printf("ho va ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
	
	
	
	return 0;
}
