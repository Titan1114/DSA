// C++ program to count number of
// ways to group digits of a number
// such that sum of digits in every
// subgroup is less than or equal to
// its immediate right subgroup.
#include<bits/stdc++.h>
using namespace std;

// Function to find the subgroups
int countGroups(int position,
				int previous_sum,
				int length, char *num)
{
	// Terminating Condition
	if (position == length)
		return 1;

	int res = 0;
	
	// sum of digits
	int sum = 0;

	// Traverse all digits from
	// current position to rest
	// of the length of string
	for (int i = position; i < length; i++)
	{
		sum += (num[i] - '0');

		// If forward_sum is greater
		// than the previous sum,
		// then call the method again
		if (sum >= previous_sum)

		// Note : We pass current
		// sum as previous sum
		res += countGroups(i + 1, sum,
						length, num);
	}

	// Total number of subgroups
	// till current position
	return res;
}

// Driver Code
int main()
{
	char num[] = "1119";
	int len = strlen(num);
	cout << countGroups(0, 0, len, num);
	return 0;
}
