#include <bits/stdc++.h>
using namespace std;
bool check(int g1,int g2,int g3,int g4,int r1,int r2,int c1,int c2,int d1,int d2){
    return g1+g2==r1 && g3+g4==r2 && g1+g3==c1 && g2+g4==c2 && g1+g4==d1 && g2+g3==d2;
}
bool nums(int g1,int g2,int g3,int g4){
    return g1!=g2 && g1!=g3 && g1!=g4 && g2!=g3 && g2!=g4 && g3!=g4;
}
void solve(){
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for (int g1 = 1; g1 < 10; g1++)
    {
        for (int g2 = 1; g2 < 10; g2++)
        {
            for (int g3 = 1; g3 < 10; g3++)
            {
                for (int g4 = 1; g4 < 10; g4++)
                {
                    if(nums(g1,g2,g3,g4) && check(g1,g2,g3,g4,r1,r2,c1,c2,d1,d2)){
                        cout<<g1<<" "<<g2<<endl;
                        cout<<g3<<" "<<g4;
                        return;
                    }
                }
            }
        }
    }
    cout<<-1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}