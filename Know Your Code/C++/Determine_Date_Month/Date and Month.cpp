// Write a  Program to determine the date.
		
		

		// Explanation:
		

		// Decode Month:
		/*
		A - Jan; B - Feb; C - March; D - April; E - May; F - June; 
		G - July; H - Aug; I - Sept; J - Oct; K - Nov; L - Dec;
		*/
		

		// Decode Day:
		/*
		Q - 0, R - 1, S - 2, T - 3, U - 4, V - 5, W - 6, X - 7, Y - 8, Z - 9
		*/
		

		// Decode Year:
		/*
		A - 1 + 1995 = 1996;
		B - 2 + 1995 = 1997;
		...
		M - 13 + 1995 = 2008
		...
		Z - 26 + 1995 = 2021;
		*/
		

		// Format- Month:Day:Year - A : RZ : M = Jan : 19: 2008
		// Constraints: 
		// Month and year can be represented with just one alphabet. Day needs two alphabets. 
		

		// process A: 
		#include <iostream>
		

		using namespace std;
		

		string decode_month(const char month);
		int decode_day(const char day);
		int decode_year(const char year);
		

		int main(){
		

		  string in;
		  cout << "Enter a encoded date." << endl;
		  if( !(cin >> in)){
		    cout<< "Error reading the date." << endl;
		  }      
		  else {
		      cout << "MM/DD/YYYY: " << decode_month(in.substr(0, 1)[0]) << "/" << decode_day(in.substr(1, 1)[0]) << decode_day(in.substr(2, 1)[0]) << "/" << decode_year(in.substr(3, 1)[0]) << endl;
		  }
		}
		

		int decode_year(const char year) {
		    return year - 64 + 1995;
		}
		

		int decode_day(const char day) {
		    return day - 81;
		}
		

		string decode_month(char month){
		  string decode;
		  int base = month - 64;
		  switch(base){
		  case 1: 
		    decode = "Jan";
		    break;
		  case 2: 
		    decode = "Feb";
		    break;
		  case 3: 
		    decode = "Mar";
		    break;
		  case 4: 
		    decode = "Apr";
		    break;
		  case 5: 
		    decode = "May";
		    break;
		  case 6: 
		    decode = "Jun";
		    break;
		  case 7: 
		    decode = "Jul";
		    break;
		  case 8: 
		    decode = "Aug";
		    break;
		  case 9: 
		    decode = "Sept";
		    break;
		  case 10: 
		    decode = "Oct";
		    break;
		  case 11: 
		    decode = "Nov";
		    break;
		  case 12: 
		    decode = "Dec";
		    break;
		  default:
		    cout << "Error in month: " << decode << endl;
		  }
		  return decode;
		}

		*
