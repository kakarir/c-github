#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*qsort使用
 *int cmp(const void *a,const void *b) {
   return *(int*)a-*(int*)b;
}
int main() {
    int i=0;
    int first[]={1,5,3,7,4,8,2,3};
    qsort(first,sizeof(first)/sizeof(first[0]),sizeof(int),cmp);
    while(i<8) {

        const int j=0;
        printf("%d",*(first+i));
        i++;//通过变化i的递增或递减让输出在a-b不变的情况下实现递增或者递减
    }
}*/




/*斐波那契数组解法
int main() {
     int c;
    while(scanf("%d",&c)) {//第一个数和第二个数单独列出来，不参与循环,scanf多算几次
        if(c==2||c==1){
            printf("1\n");
        continue;
        }
        int ka[c];
        for(int i=0;i<c-2;i++) {//其他数字采用动态规划，c-2是为了和项数适应
            ka[0]=ka[1]=1;
            ka[i+2]=ka[i]+ka[i+1];
        }
         static int kaka=1;//输出一次包括输入项之前所有项的值
            while(kaka) {
                printf("only this time will give you all the number\n");
                for(int i=0;i<c;i++)
                printf("%d   ",ka[i]);
            kaka--;
                printf("\n");
            }
        printf("fib(%d)= %d\n",c,ka[c-1]);
    }
}
*/


/*倒叙3个数字
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d",b,c,a);
}
*/

/*100内3的倍数
int main() {
    int i=0;
    while(i<100)
        printf("%d\n",i+=3);
}*/

/*乘法口诀表
 *int main() {
for(int i=1;i<=9;i++) {
    for(int j=1;j<=i;j++) {
        printf("%dx%d=%-5d ",i,j,i*j);//靠左放置
    }
        printf("\n");
}
}*/


/*数列和
 *int main() {
    int i=1;
    float count=0;
    while(i<=100) {
        switch(i%2) {
            case 0:
                count-=1.0/i;//除法要改数据类型
            break;
            case 1:
                count+=1.0/i;
        }
        i++;
    }
    printf("%f",count);
}*/

/*闰年
 *int main() {
    for(int i=1000;i<=2000;i++)
    if(i%4==0&&i%100==0)
printf("%d\n",i);
}*/


/*//最大公因数
 *int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b) {
        while( a%b) {
            c=a%b;
            a=b;
            b=c;
        }
        printf("%d",b);
    }
    else if(b==a)
        printf("%d",a);
    else {
        while( b%a) {
            c=b%a;
            b=a;
            a=c;
        }
        printf("%d",c);
    }

}*/

/*质数
 *int main() {
    for(int i=101;i<200;i+=2) {
        int count=0;
        for(int j=2;j<=sqrt(i);j++) {
            if(i%j==0)
                break;
            else
                count++;
        }
        int t=sqrt(i);
        if(count==t-1)//直接用肯定永远都不相等
            printf("%d\n",i);
    }
}*/








