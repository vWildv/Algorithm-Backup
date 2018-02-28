#include<stdio.h>

int Search(int x);

void func(int x,int y);

int arr[1010];

int main(){
    int t,n;
    int x,y,i,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(i = 1;i<=n;i++) arr[i] = i;
            for(i = 1;i<=m;i++){
                scanf("%d%d",&x,&y);
                func(x,y);
            }
        int numb = 0;
        for(i = 1;i<=n;i++){
            if(arr[i] == i) 
                numb++;
        }
        printf("%d\n",numb);
    }
    return 0;
}

int Search(int m){
    if(m == arr[m]){
        return m;
    }else{
        return (arr[m] = Search(arr[m]));
    }
}

void func(int x,int y){
    int pt1 = Search(x);
    int pt2 = Search(y);
    arr[pt1] = pt2;
}