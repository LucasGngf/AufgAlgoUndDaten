    #include<iostream>
    using namespace std;
    int fact(int n)
    {
    	int result=1;
    	
    	for(int i=1 ; i <= n ; i++)
    	{
    		result=result*i;
    	}
    	return result;
    }
    
    
    
    
    
    
    
    
    
    int main()
    {
    	int num;
    	cout<<"Zahl eingeben: ";
    	cin>>num;
    	if(num<0)
    	{
    		cout<<"\nKeine Zahlen unter 0";
    	}
    	else
    	{
    		cout<<"\nFakultaet ist:"<<fact(num);
    	}
    	return 0;
    }
