#include <stdio.h>

int main() {
    printf("      第九章 排序       \n");
    printf("输入想要查看的排序的名称：");
    int InputYearOrSerilNo;
    scanf("%d",&InputYearOrSerilNo);
    switch (InputYearOrSerilNo){
        case 01: Shell_Sort_Main();
//        default:printf("无当前所选题库\n");
    }
    return 0;
}

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
    int a[] = {1,3,63,5,78,9,12,52,8};
    int n = sizeof(a)/ sizeof(int);
    Shell_Sort(a,n);
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}

//希尔排序 End
