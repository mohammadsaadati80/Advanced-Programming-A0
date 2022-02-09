#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	vector<int> teacher_string;
	int teacher_number;
	while (cin >> teacher_number) {
		teacher_string.push_back(teacher_number);
	}

if ((teacher_string.size()) %2 !=0){	
for (int number = 1;; number++) {
		int teacher_dup = 0;
		int student_dup = 0;
		int teacher_dup1 = 0;
		int student_dup1 = 0;
		
		for (int i = 0; i < (teacher_string.size()); i++) {
			if (teacher_string[i] == number) {
				teacher_dup++;
			}
		}
		
		
		if ((teacher_dup %2 ) != 0) {
			cout << number << endl;
			break;
		}
		
	}
}
else {
cout << 0 <<endl;
}

	return 0;
}