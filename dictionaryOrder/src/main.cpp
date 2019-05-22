/*
 *
 * Filename        : main.cpp
 * FileType        : C++ Source File
 * Author          : Nisha Poswal
 * CreatedOn       : 21/05/2019
 * CopyRights      : Airavath Foundation
 * Description     : Main file containing a main source code.  It includes code.cpp
 *                   which have other functions of the source code.
*/

/* Function : main
 * Parameters :
 *              v - vector of strings,words are stored here.
 *              
 * Description :
 *               Takes input through command line arguments and passes
 *               the data to v.
 *               if number of words is 10 then checkSize will return 1 and 
 *               if condition will be executed,words will be arranged in dictionay order
 *                and if number of words are not 10 than it prints a message that number of words are not 10.
 * Returns :
 *           0 - if number of words in v is not 10
 *           1 - if number of words in v is 10.
 */

#include"../src/code.cpp"
int main(int argc, char* argv[])
{
		vector<string> v;
		for(int i=1;i<argc;i++)
		{
		v[i-1]=argv[i]; 
                }
		
 if (checkSize(v))
 {
 	dictionaryOrder(v);
	 return 1;
 }
return 0;
}
 
