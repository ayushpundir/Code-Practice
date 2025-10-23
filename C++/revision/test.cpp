#include <iostream>

// Currency conversion
double usdToEur(double usd) {
    const double exchangeRate = 0.88;
    return usd * exchangeRate;
}

double eurToUsd(double eur) {
    const double exchangeRate = 1.13;
    return eur * exchangeRate;
}

// Distance unit conversion
double metersToFeet(double meters) {
    const double conversionFactor = 3.281;
    return meters * conversionFactor;
}

double feetToMeters(double feet) {
    const double conversionFactor = 0.305;
    return feet * conversionFactor;
}

// Time unit conversion
double secondsToMinutes(double seconds) {
    const double conversionFactor = 1.0 / 60.0;
    return seconds * conversionFactor;
}

double minutesToSeconds(double minutes) {
    const double conversionFactor = 60.0;
    return minutes * conversionFactor;
}

int main() {
    // Currency conversion
    double usdAmount = 100.0;
    double convertedEur = usdToEur(usdAmount);
    std::cout << usdAmount << " USD is equivalent to " << convertedEur << " EUR." << std::endl;

    double eurAmount = 150.0;
    double convertedUsd = eurToUsd(eurAmount);
    std::cout << eurAmount << " EUR is equivalent to " << convertedUsd << " USD." << std::endl;

    // Distance unit conversion
    double meters = 100.0;
    double convertedFeet = metersToFeet(meters);
    std::cout << meters << " meters is equivalent to " << convertedFeet << " feet." << std::endl;

    double feet = 328.1;
    double convertedMeters = feetToMeters(feet);
    std::cout << feet << " feet is equivalent to " << convertedMeters << " meters." << std::endl;

    // Time unit conversion
    double seconds = 180.0;
    double convertedMinutes = secondsToMinutes(seconds);
    std::cout << seconds << " seconds is equivalent to " << convertedMinutes << " minutes." << std::endl;

    double minutes = 2.5;
    double convertedSeconds = minutesToSeconds(minutes);
    std::cout << minutes << " minutes is equivalent to " << convertedSeconds << " seconds." << std::endl;

    return 0;
}