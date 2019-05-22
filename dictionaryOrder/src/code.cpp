/*
 *
 * Filename        : code.cpp
 * FileType        : C++ Source File
 * Author          : Nisha Poswal
 * CreatedOn       : 20/05/2019
 * CopyRights      : Airavath Foundation
 * Description     : This file contains a funtion dictionaryOrder() and another funtion checkSize().
					 This file also includes the common headers.
*/

#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
*Function : checkSize
* Parameters :
	 v -vector<string> type, stores input words

* Description :

	*Checks if the number of words present in v is 10 or not.
	* if number of words is 10 then it pass the vector v.

* Return :

	*0 - int type, When when number of words in vector v is not 10.
	*1 - int type, when number of words in vector v is 10
*/

inline int checkSize(vector<string> v)
{
	if (v.size() != 10)
	{
		cout << "Nunber of words is not ten" << endl;
		return 0;
	}
	return 1;
}

/* Function : dictionaryOrder

 * Parameters :

 *          v - vector<string> type, stores the input 10 words


 * Description :
 *              this funtion return a vector containig words arranged in dictionary order.

 * Return :
	*v - vector<string> type which contains words arranged words in dictionary order.
 */

inline vector<string> dictionaryOrder(vector<string> v)
{
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return v;
}

