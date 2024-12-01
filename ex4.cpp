//Kết hợp kiến thức từ các bài trước, xây dựng chương trình hiển thị và thực hiện các chức năng theo menu sau:

//	MENU

//Nhập vào mảng
//Hiển thị mảng
//Thêm phần tử
//Sửa phần tử
//Xóa phần tử
//Thoát
//  Lựa chọn của bạn: 
#include<stdio.h>

int main()
{
	int length ;//độ dài 
	printf("\n               Menu");
	int answer ;
	int arr[100];
	int soluongThem, vitriThem , giatriThem ; 
	int vi_tri;//5
	while(answer != 6 )
	{
		
		printf("\n1.Nhap vao mang . ");
		printf("\n2.Hien thi mang . ");
		printf("\n3.Them phan tu vao mang . ");
		printf("\n4.Sua phan tu . ");
		printf("\n5.Xoa phan tu . ");
		printf("\n6.Thoat . ");
		printf("\nLua chon cua ban : ");
		scanf("%d",&answer);
		switch(answer)
		{
			case 1 :
				printf("\nMoi ban nhap so luong phan tu :");
				scanf("%d",&length);
				printf("\nMoi ban nhap tung phan tu :");
				arr[length];
				for(int i = 0 ; i< length ; i++ )
				{
					printf("\narr[%d] = ",i);
					scanf("%d",&arr[i]);
					
				}
				printf("\n");
				break ; 
			case 2 :
				printf("\nHien thi mang :");
				for(int i = 0 ; i < length ; i++)
				{
					printf("%d ", arr[i]);
				}
				printf("\n");
				break ; 
			case 3 : 
				printf("\nMoi ban nhap so luong can them :");
				scanf("%d",&soluongThem);
				if(soluongThem < 0 || soluongThem > 100)
				{
					printf("\nSo luong nhap vao khong hop le :  ");
					return 0 ; 
				}
				
				for (int i = 0   ; i < soluongThem ; i++)
				{
					printf("\nMoi ban nhap vi tri them tu 0 den %d la : " , length );
					scanf("%d",&vitriThem);
					
       

        			if (vitriThem < 0 || vitriThem > length) {
            		printf("Vi tri khong hop le!\n");
            		i--;  
            		continue;
       				}

        			printf("Nhap gia tri phan tu: ");
        			scanf("%d", &giatriThem);

        			
       				for (int j = length; j > vitriThem; j--) {
            		arr[j] = arr[j - 1];
        			}

        		
        			arr[vitriThem] = giatriThem;
        			length++;  
        		}
    			break ; 
			case 4 :
				int vi_tri , gia_tri;
				
				printf("\nMoi ban nhap vi tri can sua :");
				scanf("%d",&vi_tri);
				if(vi_tri < 0 || vi_tri > length)
				{
					printf("\nVi tri sua khong hop le ");
					continue ; 
				}
				printf("\nMoi ban sua gia tri ");
				scanf("%d",&gia_tri);
				
				if(vi_tri>0 && vi_tri<length)
				{
					arr[vi_tri-1]=gia_tri;
				}
				
				break ; 
			case 5 : 
				printf("\nMoi ban nhap vi tri ban muon xoa : ");
				scanf("%d",&vi_tri);
				if(vi_tri > 0 && vi_tri < length )
				{
				
					for(int i = vi_tri ; i < length - 1 ; i++)
					{
						arr[i]=arr[i+1];
					}
					length--;
				}
				else
				{
					printf("\nKhong co vi tri nay trong mang...");
				}
				case 6 :
					printf("\nThoat chuong trinh ....");
				
		
		}
	}
}