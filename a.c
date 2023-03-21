//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>

/*void reverse1(char * str){
    assert(str);
    int len = strlen(str);
    char * left = str;
    char * right = str + len - 1;
    while(left < right){
        char temp = *left;
        *left = *right ;
        *right = temp;
        left++;
        right--;
    }
}

int main(){
    char a[18] = {0};
    int b[] = {1,2};
    printf("请输入想要的字符串");
    scanf("%s",a);
    reverse1(b);
    printf("%s",b);
}*/

/*
int main(){
    int a = 0;
    int n = 0;
    scanf("%d%d",&a,&n);
    int sum = 0;
    int ret = 0;
    for(int i =0;i < n;i++)
     {
        ret = ret * 10 + a;
        sum += ret;
    }
    printf("%d",sum);
}*/

/*int main() {
    int i = 0;
    for(i = 1;i < 100001;i++)
    {
        int temp = i;
        int sum = 0;
        int a = 1;
        while(temp /= 10)
        {
            a++;
        }
        temp = i;
        while(temp)
        {
            int b = temp % 10;
            sum += pow(b, a);
            temp = temp / 10;
        }
        if(i > 9)
        {
            if (sum == i)
            {
                printf("%d是水仙花数 ", i);
            }
        }
    }
}*/

/*
int main(){
    int money = 0;
    printf("你想给多少钱，请输入");
    scanf("%d",&money);
    int empty = money;
    int sum = money;
    while(empty >= 2){
        sum += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("一共可以喝%d瓶",sum);
}*/

/*
void change(int* str,int sz){
    int left = 0;
    int right = sz;
    while((left < right) && str[left] % 2 != 0){
        left++;
    }
    while((left < right) && str[right] % 2 == 0){
        right--;
    }
    while (left < right){
        int temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        break;
    }
}

int main() {
    int a[] = {1, 2, 3, 4,5,6,7,8,9,10};
    int b[] = {1,3,5,7,9,9,7,5,3,1};
    int sz = sizeof(b) / sizeof(b[0]) - 1;
    change(b,sz);
    for(int i = 0;i < sz;i++)
    {
    printf("%d",b[i]);
    }
}*/

/*//暴力求解法
void left_revolve(char* a,int k){
    assert(a != NULL);
    int len = strlen(a);
    for(int j = 0;j < k;j++){
        char temp = *a;
        for(int i = 0;i < len - 1;i++){
            *(a + i) = *(a + i + 1);
        }
        *(a + len - 1) = temp;
    }
}
int main(){
    char ch[] = "abcedf";
    char* ch1 = NULL;
    left_revolve(ch,2);
    printf("%s",ch);
}*/

//三部旋转法


/*
void reverse(char* a,int left1,int right1){ //逆序函数
    int left = left1;
    int right = right1 - 1;
    while (left < right){
        char temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}

void is_left_move(char* s1,char* s2){
    int len = strlen(ch);
    int i = 0;
    for(i = 0;i < len;i++){

    }
}

int main(){
    char ch[] = "abcdefhijkl";
    char ch1[] = "fhijklabcde";
    int len = strlen(ch);
    reverse(ch,0,3);//逆序左边
    printf("%s\n",ch);
    reverse(ch,3,len);//逆序右边
    printf("%s\n",ch);
    reverse(ch,0,len);//逆序总体
    printf("%s\n",ch);
}*/

/*
int is_left_move(char* str1,char* str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2)
    {
        return 0;
    }
    strncat(str1,str2,7);
    char* ret = strstr(str1,str2);
    if(ret == NULL)
    {
        return 0;
    }else
    {
        return 1;
    }

}

int main(){
    char arr1[30] = "abcdefg";
    char arr2[] = "cdefgab";
    int ret = is_left_move(arr1,arr2);
    if(ret == 1)
    {
        printf("YES");
    }else

        printf("NO");
    }*/
