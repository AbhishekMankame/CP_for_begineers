// Time Conversion

/*
Given a time in 12-hour format (hh:mm:ssAM or hh:mm:ssPM), convert it to 24-hour format.

Example:
Input: 07:05:45PM
Output: 19:05:45

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int hh = stoi(s.substr(0,2));
    string meridian = s.substr(8,2);

    if(meridian=="AM"&&hh==12) hh=0;
    if(meridian=="PM"&&hh!=12) hh+=12;

    printf("%02d:%s",hh,s.substr(3,5).c_str());
    return 0;
}