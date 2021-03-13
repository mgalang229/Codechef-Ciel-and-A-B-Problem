#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	// calculate the correct difference of 'a' and 'b'
	int difference = a - b;
	// find the last digit of the difference
	int last_digit = difference % 10;
	// change the last digit of the difference by adding 1
	// but if this digit is 9 then use 8 instead
	last_digit = (last_digit == 9 ? 8 : last_digit + 1);
	// divide the difference by 10 to remove the last digit
	difference /= 10;
	// multiply back 10 to the difference so we can insert the new digit
	difference *= 10;
	// add the last digit to the difference to get the new number
	// and now the new difference is different by one digit from
	// the original difference
	cout << difference + last_digit << '\n';
	return 0;
}
