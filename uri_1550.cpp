#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

int vis[11000];

int rev(int n)
{
	int reverse = 0;
	while (n != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + n%10;
		n       = n/10;
	}
	cout<<<<reverse;
	return reverse;
}

int add(int n)
{
	n = n + 1;
	return n;
}

inline void inp(  int &n )
{
    n=0;
	int ch=getchar_unlocked();

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();

}

int bfs(int source, int sink)
{
	memset(vis, 0, sizeof vis);
	queue< pair < int, int > > q;
	q.push(make_pair(source,0));
	vis[source] = 1;
	while(!q.empty())
	{
		int sum, r;
		int here = q.front().first;
		int d = q.front().second;
		q.pop();


		sum = add(here); r = rev(here);
		if(sum > 11000 || r > 11000) continue;

		if(sum == sink) return d+1;
		else if( r == sink ) return d+1;
		else
		{
			if(vis[sum] != 1)
			{
				vis[sum] = 1;
				q.push(make_pair(sum, d+1));
			}
			if(vis[r] != 1)
			{
				vis[r] = 1;
				q.push(make_pair(r, d+1));
			}
		}
	}
}

int main(){
	int n;
	inp(n);
	while(n--)
	{
		int source, sink;
		inp(source); inp(sink);
		printf("%d\n", bfs(source,sink));
	}

}
