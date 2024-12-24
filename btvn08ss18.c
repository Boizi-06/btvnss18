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
	int position;
	do{
	printf("moi ban nhap vi tri cua sinh vien muon chen\n");
	scanf("%d",&position);
	}while(position<0||position>n);
	getchar();
	struct Student newstudent;
	printf("moi ban nhap thong tin sinh vien muon chen\n");
	printf("moi ban nhap ten\n");
	fgets(newstudent.name,sizeof(newstudent.name),stdin);
	newstudent.name[strcspn(newstudent.name,"\0")]=0;
	printf("moi ban nhap tuoi\n");
	scanf("%d",&newstudent.age);
	getchar();
	printf("moi ban nhap so dien thoai\n");
	fgets(newstudent.phone,sizeof(newstudent.phone),stdin);
	newstudent.phone[strcspn(newstudent.phone,"\0")]=0;
	printf("\n");
	for(i=n;i>position;i--){
		students[i]=students[i-1];
	}
	students[i]=newstudent;
	n++;
	
	printf("\n");
	printf("danh sach sinh vien sau khi da sua la \n");
	for(i=0;i<n;i++){
		printf("thong tin sinh vien thu %d\n",i+1);
		printf("ho va ten:%s\n",students[i].name);
		printf("tuoi:%d\n",students[i].age);
		printf("so dien thoai:%s\n",students[i].phone);
	}
	
	
	
	return 0;
}
