#include <iostream>
#include<cstring>
#define ll long long
using namespace std;
ll A[100005], csum[100005], csum_mod_n[100005], freq[100005];
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
      


	// create a cumulative sum array
	
	
	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1] + A[i-1];
	}

	

	
	
	for(int i=0; i<=n; i++) {
		csum[i]%=n;
		csum_mod_n[i] = (csum[i]+n)%n;	
	}

	

	// int freq[1000]={0};
	
	memset(freq, 0, sizeof(freq));

	// for(int i=0; i<n; i++) {
	// 	freq[i] = 0;
	// }

	for(int i=0; i<=n; i++) {
		freq[csum_mod_n[i]]++;
	}

	


	ll count = 0;
	for(int i=0; i<n; i++) {
		ll x = freq[i];
		if(x > 1) {
			// count = count + ((x * (x-1)) / 2);
			count += x * (x-1) / 2;
		}
	}

	cout<< count<<endl;
}
}


