#include <cmath>
#include <cstdio>
#include <map>
#include <set>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2; i <= sqrt(n); ++i) 
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n, t, k;
    map<int, int> mp;
    set<int> st;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t);
        mp.insert(make_pair(t, i));
    }
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d", &t);
        printf("%04d: ", t);
        if (mp[t] == 0) {  //注意，这样会在原map里添加一组键值对
            printf("Are you kidding?\n");
            continue;
        }
        if (st.find(t) != st.end()) printf("Checked\n");
        else if (mp[t] == 1) printf("Mystery Award\n");
        else if (isPrime(mp[t])) printf("Minion\n");
        else printf("Chocolate\n");
        st.insert(t);
    }
    return 0;
}
