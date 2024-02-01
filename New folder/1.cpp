#include<iostream>
using namespace std;

int getInt()
{
	int n;
	cin >> n;
	return n;
}

string getString()
{
	string n;
	cin >> n;
	return n;
}

class Employee
{
	private:
		static int idCounter;
		int id;
		string name;
		static string c_name;
		
		
	public:	
	// Setter
		void setData()
		{
			this->id = idCounter++;
			
			cout << "Enter Name : ";
			this->name = getString();
	
		}
		 
	// Getter	 
		void getData()
		{
			cout << "Id\t:" << this->id << endl
				 << "Name\t:" << this->name << endl
				 << "Comapany : " << this->c_name << endl;
		}
		
		static void setStaticInput()
		{
			cout << "Enter Id : ";
			Employee::idCounter = getInt();
			
			
			
			cout << "Enter Comaoany Name : ";
			Employee::c_name = getString();
		}
};

// scop resolution operatior / memebership label operator 
string Employee::c_name = "ecfjvjrfbjd";
int Employee::idCounter = 0;

int main()
{
	
	Employee::setStaticInput();
	
	Employee a[2];
	
	
	for(int i=0; i<2; i++)
	{
		a[i].setData();
	}
	
	for(int i=0; i<2; i++)
		a[i].getData();
	
	return 0;
}
