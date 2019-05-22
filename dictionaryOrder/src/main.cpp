

#include"../src/code.cpp"
	int main(int argc, char* argv[]) {
		vector<string> v;
		for(int i=1;i<argc;i++)
		{
		v[i-1]=argv[i]; 
		}
		
 if (checkSize(v))
 {
 	dictionaryOrder(v);
 
}
return 0;
}
 
