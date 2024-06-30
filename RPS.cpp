#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
 {
 	srand(time(NULL));    //random number every single time
 	int user =0;
 	int cpu =0;
 	cout<<"ROCK PAPER SCISSORS SHOOT!"<<endl;
 	cout<<"1) Rock"<<endl;
 	cout<<"2) Paper"<<endl;
 	cout<<"3) Scissors"<<endl;
 	cin>>user;
 	if(user==1)
    {
    	cout<<"You choose Rock"<<endl;
	}
	else if(user==2)
	{
		cout<<"You choose Paper"<<endl;
	}
	else
	{
		cout<<"You choose Scissors"<<endl;
	}
	
	cpu = rand()%3+1;
	if(cpu==1)
    {
    	cout<<"CPU choose Rock"<<endl;
	}
	else if(cpu==2)
	{
		cout<<"CPU choose Paper"<<endl;
	}
	else
	{
		cout<<"CPU choose Scissors"<<endl;
	}
	
	// match (tie)
	
	if(user==cpu)
	{
		cout<<"It is a tie"<<endl;
	}
	
	//user choose rock
	else if(user==1)
	{
		if(cpu==2)
		{
			cout<<"You Lose"<<endl;
		}
		if(cpu==3)
		{
			cout<<"You Win"<<endl;
		}
	}
	
	//user choose paper
	else if(user==2)
	{
		if(cpu==1)
		{
			cout<<"You Win"<<endl;
		}
		if(cpu==3)
		{
			cout<<"You Lose"<<endl;
		}
	}
	
	//user choose scissors
	else if(user==3)
	{
		if(cpu==1)
		{
			cout<<"You Lose"<<endl;
		}
		if(cpu==2)
		{
			cout<<"You win"<<endl;
		}
	}
	return 0;
}
