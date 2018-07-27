#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main()
{
    long long Hashmats_army,Opponents_army;
	
    while ( cin>> Hashmats_army>> Opponents_army )
    {
		cout<< abs( Hashmats_army-Opponents_army )<< endl;
    }

}
