#include <iostream>

using namespace std;
#include "function1.h"
int max(int a, int b) { return (a > b) ? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
if (n == 0 || W == 0) // Base Case 
return 0;
if (wt[n - 1] > W)
return knapSack(W, wt, val, n - 1);
 
else
return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), 
knapSack(W, wt, 
val, n - 1));
}
