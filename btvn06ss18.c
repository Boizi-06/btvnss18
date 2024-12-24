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

	printf("moi ban nhap ten sinh vien muon them vao cuoi cung\n");
	fgets(students[n].name,sizeof(students[n].name),stdin);
	students[n].name[strcspn(students[n].name,"\n")]=0;
	printf("moi ban nhap vao so tuoi \n");
	scanf("%d",&students[n].age);
	getchar();
	printf("moi ban nhap so dien thoai \n ");
	fgets(students[n].phone,sizeof(students[n].phone),stdin);
	students[n].phone[strcspn(students[n].phone,"\n")]=0;
	n++;
	students[n].id=n+1;
	printf("\n");
	printf("danh sach sinh vien sau khi da sua la \n");
	int *idptr;
	idptr=&students[n].id;
	for(i=0;i<n;i++){
		printf("thong tin sinh vien thu %d\n",students[i].id);
		printf("ho va ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
	
	
	
	return 0;
}
