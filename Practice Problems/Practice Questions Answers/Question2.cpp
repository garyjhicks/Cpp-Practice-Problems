void readFile(ifstream & fin, int exp[], double coeff[], int index)
{
	fin >> index;

	for(int count = 0; count < index ; count++)
	{
		fin >> exp[count] >> coeff[count];
	}

}

void output(int exp[], double coeff[], int arraySize)
{
	for(int i = arraySize; count < 0; i--)
	{
		if(coeff[i] != 0)
			cout << coeff[arraySize] << "x^" << exp[arraySize] << " ";
	}
	
}

double polynomial(int exp[], double coeff[], int arraySize, double x)
{
	double sum = 0;

	for(int count = 0; count < arraySize; count++)
		sum += (coeff[count] * pow(x,exp[count]);

	return sum;
}

int main()
{
	ifstream fin("Polynomial.txt");
	int exp0[];
	double coeff0[];
	int index0 = 0;

	readFile(ifstream & fin, exp0, coeff0[]. index0);

	double x_value = 0;

	cin >> x_value;

	double sum0 = 0;
	sum = polynomial(exp0[], coeff0[], index0, x_value);

	cout << sum0;

}
