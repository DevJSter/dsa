#include <iostream>
#include <ctime>

struct Date {
    int year;
    int month;
    int day;
};

struct Age {
    int years;
    int months;
    int weeks;
    int days;
};

Age calculateAge(const Date& birthDate) {
    std::time_t now = std::time(nullptr);
    std::tm* current_tm = std::localtime(&now);
    int currentYear = current_tm->tm_year + 1900;
    int currentMonth = current_tm->tm_mon + 1;
    int currentDay = current_tm->tm_mday;

    Age age;
    age.years = currentYear - birthDate.year;
    age.months = currentMonth - birthDate.month;
    age.days = currentDay - birthDate.day;

    if (age.months < 0) {
        age.years--;
        age.months += 12;
    }

    if (age.days < 0) {
        age.months--;
        if (age.months < 0) {
            age.years--;
            age.months += 12;
        }
        age.days += 30; // Assuming each month has 30 days
    }

    age.weeks = age.days / 7;
    age.days = age.days % 7;

    return age;
}

int main() {
    Date birthDate;

    std::cout << "Enter the birth year: ";
    std::cin >> birthDate.year;

    std::cout << "Enter the birth month: ";
    std::cin >> birthDate.month;

    std::cout << "Enter the birth day: ";
    std::cin >> birthDate.day;

    Age age = calculateAge(birthDate);
    std::cout << "You are " << age.years << " years, " << age.months << " months, " << age.weeks << " weeks, and " << age.days << " days old!\n";
    return 0;
}
