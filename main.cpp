#include <iostream>

int main() {
    int human;
    std::cout << "How many men live in the city? ";
    std::cin >> human;

    int barberHour = 1;
    int changeBarber = 8;
    int barber;

    std::cout << "How many barbers are already working? ";
    std::cin >> barber;
    std::cout << std::endl;

    int necessaryBarber;
    int barberMonth = barberHour * changeBarber * 30;
    necessaryBarber = human / barberMonth;
    if (human % barberMonth == 0) {
        necessaryBarber = necessaryBarber;
    } else {
        necessaryBarber += 1;
    }
    std::cout << "For service " << human << " men per month, necessary "  << necessaryBarber << " barbers." << std::endl;
    std::cout << barber << " barber can get a haircut "
              << barber * barberMonth  << " men in a month." << std::endl;

    if (barber >= necessaryBarber){
        std::cout << "There are enough barbers in barbershops " << std::endl;
    } else {
        std::cout << "There aren't enough barbers in barbershops " << std::endl;
    }
}

