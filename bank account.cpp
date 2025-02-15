#include<iostream>
using namespace std;

class BankAccount{
	private:
		string name;
		int balance;
		
		public:
			void setName(string n){
				name = n;
			}
			void setBalance(int b){
				balance = b;
			}

string getName(){
	return name;
}
int getBalance(){
	return balance;
}
};
int main(){
	BankAccount b1;
	b1.setName("David Otieno");
	cout<<"Name is :"<<b1.getName()<<endl;
	b1.setBalance(7000);
	cout<<"Balance is :"<<b1.getBalance()<<endl;
}