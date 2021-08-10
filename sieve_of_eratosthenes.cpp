#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
#define max 1000005
vector <int> primes;


void sieve()
{
	bool isPrime[max];
	for(int i = 0; i < max; i++)
		isPrime[i] = true;
	for(int i = 3; i * i <= max; i += 2)
	{
		if(isPrime[i]) // prime
		{
			for(int j = i * i; j <= max; j += 2 * i)
			{
				isPrime[j] = false; // not prime
			}
		}
	}
	primes.push_back(2);
	for(int i = 3; i <= max; i += 2)
	{
		if(isPrime[i])
		{
			primes.push_back(i);
		}	
	}
	for(int i = 0; i < 100; i++)
	{
		cout << primes[i] << endl;
	}		
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();
	return 0;
}