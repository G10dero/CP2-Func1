#include<iostream>
using namespace std;
int main(){
    int num1, num2, choice, result;
    char decision = 'y';
    do{
    system("cls");
    operation: cout<<"Enter first value: ";
    cin>>num1;
    cout<<"Enter second value: ";
    cin>>num2;
    	do{
		    cout<<"(1) Add \n(2) Subtract \n(3) Multiply \n(4) Divide \n";
		    cin>>choice;
		    system("cls");
			switch (choice){
				case 1 :
					result = num1 + num2;
		    		cout<<"The sum is: "<<result;
		    		break;
		    	
		    	case 2:
		    		result = num1 - num2;
		    		cout<<"The difference is: "<<result;
					break;
					
				case 3:
					result = num1 * num2;
					cout<<"The product is: "<<result;
					break;
					
				case 4:
					result = num1 / num2;
					cout<<"The quotient is: "<<result;
					break;
					
				default:
					cout<<"Invalid Choice!!\n";
			}
		}
		while (choice < 0 || choice > 5);
		
	cout<<"\n\nWould you like to try another operation?\n(Y) Yes\n(N) No\n";
	cin>>decision;}
	while (decision == 'y');
	cout<<"Thank you!";
	return 0;
}
