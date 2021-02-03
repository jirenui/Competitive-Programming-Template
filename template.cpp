#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <string.h>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <math.h>
#include <limits>
#include <iterator>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <climits>
#include<assert.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

ll gcd(ll a, ll b) {
	while (b > 0)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

ll lcm(ll a, ll b) {
	ll x = a, y = b;
	a = gcd(a, b);
	return x / a * y;
}

ll power(ll a, ll b) {
	ll product = 1;
	while (b)
	{
		if ((b & 1) == 1)
			product *= a;
		a *= a;
		b /= 2;
	}
	return product;
}

void test() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		
	}
}

int main() {
    /*
    Use test() if you need to...
    */
	test();
	return 0;
}
