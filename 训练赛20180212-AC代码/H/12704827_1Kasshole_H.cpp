#include<iostream>
#define MAXTIME 86400
using namespace std;

int main()
{
    long long num_days,time_read;
    while(cin>>num_days>>time_read){
        long long *work_time = new long long[num_days],sum = 0,Count = 0;
        for(int i=0;i<num_days;i++) cin>>work_time[i];
        for(int i=0;i<num_days;i++){
            time_read -= MAXTIME-work_time[i]; ++Count;
            if(0>=time_read)
                break;
        }
        cout<<Count<<endl;
        delete[] work_time;
    }
    return 0;
}