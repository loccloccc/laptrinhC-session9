//B1 Khai báo 1 mảng ( nhập từ bàn phím )
//B2 yêu cầu người dùng nhập vị trí sửa , giá trị sửa 
// B3 đè giá trị sửa vào giá trị cũ 
// B4 xuất ra màn hình
#include<stdio.h>

int main()
{
	//B1 
	int num ; 
	printf("\nMoi ban nhap so luong phan tu : ");
	scanf("%d",&num);
	int arr[num];
	printf("\nMoi ban nhap tung phan tu :");
	for(int i = 0 ; i < num ; i++)
	{
		printf("\narr[%d] = ", i );
		scanf("%d",&arr[i]);
	}
	printf("\nGia tri phan tu ban dau la :");
	for(int i = 0 ; i < num ; i++)
	{
		printf("%d ",arr[i]);
	}
	//B2 
	int vi_tri , gia_tri; 
	printf("\nMoi ban nhap vi tri can sua :");
	scanf("%d",&vi_tri);
	printf("\nMoi ban sua gia tri ");
	scanf("%d",&gia_tri);
	if(vi_tri>0 && vi_tri<num)
	{
		arr[vi_tri-1]=gia_tri;
		printf("\nMang sau khi thay doi la :");
		for(int i = 0 ; i< num ; i++)
		{
			printf("%d",arr[i]);
		}
	}
	else
	{
		printf("khong hop le ");
	}
	return 0 ; 
	

}