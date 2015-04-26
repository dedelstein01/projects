#include<iostream>
#include<string>
using namespace std;

	int main() {
		//create string and output it
		string str1 = "Hello\n";
		cout << str1;

		//find a part of the string.. returns position
		int str2 = str1.find("o");
		cout << str2 << endl;

		//returns part of string. first param is position, second is length
		string str3 = str1.substr(1,4);
		cout << str3 << endl;

		//returns length of string
		int strLength = str1.length();
		cout << strLength << endl;

		str1.replace(1,2,"o");
		cout << str1 << endl;

		str1.erase(1,2);
		cout << str1 << endl;

		str1.insert(2, " yo");
		cout << str1;

		int a, b, c;
		int nums[10];

		for(a=0; a<10; a++){
			cout << "enter integer: ";
			cin >> nums[a];
		}

		for(c=0;c<9;c++){

			for(a=0;a<9;a++){
				if (nums[a]<nums[a+1]){
					b = nums[a];
					nums[a] = nums[a+1];
					nums[a+1] = b;
				}
				cout << nums[a] << " ";
			}
			cout << endl;
		}

		for(c=0;c<10;c++){
			cout << nums[c] << " ";
		}
		cout << endl;

		return 0;
	}