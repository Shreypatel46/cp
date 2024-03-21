#include<bits/stdc++.h>
using namespace std;
#define ll long long
int Brute(int n)
{
        int cnt2021 = n % 2020;
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
    if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      //cout << "YES\n";
      return 0;
    } else {
      return n;
    }
    }


int mySol(int n)
{
        if(n<2020)
            return n;
        else{
        int dig=n%2020;
        float z=float((n-dig))/2020;
        float x=(n-dig)/2020;
        if(x==z){
            int temp=z-dig;
            if(temp>=0 && (2020*temp+2021*dig==n))
                return 0;
            else
                return n;

        }
        else
            return n;
        }
        
    }
int main()
{

srand(time(NULL));
    int t=rand()%10000+1 ;
    while(t--){
        int n=rand()%1000000+1;
        if(Brute(n)!=mySol(n))
        {
            cout<<"n:"<<n<<endl;
            cout<<"expected:"<<Brute(n)<<endl;
            cout<<"Answer:"<<mySol(n)<<endl;
        }
    }
}