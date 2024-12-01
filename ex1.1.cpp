#include<stdio.h>

int main() {
    int currentLength = 100;
    printf("Moi ban nhap so luong phan tu:");
    scanf("%d", &currentLength);

    
    if (currentLength > 100 || currentLength < 0) {
        printf("\nGia tri khong hop le .");
        return 0;
    }

    int arr[currentLength];
    printf("\nMoi ban nhap gia tri cac phan tu :");
    for (int i = 0; i < currentLength; i++) {
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("\nGia tri phan tu ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

    
    int addCount;
    printf("\n\nNhap so luong phan tu can them: ");
    scanf("%d", &addCount);

    
    if (currentLength + addCount > 100) {
        printf("\nKhong the them phan tu, so luong vuot qua gioi han.");
        return 0;
    }

    
    for (int i = 0; i < addCount; i++) {
        int position, value;

        
        printf("\nNhap vi tri can them (0 den %d): ", currentLength);
        scanf("%d", &position);

        if (position < 0 || position > currentLength) {
            printf("Vi tri khong hop le!\n");
            i--;  
            continue;
        }

        printf("Nhap gia tri phan tu: ");
        scanf("%d", &value);

        
        for (int j = currentLength; j > position; j--) {
            arr[j] = arr[j - 1];
        }

        
        arr[position] = value;
        currentLength++;  
    }

    
    printf("\nMang sau khi them: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
