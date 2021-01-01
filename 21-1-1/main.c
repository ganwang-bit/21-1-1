//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,x;
//    scanf("%d",&n);
//    int arr[n],i;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    scanf("%d",&x);
//    for(i=0;i<n;i++)
//            arr[i]^=x;
//    for(i=0;i<n;i++)
//    {
//        if(arr[i]!=0)
//            printf("%d ",arr[i]^x);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int count[5000]={0},n,i,x;
//    scanf("%d",&n);
//    int arr[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//        count[arr[i]]++;
//    }
//    for(i=0;i<n;i++)
//    {
//        if(count[arr[i]])
//        {
//            printf("%d ",arr[i]);
//            count[arr[i]]=0;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void*a,const void *b)
//{
//    return *(int*)a-*(int*)b;
//}
//int main()
//{
//    int n,m,i;
//    scanf("%d%d",&n,&m);
//    int arr[n+m];
//    for(i=0;i<n+m;i++)
//        scanf("%d",&arr[i]);
//    qsort(arr,n+m,sizeof(int),cmp);
//    for(i=0;i<n+m;i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j,tmp;
//    scanf("%d%d",&n,&m);
//    int arr[n+m];
//    for(i=0;i<n+m;i++)
//        scanf("%d",&arr[i]);
//    for(i=0;i<n+m-1;i++)
//    {
//        for(j=0;j<n+m-i-1;j++)
//            if(arr[j]>arr[j+1])
//            {
//                tmp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=tmp;
//            }
//    }
//    for(i=0;i<n+m;i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
