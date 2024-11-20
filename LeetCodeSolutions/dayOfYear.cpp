class Solution {
public:
    int dayOfYear(string date) {
        bool leapyear = false;
        if(stoi(date.substr(0,4))%400==0 || stoi(date.substr(0,4))%100!=0 && stoi(date.substr(0,4))%4==0)
        {
            leapyear = true;
        }

        int day = 0;
        if(date.substr(5,2) == "01") return stoi(date.substr(8,2));
        if(date.substr(5,2) == "02") return day + 31 + stoi(date.substr(8,2));
        if(leapyear==true) day = 1;
        if(date.substr(5,2) == "03") day = day + 59 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "04") day = day + 90 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "05") day = day + 120 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "06") day = day + 151 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "07") day = day + 181 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "08") day = day + 212 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "09") day = day + 243 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "10") day = day + 273 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "11") day = day + 304 + stoi(date.substr(8,2));
        if(date.substr(5,2) == "12") day = day + 334 + stoi(date.substr(8,2));
        return day;
    }
};