#include <iostream>
using namespace std;

int Number;
long long int attempt = 2;
int main()
{
	cout << "Enter a number to prime factorise: " << endl;
	cin >> Number;

	while (Number != 1)
	{
		if (Number % attempt == 0)
		{
			cout << Number << " / " << attempt << " = " << Number / attempt << endl;
			Number /= attempt;
			attempt = 2;
		}
		else
			++attempt;
	}
	cout << "done" << endl;

	main();
	system("pause > 0");
}
