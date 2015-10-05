#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

class person
{

	public:	float spent, total;
			string name;

	public: person(string nam)
	{
		name=nam;
		spent=0;
		total=0;
	}

	public: void spends(float x)
	{
		spent+= x;
	}
	
	public: void spentfor(float y)
	{
		total+=y;
	}
	
	public: void hisaab()
	{
		float ret= total-spent;
		
		if(ret>0)
		cout<< name << " gives " << ret<<endl;
		else if(ret<0)
		cout<< name << " gets " << -1*ret<<endl;
	}

}; //end of class

int main()
{

	vector<person> people;
	
	string nam;
	float amt;
	string sp;
	int number;

	cin>>number;
	
	for(int i=0; i<number; i++)
	{
		cin>>nam;
		people.push_back(person(nam));

	}
	
	while(cin>>nam>>amt)
	{
		getline(cin,sp);

		for(int i=0; i<number; i++)
		{
			if(nam==people[i].name)
				people[i].spends(amt);
		}//end for
	
		istringstream iss(sp);
	 	vector<string> sub(number);
		int tok=0;
    	iss >> sub[0];
		while (iss)
    	{
	    	iss >> sub[++tok];
    	} //end while
		
		for(int i=0; i<tok; i++)
		{
			for(int j=0; j<number; j++)
			{
				if(sub[i]==people[j].name)
				people[j].spentfor(amt/tok);
				
			}//end inner-for
		
		}//end outer-for
				

	} //end while



	for(int i=0; i<number; i++)
		{
			people[i].hisaab();
		}

return 0;	
}
