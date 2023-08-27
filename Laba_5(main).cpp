#include "Laba_51.h"


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int Num = 5;
	bool AvailabilityDestination = 0;
	airplanes* FlightsToday1 = setAirplainsTametable(Num);
	output(FlightsToday1, Num);

	cout << "Введите пункт назначения" << endl;
	string destination;
	getline(cin,destination);

	int* time = { new int [Num] {} };
	time = Sort(FlightsToday1, Num);
	


	for (int i = 0; i < Num; i++)
	{
		if (FlightsToday1[time[i]].Destination == destination)
		{
			cout << "Номер рейса " << FlightsToday1[time[i]].FlightNum << "\t" << "тип самолета " << FlightsToday1[time[i]].AirplaneTape << "\t"
			<< "пункт назначения " << FlightsToday1[time[i]].Destination << "\t" << "время отправления " << FlightsToday1[time[i]].DepartureTime << endl;
			AvailabilityDestination = 1;
		}
		
	}
	if (AvailabilityDestination == 0)
	{
		cout << "Нет такого пункта назначения :(";
	}
	
	delete[] time;
	
}
