#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0, p, q;
	for(int i = 0; i < n; i++){
		cin >> p >> q;
		if(q-p >= 2){
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
