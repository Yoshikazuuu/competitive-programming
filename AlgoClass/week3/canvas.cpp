#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long int factorial[22];
void fact()
{
    factorial[0]=1;
    long long int sum =1;
    for(int i=1; i<22; i++){
        sum*=i;
        factorial[i]=sum;
    }
}
int main()
{
    fact();
    long long int ans;
    int test;
    cin>>test;getchar();char str[25];
    for(int t=1; t<=test; t++){
        cin>>str;
        int len = strlen(str);
        sort(str,str+len);
        ans = factorial[len];
        for(int i=1; i<len; i++){
            int p=0;
            while(str[i]==str[i-1]){
                p++;
                i++;
            }
            ans = ans / factorial[p+1];
        }
        printf("Data set %d: %lld\n",t,ans);
    }

    return 0;
}