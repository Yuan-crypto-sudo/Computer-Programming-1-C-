#include <iostream>
using namespace std;

int main() {   
int x, sum=0; 
int num[10] = {3, 4, 5, 6, 1, 2, 7, 2, 4,3};
    
cout<<"Name: Yuan Alcuetas";
cout<<"\nSection: CYB11S1"; 

cout<< "\n[1] Display all numbers\n";   // not graded

for(x = 0; x <= 9; x++) {
    cout<< "     "<<num[x] << " ";
}
		
cout<< "\n\n[2] Display the sum of all numbers";  // not graded

for(x = 0; x <= 9; x++) {

    sum = sum +num[x];
}	

cout<<"\n     The sum of all numbers is  "<<sum;
	
cout<< "\n\n[3] Display the sum of all given even numbers";   // not graded

sum = 0;

for(x = 0; x <= 9; x++) {

    if (num[x] % 2==0) {
        sum = sum +num[x];
    } 

}//for loop

cout<<"\n      The sum of all given even numbers is  "<<sum;


cout<< "\n\n[4] Display the sum of all numbers in even subscript 0, 2, 4";   // not graded

sum=0;

for(x = 0; x <= 9; x = x + 2) {
    sum = sum + num[x]; 
}

cout<<"\n\tThe sum of all numbers in even subscript 0, 2, 4 is  "<<sum;
//or 

sum = 0;

for(x = 0; x <= 9; x++) {

    if(x % 2 == 0)
    sum = sum + num[x];
}

cout<<"\n\tThe sum of all numbers in even subscript(0 2 4 ) is  "<<sum; 

cout<< "\n\n[5] Display the average of all given odd numbers"; 
float avg = 0;
int count = 0;
sum = 0;

//<insert the codes here>

    for (x = 0; x <= 9; x++) {
        if (num[x] % 2 == 1) {
            sum += num[x];

            count++;
        }
    }
avg = sum / (float)count;

cout << "\n\tThe average of all given odd numbers are: " << avg;

cout<< "\n\n[6] Display the product of all numbers in odd subscript  1, 3, 5, 7, 9"; 

//<insert the codes here>

int prod = 1;

for (x = 0; x <= 9; x += 2) {
    prod = prod * num[x];
}

cout << "\n\tThe product of all numbers in odd subscript is: " << prod;

cout<< "\n\n[7] Display the highest number"; 

//<insert the codes here>

int highest = num[0];

for (x = 1; x <= 9; x++) {
    if (num[x] > highest) {
        highest = num[x];
    }
}

cout << "\tThe highest number is " << highest;
}   //end of main
