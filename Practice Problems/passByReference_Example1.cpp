/*
	Problem: Given a magnitude in Newtons and direction, in degrees, of an 
	applied force, compute the x and y components of that force.  
	
	Thoughts:
	
	We have many ways of doing this.  For instance, we *could* just write this
	in a single main function.  However, good program design tells us that we 
	should be writing our code in a modular way - a function that computes
	the x and y components is a good idea, since it means we can re-use it in
	another program (or potentially the same program) without having to re-write
	main.
*/

#include <iostream>
#include <cmath>
using namespace std;

/*
	Now we need to design the function or functions that we intend to use.  
	The computation of the x and y components of a vector can be done in two 
	different functions or in one function.  I believe that it is more natural
	and concise to write a single function, (although you may disagree!)
	
	If I'm writing only one function, though, I need to return two values out of
	it.  This indicates to me that I should be using pass-by-reference for at 
	least one of those values.
	
*/
void getXYComponents(double mag, double ang, double &xForce, double &yForce)
{
	/*
		I'm choosing to pass in both x and y by reference and therefore to return
		nothing.  How many other ways can you think of to write this function?
		What are the benefits of each one?
	*/
	
	//convert angle to radians
	ang = ang * M_PI/180.0;
	xForce = mag*cos(ang);
	yForce = mag*sin(ang);
}

/*
	Notice that the problem statement didn't say anything about testing the
	function.  That's our job.  I'm going to write a main function that gets
	user input, so that we don't need to hard-code the test cases.
*/

int main()
{
	/*
		I always like to initialize my variables, even though it's not really
		necessary here.
		
		I also don't need to use the same variable names as I used in my
		function, but those names were chosen because they give a good indication
		of their purpose.  As a result, I chose to re-use those names.
	*/
	double xForce = 0, yForce = 0, mag = 0, ang = 0;
	cout << "Enter a magnitude in N and an angle in degrees: ";
	cin >> mag >> ang;
	
	//call the function.  Remember, it's a void, so no return value
	getXYComponents(mag, ang, xForce, yForce);
	
	//see the outputs to know if I'm correct
	cout << "X Component: " << xForce << " Y Component: " << yForce << endl;
	
}

