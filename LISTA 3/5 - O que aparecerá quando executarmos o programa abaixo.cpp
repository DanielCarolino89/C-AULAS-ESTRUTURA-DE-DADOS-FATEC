/*5) O que aparecerá quando executarmos o programa abaixo?
int count = 30, *temp, sum = 2;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
Cout << “ count = ”count << “*temp = ” *temp << “sum = ” sum;*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
	int count = 30, *temp, sum = 2;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	
	cout << " count = "<< count << "* temp = "<< *temp << " sum = " <<sum;
	
	/* count = 20* temp = 20 sum = 20 */
    return 0;
}
