#include<stdio.h>

int main()
{
	int currentLength , arr[100];
	printf("\nMoi ban nhap so luong phan tu : ");
	scanf("%d",&currentLength);
	arr[currentLength];
	printf("\nMoi ban nhap cac phan tu :");
	for(int i = 0 ; i < currentLength ; i++)
	{
		printf("\narr[%d] = ", i );
		scanf("%d",&arr[i]);
	}
	printf("\nMang ban dau la :");
	for(int i = 0 ; i < currentLength ; i++)
	{
		printf("%d ",arr[i]);
	}
	int viTri;
	printf("\nMoi ban nhap vao vi tri ban muon xoa :");
	scanf("%d",&viTri);
	if( viTri > 0 && viTri < currentLength )
	{
		for(int i = viTri ; i < currentLength - 1 ; i++)
		{
			arr[i]=arr[i + 1];
		}
		currentLength--; 
		printf("\nMang sau khi xoa la : ");
		for(int i =0 ; i < currentLength; i++)
		{
			printf("%d ",arr[i]);
		}
	}
	else
	{
		printf("\nVi tri xoa khong hop le ...");
	}	
	return 0 ; 
}