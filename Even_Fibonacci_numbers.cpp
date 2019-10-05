#include <iostream>
using namespace std;

#define llu unsigned long long
int main()
{
	//freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	//freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
 	
 	llu tests;
  	cin >> tests;
  	while (tests--)
  	{
    	llu last;
    	cin >> last;

    	llu sum = 0, a = 1, b = 2;

    	while (b <= last)
    	{
      		if ((b & 1) == 0)
        		sum += b;

      		llu next = a + b;
      		a = b;
      		b = next;
    	}
    
    cout << sum << std::endl;
  }
  return 0;
}
