// Create a class which stores time in hh:mm format. Include all the constructors. The parameterized
// constructor should initialize the minute value to zero, if it is not provided.
#include<iostream>
using namespace std;

class Time {
private:
int hours;
int minutes;

public:
Time(){
this->hours = 0;
this->minutes = 0;

};
Time(int hours, int minutes) {
this->hours = hours;
this->minutes = minutes;

};
int getHours(){
return this->hours;
};
int getMinutes(){
return this->minutes;
};


void display(){
cout << hours << ":" << minutes << endl;
};
Time add(Time time1, Time time2) {
int hoursAdd = time1.getHours() + time2.getHours();
if (hoursAdd > 23) {
hoursAdd -= 24;
}
int minutesAdd = time1.getMinutes() + time2.getMinutes();
if (minutesAdd > 59) {
minutesAdd -= 60;
hoursAdd += 1;
}
Time time3(hoursAdd, minutesAdd);
return time3;
};
};



int main() {
Time time1(40, 30);
Time time2(23, 43);
Time time3;
time3 = time3.add(time1, time2);
time1.display();
time2.display();
time3.display();
return 0;
};
