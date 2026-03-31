#include<iostream>

using namespace std;

class Timeconverter{
	
	private:
		
		int hours,minutes,seconds,totalseconds;
		
	public:
		
		void SecondsToTime(){
				
			cout << "Enter total seconds :- ";
			cin >> totalseconds;
			
			hours = totalseconds / 3600;
			minutes = (totalseconds % 3600) / 60;
			seconds = totalseconds % 60;
			
			cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
		
		}
		
		void TimeToSeconds(){
			
			cout << "Enter hours :- ";
			cin >> hours;
			
			cout << "Enter minutes :- ";
			cin >> minutes;
			
			cout << "Enter seconds :- ";
			cin >> seconds;
			
			totalseconds = (hours * 3600) + (minutes * 60) + seconds;
			
			cout << "Total seconds :- " << totalseconds;
			
		}
			
};

int main(){
	
	Timeconverter stt,tts;
	
	stt.SecondsToTime();
	
	tts.TimeToSeconds();
	
	return 0;
}