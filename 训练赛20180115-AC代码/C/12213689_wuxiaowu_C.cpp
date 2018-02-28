#include <stdio.h>
#include <string.h>
#include <malloc.h>
// SString是数组，故不需引用类型
#define OK 1
#define TRUE 1
#define FALSE 0
#define ERROR 0
#define INFEASIBLE -1

#define DestroyString ClearString // DestroyString()与ClearString()作用相同
#define MAX_STR_LEN 200 // 用户可在255(1个字节)以内定义最大串长
typedef char SString[MAX_STR_LEN+1]; // 0号单元存放串的长度
typedef int Status; // Status是函数的类型,其值是函数结果状态代码，如OK等


Status StrAssign(SString T,char *chars)
{
    // 生成一个其值等于chars的串T
    int i;
    if(strlen(chars)>MAX_STR_LEN)
        return ERROR;
    else
    {
        T[0]=strlen(chars);
        for(i=1; i<=T[0]; i++)
            T[i]=*(chars+i-1);
        return OK;
    }
}

void StrCopy(SString T,SString S)
{
    // 由串S复制得串T
    int i;
    for(i=0; i<=S[0]; i++)
        T[i]=S[i];
}

Status StrEmpty(SString S)
{
    // 若S为空串，则返回TRUE，否则返回FALSE
    if(S[0]==0)
        return TRUE;
    else
        return FALSE;
}



int StrLength(SString S)
{
    // 返回串S的元素个数
    return S[0];
}

void ClearString(SString S)
{
    // 初始条件：串S存在。操作结果：将S清为空串
    S[0]=0; // 令串长为零
}






void get_nextval(SString T,int nextval[])
{
    // 求模式串T的next函数修正值并存入数组nextval。算法4.8
    int i=1,j=0;
    nextval[1]=0;
    while(i<T[0])
        if(j==0||T[i]==T[j])
        {
            ++i;
            ++j;
            if(T[i]!=T[j])
                nextval[i]=j;
            else
                nextval[i]=nextval[j];
        }
        else
            j=nextval[j];
}

int Index_KMP(SString S,SString T,int pos,int next[])
{
    // 利用模式串T的next函数求T在主串S中第pos个字符之后的位置的KMP算法。
    // 其中，T非空，1≤pos≤StrLength(S)。算法4.6
    int i=pos,j=1;
    while(i<=S[0]&&j<=T[0])
        if(j==0||S[i]==T[j]) // 继续比较后继字符
        {
            ++i;
            ++j;
        }
        else // 模式串向右移动
            j=next[j];
    if(j>T[0]) // 匹配成功
        return i-T[0];
    else
        return -1;
}

int main()
{
    int i,*p;
    SString s1,s2,T;
    while(~scanf("%s",T))
    {
        StrAssign(s1,T);
        StrAssign(s2,"bkpstor");
        p=(int*)malloc((StrLength(s2)+1)*sizeof(int));
        get_nextval(s2,p);
        i=Index_KMP(s1,s2,1,p);
        if(i>=0)
            printf("Warning\n");
        else
            printf("Safe\n");
    }

    
    
    
    
}
