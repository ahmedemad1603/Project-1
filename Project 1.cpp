#include <iostream>
using namespace std;

int main()
{
	string name, super, gender, food, cartoon;

	cout << "Enter your name: \n";
	cin >> name;

	cout << "\n*** Hello " << name << " ***\n";

	cout << "\nAre you a male or female? \n";
	cin >> gender;


	if (gender == "male")
	{
		cout << "\nDo you prefer to be a superhero or supervillain? \n";
		cin >> super;
		if (super == "superhero")
		{
			cout << "\nDo you prefer eating steak or sushi? \n";
			cin >> food;

			if (food == "sushi")
				cout << "\nYou should get a \" pompadour \". \n";

			else if (food == "steak")
				cout << "\nYou should get a \" flat top \". \n";
		}
		else if (super == "supervillain")
			cout << "\nYou should get a \" Mohawk \". \n";
	}
	else if (gender == "female")
	{
		cout << "\nDo you prefer to be a superhero or supervillain? \n";
		cin >> super;

		if (super == "superhero")
		{
			cout << "\nDo you prefer watching anime or sitcom? \n";
			cin >> cartoon;

			if (cartoon == "anime")
				cout << "\nYou should go with \" Bangs \". \n";

			else if (cartoon == "sitcom")
				cout << "\nYou should get a \" Bob \". \n";
		}
		else if (super == "supervillain")
			cout << "\nYou should get a \" Mohawk \". \n";
	}
   
	return 0;
}