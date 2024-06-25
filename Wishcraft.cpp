#include <bits/stdc++.h>
// #include 
using namespace std;
// #ifdef tabr
// #include "library/debug.cpp"
// #else
// #define debug(...)
// #endif

struct input_checker {
    string buffer;
    int pos;

    const string all = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const string number = "0123456789";
    const string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string lower = "abcdefghijklmnopqrstuvwxyz";

    input_checker() {
        pos = 0;
        while (true) {
            int c = cin.get();
            if (c == -1) {
                break;
            }
            buffer.push_back((char) c);
        }
    }

    int nextDelimiter() {
        int now = pos;
        while (now < (int) buffer.size() && buffer[now] != ' ' && buffer[now] != '\n') {
            now++;
        }
        return now;
    }

    string readOne() {
        // assert(pos < (int) buffer.size());
        int nxt = nextDelimiter();
        string res;
        while (pos < nxt) {
            res += buffer[pos];
            pos++;
        }
        // cerr << res << endl;
        return res;
    }

    string readString(int minl, int maxl, const string &pattern = "") {
        assert(minl <= maxl);
        string res = readOne();
        assert(minl <= (int) res.size());
        assert((int) res.size() <= maxl);
        for (int i = 0; i < (int) res.size(); i++) {
            assert(pattern.empty() || pattern.find(res[i]) != string::npos);
        }
        return res;
    }

    int readInt(int minv, int maxv) {
        assert(minv <= maxv);
        int res = stoi(readOne());
        assert(minv <= res);
        assert(res <= maxv);
        return res;
    }

    long long readLong(long long minv, long long maxv) {
        assert(minv <= maxv);
        long long res = stoll(readOne());
        assert(minv <= res);
        assert(res <= maxv);
        return res;
    }

    void readSpace() {
        assert((int) buffer.size() > pos);
        assert(buffer[pos] == ' ');
        pos++;
    }

    void readEoln() {
        assert((int) buffer.size() > pos);
        assert(buffer[pos] == '\n');
        pos++;
    }

    void readEof() {
        assert((int) buffer.size() == pos);
    }
};

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input5.txt", "r", stdin);
        freopen("output5.txt", "w", stdout);
    #endif
    input_checker in;
    int tt = in.readInt(1, 1e5);
    in.readEoln();
    // int tt = 1;
    while (tt--) {
        int l = in.readInt(1 , 1e5);
        in.readEoln();
        int x = in.readInt(0, l - 1);
        in.readSpace();
        int y = in.readInt(0, l - 1);
        in.readEoln();

        vector<int> v;
        for (int i = 0; i < l; i++) {
            int z = in.readInt(-1e9, 1e9);
            if (i == l - 1) in.readEoln();
            else in.readSpace();
            v.push_back(z);
        }

        int a,b;
        if(l==2){
            cout<<max(v[0],v[1])-min(v[0],v[1])<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int c=abs(v[l-1])+abs(v[0]);
        int i=1,j=l-2;
        int d=a+b;
        while(d-- && i<=j){
            if(abs(v[i])>abs(v[j])){
                c+=abs(v[i]);
                i++;
            }
            else{
                c+=abs(v[j]);
                j--;
            }
        }
        cout<<c<<endl;
    }

    in.readEof();
    return 0;
}