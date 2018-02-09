class Point
{
	private:
		double x, y;

	public:
		Point() //default constructor
		{
			x = 0;
			y = 0;
		}

		Point(double x0, double y0) //data constructor
		{
			x = x0;
			y = y0;
		}

		double get_x() const //getters (accessors)
		{
			return x;
		}

        void set_x(double x0) //setters (mutators)
        {
            x = x0;
        }
		void move(double delX, double delY) //pass by value for change in x and y
		{
			x += delX;
			y += delY;
		}
		double distance(Point const & pEnd) const //const at the end is accounted for p1 in the main function
		{
			return sqrt(pow(x-pEnd.x,2) + pow(y-pEnd.y,2));
		}

		//another way
		double distance(Point const & pEnd) const //const at the end is accounted for p1 in the main function
		{
			return sqrt(pow(get_x()-pEnd.x,2) + pow(get_y()-pEnd.y,2));
		}
		//if get x and get y functions were not constant, this distance function would not work.
		Point rotate() const
		{
			return Point(y,x); //no name point (data constructor)
		}
};

int main()
{
	Point p0; //default contructor

	Point p1(2.5, 1.8); //data constructor
	p0.set_x(1.8);
	p1.move(2.7,1);
	cout << p1.distance(p0);
	Point p3 = p0.rotate();

}