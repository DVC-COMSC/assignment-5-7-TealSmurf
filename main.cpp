#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N;

	cout << "Enter the two initial values: ";
	cin >> n1 >> n2;
	cout << "Enter the number of sequences: ";
	cin >> N;

	cout << n1 << ", " << n2;
	for(int i = 0; i + 2 < N; i++)
	{
		int n3 = n1 + n2;
		cout << ", " << n3;
		n1 = n2;
		n2 = n3;
	}
}
