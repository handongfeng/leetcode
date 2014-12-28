/×
Divide two integers without using multiplication, division and mod operator.

If it is overflow, return MAX_INT.
×/
// note  this version does not consider the overflow case

class Solution3 {
public:

	int dfs(int divisor, int dividend)
	{
		if (divisor == dividend)
		{
			return 1;
		}
		else if (divisor < dividend)
		{
			return 0;
		}
		else if (dividend < divisor)
		{

			int oriDividend = dividend;
			int count = 0;
			while (dividend<divisor)
			{
				count++;
				dividend *= 2;
			}
			if (divisor == dividend)
			{
				return pow(2, count);
			}
			else
			{
				divisor = divisor - dividend/2;
				return (pow(2, count - 1) + dfs(divisor, oriDividend));
			}

		}

	}

	int divide(int dividend, int divisor) {
		if (divisor == 0) return 0;

		int sign = 1;
		if (dividend*divisor<0) sign = -1;
		int a = abs(divisor);
		int b = abs(dividend);
		if (a == b) return 1 * sign;
		if (a<b) return 0;
		int result = dfs(a, b);
		return result*sign;
	}
};
