#include <bits/stdc++.h>
#define ll long long
#define itn int

#define mod 1000000007
#define MAX 100005

#define fast ios_base :: sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define test int t; cin >> t; while(t--)
#define inp(n) int n;cin >> n;
#define inpa(i, j) int i[j]; for(int k=0;k<j;k++) cin >> i[k];
#define mp make_pair
#define pb push_back
#define bsearch binary_search
#define lbound lower_bound
#define ubound upper_bound
#define all(n) n.begin(), n.end()
#define forl(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define mii map<int,int>
#define vi vector<int>
#define yn(i) (i>0 ? "YES" : "NO")
#define mset(i,j) memset(i, j, sizeof(i))

//#define int long long


using namespace std;
int a[1000007];
vector <int> sievev;
void sieve()
{
    for(int i=0;i<=1000006;i++)
    a[i] = 1;
    
    a[0]=a[1]=0;
    for(int i=2;i<=1000;i++)
    {
        if(a[i] == 1)
        {
            sievev.push_back(i);
            for(int j=2*i;j<=1000000;j=j+i)
            a[j] = 0;
        }
    }
    for(int i=1001;i<=1000000;i++)
        if(a[i]==1)
            sievev.push_back(i);
}

template<class typ> class SegTree{int n,N; typ *arr,*tree; int built=0; public: SegTree(){n=0;} SegTree(typ a[],int nn) { n = nn; arr = new typ[n]; arr = a; N = 100000; tree = new typ[N*2]; } SegTree(int nn){ n = nn; arr = new typ[n]; N = 100000; tree = new typ[N*2];} typ& operator[](int i){return arr[i];} void build(){ for (int i=0; i<n; i++) tree[n+i] = arr[i]; for (int i = n - 1; i > 0; --i) tree[i] = tree[i<<1] + tree[i<<1 | 1]; built=1;} void update(int p, typ value){if(!built) build(); tree[p+n] = value; p = p+n; for (int i=p; i > 1; i >>= 1) tree[i>>1] = tree[i] + tree[i^1];} typ query(int l, int r){ if(!built) build(); typ res = 0; for (l += n, r += n+1; l < r; l >>= 1, r >>= 1){ if (l&1) res += tree[l++]; if (r&1) res += tree[--r];} return res;}};

int fpow(int x,int n)
{
    if(n==1)
        return x;
    if(n==0)
        return 1;
    if(n%2==0){
    int y = fpow(x,n/2);
    return (y*y);
    }
    return (x*fpow(x,n-1));
}

int fpowmod(int x, int y, int p) 
{ 
    int res = 1;
  
    x = x % p;
  
    while (y > 0) 
    {
        if (y & 1) 
            res = (res*x) % p;
        
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int modInv(int n, int p) 
{ 
    return fpowmod(n, p-2, p);
}

int ncr(int n, int r, int p, int fac[]) 
{ 
   if (r==0) 
      return 1; 
    return (fac[n]* modInv(fac[r], p) % p * 
            modInv(fac[n-r], p) % p) % p;
}

void calcFac(int fac[], int n, int p)
{
	fac[0] = 1; 
    	for (int i=1 ; i<=n; i++) 
        	fac[i] = fac[i-1]*i%p; 
}

int fac[MAX]; 

int32_t main() {
	
	fast;
	
	test{
	    
	}
	
	return 0;
}
