bool isLeapYear(int year)
{
	if((year < 1582 && year % 4 == 0) || (year >= 1582 && (year % 4 && year % 100 != 0) || year % 400))
		return true;
}

int numDays(int year)
{
	if(bool(int year) == true)
		return 366;
	else
		return 365;
}

int findDays(int year, int month, int day)
{
	int days = 0;
	int daysInMonth = 0;
	days = numDays(year);

	int array[12];

	for(int count = 0; count < 7; count+=2)
		array[count] = 31;

	for(int count2 = 7; count2 < 12; count2 +=2)
		array[count2] = 31;

	if(days == 366)
		array[1] == 29;

	else if(days == 365)
		array[1] == 28;

	for(int count3 = 3; count3 < 6; count3+=2)
		array[count3] = 30;

	for(int count4 = 8; count4 < 11; count4 +=2)
		array[count4] = 30;

	for(int count5 = 0; count5 < month; count5++)
	{
		int daysInMonth += array[count5];
	}

	daysInMonth += day;

	return daysInMonth;
}

int main()
{
	int year0, month0, day0 = 0;
	int year1, month1, month1 = 0;
	int deltaDays = 0;

	cout << "Enter starting year, month and day";
	cin >> year0 >> month0 >> day0;

	cout << "Enter end year, month and day";
	cin >> year1 >> month1 >> day1;

	int days0 = findDays(year0, month0, day0);
	int days1 = findDays(year1, month1, days1);

	deltaDays = days1 - days0;

	cout << deltaDays;

}
	



