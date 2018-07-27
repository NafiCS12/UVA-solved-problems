#include <iostream>
#include <string>
using namespace std;

int main()
{


        char str[1000000];
        int len; // count the lenght of the string
        int begin, end;

        while (cin.getline(str, sizeof(str)))
		{
                begin = end = 0;
                len = strlen(str);
                str[len] = '\0'; // end of the string is set to null

                for (int i = 0; i <= len ; i++)
				{
                        // as '\0' must be counted so i <= len
                        if (str[i] == ' ' || str[i] == '\0')
						{
                                end = i; // set end flag
                        }
                        else
                                continue;

                        for (int j = end - 1; j >= begin; j--)
						{
                                cout << str[j];
                        }
                        if (str[i] == ' ') cout << str[i];
                        begin = end + 1; // set begin after blank
                }
                cout << endl;
        }

        return 0;
}