#include <ctime>
#include <string>
#include "Date.h"
using namespace std;

  Date::Date() {
    /*
    https://stackoverflow.com/questions/14386923/localtime-vs-localtime-s-and-appropriate-input-arguments
    This compliled but didn't output right numbers at all...
    time_t TM;
    struct tm timeinfo;
    localtime_s(&timeinfo, &TM);
    */

    // Have to add _CRT_SECURE_NO_WARNINGS to Visual Studio c++ preprocessor definitions for localtime to work
    //If you don't it tells you to put localtime_s and I don't know how to change my code to work with that...(see above)
    time_t tt;
    time(&tt);
    tm timeinfo = *localtime(&tt);


    year = timeinfo.tm_year + 1900;
    month = timeinfo.tm_mon + 1;
    day = timeinfo.tm_mday;
    //Outputs time without military format.
    if (timeinfo.tm_hour > 12) {
      hour = timeinfo.tm_hour - 12;
      PMorAM = "PM";
    }
    else {
      hour = timeinfo.tm_hour;
      PMorAM = "AM";
    }
    minute = timeinfo.tm_min;
  }

  Date::Date(int monthInput, int dayInput, int yearInput) {
    year = yearInput;
    month = monthInput;
    day = dayInput;
  }


  Date::Date(int monthInput, int dayInput, int yearInput, int hourInput, int minuteInput, string when) {
    year = yearInput;
    month = monthInput;
    day = dayInput;

    hour = hourInput;
    minute = minuteInput;
    PMorAM = when;
  }

  int Date::getYear() { return year; }
  int Date::getDay() { return day; }
  int Date:: getMonth() { return month; }

  int Date::getHour() { return hour; }
  int Date::getMinute() { return minute; }

  string Date::getPMorAM() { return PMorAM; }
