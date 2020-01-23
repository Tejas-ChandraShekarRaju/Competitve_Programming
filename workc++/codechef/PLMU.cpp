/*
****CODECHEF SOLUTION*****
after counting the no.of twos and zeros i pick out combinations of these two counts damn i knew this was the answer!
void solve() {
	int n;
	cin >> n;
	map<int, int> cnt;
	for(int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		cnt[ai]++;
	}
	cout << cnt[0] * (cnt[0] - 1) / 2 + cnt[2] * (cnt[2] - 1) / 2 << endl;
}*/


#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin>>testCases;
        for(int t = 0;t<testCases;t++)
        {
            int n;
            cin>>n;
            int a[n];
            int count = 0;
                for(int i = 0;i<n;i++)
                {
                    cin>>a[i];
                       
                }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n && j!=i;j++)
                {
                    if((double)a[i]==(double)a[j]/((double)a[j]-1))
                    {
                        count++;
                    }
                }
            }
            cout<<count<<endl;
        }

	return 0;
}

/*
****CODECHEF SOLUTION*****
void solve() {
	int n;
	cin >> n;
	map<int, int> cnt;
	for(int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		cnt[ai]++;
	}
	cout << cnt[0] * (cnt[0] - 1) / 2 + cnt[2] * (cnt[2] - 1) / 2 << endl;
}*/