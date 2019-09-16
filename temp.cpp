/*Coded by Prathamesh Shiralkar (pnshiralkar)*/

#include <iostream>
#include <cmath>

#define ll long long
#define endl "\n";
#define mod 1000000007
//#define int long long


using namespace std;

template<class typ> class SegTree{int n,N; typ *arr,*tree; int built=0; public: SegTree(typ a[],int nn) { n = nn; arr = new typ[n]; arr = a; N = 100000; tree = new typ[N*2]; } SegTree(int nn){ n = nn; arr = new typ[n]; N = 100000; tree = new typ[N*2];} typ& operator[](int i){return arr[i];} void build(){ for (int i=0; i<n; i++) tree[n+i] = arr[i]; for (int i = n - 1; i > 0; --i) tree[i] = tree[i<<1] + tree[i<<1 | 1]; built=1;} void update(int p, typ value){if(!built) build(); tree[p+n] = value; p = p+n; for (int i=p; i > 1; i >>= 1) tree[i>>1] = tree[i] + tree[i^1];} typ query(int l, int r){ if(!built) build(); typ res = 0; for (l += n, r += n+1; l < r; l >>= 1, r >>= 1){ if (l&1) res += tree[l++]; if (r&1) res += tree[--r];} return res;}};

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    
    while(t--)
    {
		//int n; cin >> n; for(int i=0;i<n;i++)
    }

    return 0;
}
