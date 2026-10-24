class Solution {
public:
    vector<int> month={31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        string arrive_month= arriveAlice.substr(0,2);
        string arrive_date= arriveAlice.substr(3,5);

        string leave_month= leaveAlice.substr(0,2);
        string leave_date= leaveAlice.substr(3,5);

        int alice_arrive_month= stoi(arrive_month);
        int alice_arrive_date= stoi(arrive_date);
        int alice_leave_month= stoi(leave_month);
        int alice_leave_date= stoi(leave_date);

        int alice_arrive=0;
        alice_arrive+=alice_arrive_month==1? 0:month[alice_arrive_month-2];
        alice_arrive+= alice_arrive_date;

        int alice_leave=0;
        alice_leave+=alice_leave_month==1? 0: month[alice_leave_month-2];
        alice_leave+= alice_leave_date;

        arrive_month= arriveBob.substr(0,2);
        arrive_date= arriveBob.substr(3,5);

        leave_month= leaveBob.substr(0,2);
        leave_date= leaveBob.substr(3,5);

        int bob_arrive_month= stoi(arrive_month);
        int bob_arrive_date= stoi(arrive_date);
        int bob_leave_month= stoi(leave_month);
        int bob_leave_date= stoi(leave_date);

        int bob_arrive=0;
        bob_arrive+= bob_arrive_month==1? 0:month[bob_arrive_month-2];
        bob_arrive+= bob_arrive_date;

        int bob_leave=0;
        bob_leave+= bob_leave_month==1? 0: month[bob_leave_month-2];
        bob_leave+= bob_leave_date;

        int days=0;
        days+= min(alice_leave, bob_leave);
        days-= max(alice_arrive, bob_arrive);

        return max(0,days+1);        
    }
};

//A seperate function can be created to convert the date into days
class Solution {
public:
    vector<int> map={31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    int convertDateToDays(string date){

        string month_str= date.substr(0,2);
        string date_str= date.substr(3,5);

        int month= stoi(month_str);
        int date= stoi(date_str);

        int days=0;
        days+= month==1? 0:map[month-2];
        days+= date;

        return days;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        int alice_arrive=convertDateToDays(arriveAlice);
        int alice_leave=convertDateToDays(leaveAlice);;

        int bob_arrive=convertDateToDays(arriveBob);
        int bob_leave=convertDateToDays(leaveBob);

        int days=0;
        days+= min(alice_leave, bob_leave);
        days-= max(alice_arrive, bob_arrive);

        return max(0,days+1);        
    }
};