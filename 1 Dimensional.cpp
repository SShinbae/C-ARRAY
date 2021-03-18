# include <iostream>
using namespace std;
main()
{
	int a;
	int number[6];
	for (a=0;a<6;a++)
{
	number[a]= a+5;
	cout <<"number[ " <<a<< " ]"<<"is initialized with = " <<number[a]<<"\n";
}
return 0;
}

