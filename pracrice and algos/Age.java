import java.time.LocalDate;
import java.time.Period;
import java.util.Scanner;

class Age {
    int years;
    int months;
    int weeks;
    int days;
}

class Main {
    public static Age calculateAge(LocalDate birthDate) {
        LocalDate currentDate = LocalDate.now();
        Period agePeriod = Period.between(birthDate, currentDate);

        Age age = new Age();
        age.years = agePeriod.getYears();
        age.months = agePeriod.getMonths();
        age.weeks = agePeriod.getDays() / 7;
        age.days = agePeriod.getDays() % 7;

        return age;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the birth year: ");
        int birthYear = scanner.nextInt();

        System.out.print("Enter the birth month: ");
        int birthMonth = scanner.nextInt();

        System.out.print("Enter the birth day: ");
        int birthDay = scanner.nextInt();

        LocalDate birthDate = LocalDate.of(birthYear, birthMonth, birthDay);
        Age age = calculateAge(birthDate);

        System.out.println("The person is " + age.years + " years, " + age.months + " months, " + age.weeks + " weeks, and " + age.days + " days old.");

        scanner.close();
    }
}