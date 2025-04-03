
#include <iostream>
using namespace std;
int ReadNumber()
{
	int num;
	cout << "Please enter a number ?  ";
	cin >> num;
	return num;
}
string NumberName1To19(short N)
{
	switch(N)
	{
		case 1 :
			return "One"  ;
		case 2 :
			return "Twe";
		case 3 :
			return "Three";
		case 4 :
			return "Four" ;
		case 5 :
			return "Five";
		case 6 :
			return "Six";
		case 7 :
			return "Seven";
		case 8 :
			return "Eight";
		case 9 :
			return "Nine";
		case 10 :
			return "Ten" ;
		case 11 :
			return "Eleven";
		case 12 :
			return "Twelve";
		case 13 :
			return  "Thirteen" ;
		case 14 :
			return "Fourteen";
		case 15 :
			return "Fifteen";
		case 16 :
			return "Sixteen";
		case 17 :
			return "Seventen";
		case 18 :
			return "Eighteen";
		case 19 :
			return "NineTeen";
	}
}
string NumberName20To100(short N)
{
	switch(N)
	{
		case 2 :
			return "Twenty";
		case 3 :
			return "Thirty";
		case 4 :
			return  "Forty";
		case 5 :
			return "Fifty";
		case 6 :
			return "Sixty";
		case 7 :
			return "Seventy";
		case 8 :
			return "Eighty";
		case 9 :
			return "Ninety";
	}
}
string NumberToText(int number )
{
	string str ="";
	int remainder =0, result=0;
	if(number <= 19)
	{
		str += NumberName1To19(number);
		return str;
	}
	else if(number < 100)
	{
		str += NumberName20To100(number/10) + " " ;
		str += NumberToText(number%10);
		return str;
	}
	else if (number < 1000)
	{
		remainder = number % 100;
		result = number / 100;
		str += NumberToText(result) ;
		if(result == 1)
		{
			str +=  " Hundred ";
		}
		else
		{
			str +=  " Hundreds ";
		}
		str += NumberToText(remainder);
		return str;
	}
	else if(number < 1000000)
	{
		remainder = number % 1000;
		result = number / 1000;
		str += NumberToText(result);
		if(result == 1)
		{
			str +=   " Thousend ";
		}
		else
		{
			
			str += " Thousends ";
		}
		str += NumberToText(remainder);
		return str;
	}
	else if(number < 1000000000)
	{
		remainder = number % 1000000;
		result = number / 1000000;
		str += NumberToText(result);
		if(result == 1)
		{
			str += " Million ";
		}
		else
		{
			str += " Millions ";
		}
		str += NumberToText(remainder);
		return str;
	}
	else 
	{
		remainder = number % 1000000000;
		result = number / 1000000000;
		str += NumberToText(result);
		if(result == 1)
		{
			str += " Billion ";
		}
		else
		{
			str += " Billions ";
		}
		str += NumberToText(remainder);
		return str;
	}
	
	
}
string PrintNumberToText( int number)
{
	if(number == 0)
	{
		return "Zero";
	}
	else
	{
		return  NumberToText(number);
		
	}
}

int main()
{
	cout << PrintNumberToText(ReadNumber()) << endl;

    system("pause>0");
    return 0;
}	