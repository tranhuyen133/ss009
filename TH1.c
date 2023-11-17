#include <stdio.h>
#include <math.h>
int main()
{
    int arr[100];
    int currentIndex = 0;
    do
    {
        int sum = 0, max, min, findNumber, count = 0;
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
        printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
        printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử có giá trị như vậy\n");
        printf("7. Thêm một phần từ vào vị trí chỉ định\n");
        printf("8. Thoát\n");
        int choice;
        printf("Nhập lựa chọn của bạn ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhấp số phần tử cần nhập của mảng ");
            int n;
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("arr[%d]=", currentIndex);
                scanf("%d", &arr[currentIndex]);
                currentIndex++;
            }

            break;
        case 2:
            for (int i = 0; i < currentIndex; i++)
            {
                printf("arr[%d]= %d\n", i, arr[i]);
            }
            break;
        case 3:
            printf("Các phần tử chẵn của mảng là \n");
            for (int i = 0; i < currentIndex; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    printf("arr[%d]= %d\n", i, arr[i]);
                    sum += arr[i];
                }
            }
            printf("Tổng của các số đó là %d\n", sum);
            break;
        case 5:
            printf("Các phần tử số nguyên tố của mảng là \n");
            sum = 0;
            for (int i = 0; i < currentIndex; i++)
            {
                count = 0;
                for (int j = 1; j <= sqrt(arr[i]); j++)
                {
                    if (arr[i] % j == 0 && j != 1)
                    {
                        count++;
                    }
                }
                if (count == 0 && arr[i] >= 2)
                {
                    printf("%d\n", arr[i]);
                    sum += arr[i];
                }
            }
            printf("Tổng của các số đó là %d", sum);
            break;

        case 4:
            max = arr[0];
            min = arr[0];
            for (int i = 0; i < currentIndex; i++)
            {
                max = (max > arr[i]) ? max : arr[i];
                min = (min < arr[i]) ? min : arr[i];
            }
            printf("Max=%d\tMin=%d\n", max, min);
            break;
        case 6:
            printf("Nhập số cần kiểm tra");
            scanf("%d", &findNumber);
            count = 0;
            for (int i = 0; i < currentIndex; i++)
            {
                if (findNumber == arr[i])
                {
                    count++;
                }
            }
            printf("Trong mảng  có %d giá trị như vậy", count);
            break;
        case 7:
            int addvalue, index;
            printf("Nhập phần tử cần thêm vào");
            scanf("%d", &addvalue);
            printf("Nhập vị trí chỉ định của phần tử đó");
            scanf("%d", &index);
            if (currentIndex > index)
            {
                for (int i = currentIndex; i > index; i--)
                {       
                    arr[i] = arr[i - 1];                
                }
            }
            else currentIndex=index+1;
            arr[index] = addvalue;
            printf("arr[%d]= %d", index, arr[index]);
            break;
        case 8:
            return 0;
        default:
            printf("Bạn phải nhập các số từ 1-8\n");
            break;
        }
    } while (1 == 1);
}