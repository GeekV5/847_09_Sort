#include <stdio.h>

int main() {
    printf("      第九章 排序       \n");
    printf("输入想要查看的排序的名称：");
    int InputYearOrSerilNo;
    scanf("%d",&InputYearOrSerilNo);
    switch (InputYearOrSerilNo){
        case 01: Insert_Sort_Main();
        case 02: Shell_Sort_Main();
        case 03: BubbleSort_Main();
//        default:printf("无当前所选题库\n");
    }
    return 0;
}

//直接插入排序 Start

/* 直接插入排序函数的实现
* array[] : 待排序的数组
* length : 待排序的数组的大小
*/
void Insertion_Sort(int array[], int length)
{
    int i, j;
    int temp; // 用来存放临时的变量
    for(i = 1; i < length; i++)
    {
        temp = array[i];
        for(j = i-1; (j >= 0)&&(array[j] > temp); j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = temp;
    }
}

/* 程序的入口函数 */
#define ARRAY_LENGTH 10
int Insert_Sort_Main()
{
    int a[ARRAY_LENGTH];
    int i;
    int d[3] = {5, 3, 1}; // 定义一个表示增量值的数组
    /* 输入10个整形元素 */
    printf("Input %d numbers : \n", ARRAY_LENGTH);
    for(i = 0; i < ARRAY_LENGTH; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    /* 把排序前元素都打印出来 */
    printf("直接插入排序-排序前的元素: \n");
    for(i = 0; i< ARRAY_LENGTH; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    /* 对元素进行有小到大的直接插入排序 */
    Insertion_Sort(a, ARRAY_LENGTH);

    /* 把排序后元素都打印出来 */
    printf("直接插入排序-排序后的元素: \n");

    for(i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

//直接插入排序 End

//希尔排序 Start
void Shell_Sort(int a[],int n)
{
    int i,j,d;
    for(d = n/2; d > 0;d/=2)
    {
        for ( i = d; i < n; ++i) {
            int temp = a[i];
            for (j = i; j >= d && a[j-d] > temp; j-=d) {
                a[j] = a[j-d];
            }
            a[j] = temp;
        }
    }
}
int Shell_Sort_Main()
{
    int a[] = {1,3,63,5,78,9,12,52,8,2,13,199,20,12,14,98,2018,2019};
    int n = sizeof(a)/ sizeof(int);
    Shell_Sort(a,n);
    printf("希尔排序结果：\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}

//希尔排序 End

//交换类排序-冒泡排序 Start
void BubbleSort(int R[],int n) //冒泡排序实现函数
{
    int flag;
    int temp;
    for (int i = n-1; i >= 1 ; --i) {
        flag = 0;
        for (int j = 1; j <= i ; ++j) {
            if(R[j-1] > R[j])
            {
                temp = R[j];
                R[j] = R[j-1];
                R[j-1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            return;;
        }
    }
}

int BubbleSort_Main()
{
    int Test[] = {12,21,323,1,34,13,15,16,33,22,2018,233};
    int n = sizeof(Test)/ sizeof(int);
    printf("冒泡排序原始数据：\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ",Test[i]);
    }
    printf("\n");
    BubbleSort(Test,n);
    printf("冒泡排序结果：\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ",Test[i]);
    }
    return 0;
}
//交换类排序-冒泡排序 End
























