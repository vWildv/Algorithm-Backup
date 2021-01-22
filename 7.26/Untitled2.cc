#include <bits/stdc++.h>
using namespace std;

struct node{
    int v,pos;
}b[100005];
int vis[100005];
int a[100005];

int cnt=0;
void Merge(node *A,int left,int mid,int right,node *C){
	int i=left;
	int j=mid+1;
	int k=left;
	while(i <= mid && j <= right){
		if(A[i].v <= A[j].v){
			C[k++]=A[i++];
			//cnt++;
		}
		else{
			C[k++]=A[j++];
			cnt += mid-i+1;
			//printf("--%d %d %d\n",A[i].v,A[j-1].v,mid-i+1);
		}
	}
	while(i <= mid)
		C[k++]=A[i++];
	while(j <= right)
		C[k++]=A[j++];
	for(int i=left;i <= right;++i)
		A[i]=C[i];
}
void MergeSort(node *A,int left,int right,node *C)
{
	if(left < right)
	{
		int mid=(left+right)/2;
		MergeSort(A,left,mid,C);
		MergeSort(A,mid+1,right,C);
		Merge(A,left,mid,right,C);
	}
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].v);
    }
    int k=0;
    for(int i=1;i<=n;i++){
        if(a[i]<a[i+1]){
        }
    }
    MergeSort(a,0,n-1,c);
    for(int i=0;i<n;i++){
        if(vis[a[i].id]==0) cnt++;
        //printf("%d %d %d\n",vis[a[i].id],a[i].id,a[i].v);
    }
    printf("%d\n",cnt);
}


