#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
int n;
int a[N];
int d[10];
int main() {
	//freopen("in.txt", "r", stdin);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	int cntColor=0;
	for (int i = 1; i <= n; i++) {
		if (1 <= a[i] and a[i] <= 399 and d[1]==false) {
			d[1] = true;
			cntColor++;
		}
		else if (400 <= a[i] and a[i] <= 799 and d[2]==false) {
			d[2] = true;
			cntColor++;
		}
		else if (800 <= a[i] and a[i] <= 1199 and d[3] == false) {
			d[3] = true;
			cntColor++;
		}
		else if (1200 <= a[i] and a[i] <= 1599 and d[4] == false) {
			d[4] = true;
			cntColor++;
		}
		else if (1600 <= a[i] and a[i] <= 1999 and d[5] == false) {
			d[5] = true;
			cntColor++;
		}
		else if (2000 <= a[i] and a[i] <= 2399 and d[6] == false) {
			d[6] = true;
			cntColor++;
		}
		else if (2400 <= a[i] and a[i] <= 2799 and d[7] == false) {
			d[7] = true;
			cntColor++;
		}
		else if (2800 <= a[i] and a[i] <= 3199 and d[8] == false) {
			d[8] = true;
			cntColor++;
		}
		if (a[i] >= 3200) {
			d[9]++;
		}
	}
	if(cntColor==0)
		printf("%d %d", d[9], d[9]);
	else
		printf("%d %d", cntColor, cntColor + d[9]);
	return 0;
}