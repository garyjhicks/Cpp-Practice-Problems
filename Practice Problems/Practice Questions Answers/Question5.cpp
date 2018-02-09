#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int const TEXT = 600;
int const MINUTES = 100;

class Plan
{
private:
	string phoneCompany;
	double monthlyFee;
	int texts;
	double textCost;
	double callCost;
	int contract;
	bool penalty;

public:
	Plan() //default constructor
	{
		phoneCompany = "";
		monthlyFee,texts,textCost,callCost,contract = 0;
		penalty = false;
	}
	Plan(string phoneCompany0, double monthlyFee0, int texts0, double textCost0, double callCost0, int contract0, bool penalty0)
	{
		phoneCompany = phoneCompany0;
		monthlyFee = monthlyFee0;
		texts = text0;
		textCost = textCost0;
		callCost = callCost0;
		contract = contract0;
		penalty = penalty0;

	}
	void readFile(ifstream & fin)
	{
		fin >> phoneCompany >> monthlyFee >> texts >> textCost >> callCost >> contract >> penalty;
	}

	void output(string phoneCompany0, double monthlyFee0, int texts0, double textCost0, double callCost0, int contract0, bool penalty0)
	{
		cout << "Company: " << phoneCompany0 << endl;
		cout << "Monthly Fee: $" << monthlyFee0 << endl;
		cout << "Texts: " << texts0 << endl;

	}
	double totalCost(int MonthlyText, int texts0, double textCost0, int callMinutes, double callCost0, double monthlyFee0)
	{
		double cost = 0;
		cost = monthlyFee0 + (MonthlyText - texts0)*textCost0 + callMinutes*callCost0;

		return cost;
	}










}