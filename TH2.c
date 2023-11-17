#include <stdio.h>
int main()
{
    int row, col, sum, max, min, count;
    printf("Lần lượt nhập số cột và số dòng của mảng 2 chiều ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    do
    {
        printf("1. Nhập giá trị các phần tử của mảng\n");
        printf("2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("3. In giá trị các phần tử là lẻ và tính tổng\n");
        printf("4. In ra các phần tử nằm trên đường biên và tính tích\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ và tính tổng\n");
        printf("6. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("7. Tính giá trị trung bình của các phần tử trong mảng (làm tròn xuống) và thống kê có bao nhiêu phần tử có giá trị bằng giá trị trung bình\n");
        printf("8. In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
        printf("9. Thoát\n");
        printf("Nhập lựa chọn của bạn");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    printf("arr[%d][%d]=", i, f);
                    scanf("%d", &arr[i][f]);
                }
            }

            break;
        case 2:
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    printf("arr[%d][%d]=%d\t", i, f, arr[i][f]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    if (arr[i][f] % 2 != 0)
                    {
                        sum += arr[i][f];
                        printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                    }
                }
            }
            break;
        case 4:
            sum = 0;
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    if (i == 0 || f == 0 || i == row - 1 || f == col - 1)
                    {
                        printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                        sum *= arr[i][f];
                    }
                }
            }
        case 5:
            if (row == col)
            {
                printf("Đường chéo chính của ma trận là\n");
                for (size_t i = 0; i < row; i++)
                {
                    printf("arr[%d][%d]=%d\n", i, i, arr[i][i]);
                }
                printf("Đường chéo phụ của ma trận là\n");
                int f = col;
                for (int i = 0; i < row; i++)
                {
                    printf("arr[%d][%d]=%d\n", i, f, arr[i][f]);
                    f--;
                }
            }
            else
                printf("Nhập lại số cột và số dòng\n");
        case 6:
            max = arr[0][0];
            min = arr[0][0];
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    max = (max > arr[i][f]) ? max : arr[i][f];
                    min = (min < arr[i][f]) ? min : arr[i][f];
                }
            }
            printf("Max=%d\tMin=%d\n", max, min);
            break;
        case 7:
            int averageValue = 0;
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    averageValue += arr[i][f];
                }
            }
            averageValue = averageValue / (row * col);
            count = 0;
            for (int i = 0; i < row; i++)
            {
                for (int f = 0; f < col; f++)
                {
                    if (averageValue == arr[i])
                    {
                        count++;
                    }
                }
            }
            printf("Trong mảng  có %d giá trị như vậy", count);
            break;
        case 8:
            count = 0;
            max=0;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    sum+=arr[i][j];
                }
                if (sum>max)
                {
                    count=i;
                }
            }
            printf("dòng có tổng giá trị các phần tử là lớn nhất là %d",sum);
        default:
            printf("Nhập lại");
            break;
        }
    } while (1 == 1);
}