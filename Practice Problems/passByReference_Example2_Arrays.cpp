/*
	Problem: Let A be a 3x3 matrix and x be a 3x1 vector.  
	Write a function to compute the product.
	
				y = A*x
				
	In the main() function, have the user enter values for the matrix A and vector
	x.  Then call your function and output the result.
*/

#include <iostream>
/*
	I could use all 5 of the libraries that we normally use here.  However,
	I don't need them, so I'm only going to use what I need.
*/
using namespace std;

/*
	Begin by writing the function header.  
	It's void because I can't use the "return" statement to return an
	array.  Instead, I have to pass all of my arrays into the function,
	*including* the array that will store my result.  Remember, arrays are
	pass-by-reference *always*.
*/
void mtxVecMult(double mtx[][3], double vecIn[], double vecOut[])
{
	//The equation uses a nested for loop
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			vecOut[j] += mtx[i][j]*vecIn[j];
		}
	}
}

/*
	The next step is to write the main.
*/
int main()
{
	//I need to make some arrays to work with.  
	
	/*
		This is the matrix itself. I want to enter the values by hand in this case,
		but I could have read them from a file as well, or initialized the array
		in the code itself.
		
		I'm entering it row by row, not column by column, but that was a personal
		choice.
	*/
	double A[3][3] = {0};
	cout << "Enter the values for the matrix, A: " << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "Enter the next value: ";
			cin >> A[i][j];
		}
	}
	
	//Next comes the vector I want to multiply.
	double x[3] = {0};
	cout << "Enter the values for the vector, x: " << endl;
	for(int i = 0; i < 3; i++)
	{
		cout << "Enter the next value: ";
		cin >> x[i];
	}
	
	/*
		Remember, I can't use "return" to return an array from a function, so I have to pass in
		the result vector as an argument to the function.  Before I can do that, I need to create the
		vector in main.
	*/
	double y[3] = {0};
	
	/*
		Now call the function, making sure that the input arguments are in the correct order.
		Notice that I named my variables differently in main than they are named in the function header.
		As long as the variable types agree, the names can be entirely different when the function is called.
	*/
	mtxVecMult(A,x,y);
	/*
		You might be wondering why I didn't call the function like this:
		
		mtxVecMult(A[3][3],x[3],y[3]);
		
		or maybe
		
		mtxVecMult(A[][3],x[],y[]); (this is how the function header is written in the first place
		
		The variables A, x, and y are *already* arrays of the appropriate size.  When *calling* a function
		you tell the computer which variables you want to call the function on.  You do *not* specify 
		any further information, like whether or not the variable is an array.  When *writing* a function,
		however, you need to specify that the inputs are arrays (or not).
	*/
		
	//Finally, let's print the vector y so that we can see if we're correct
	cout << "y = < ";
	for(int i = 0; i < 3; i++)
	{
		cout << y[i] << " ";
	}
	cout << ">";
	/*
		Did you notice that I re-used the variable "i"? Every for loop has its own scope,
		so I can re-use the index variables if I want to.
	*/
}
