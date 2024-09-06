#include <iostream>

// 1. Class-wide data sharing
class Counter {
public:
    static int count;
    Counter() { count++; }
};
int Counter::count = 0;

// 2. Maintaining state
void incrementAndPrint() {
    static int value = 0;
    value++;
    std::cout << "Value: " << value << std::endl;
}

// 3. Global access
class MathUtils {
public:
    static const double PI;
    static double square(double x) { return x * x; }
};
const double MathUtils::PI = 3.14159265358979323846;

// 4. Memory efficiency
// (Same as example 1, Counter class)

// 5. Implementing singletons
class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
private:
    Singleton() {}
};

// 6. Counting objects
// (Same as example 1, Counter class)

// 7. Utility functions
class StringUtils {
public:
    static bool isPalindrome(const std::string& str) {
        return str == std::string(str.rbegin(), str.rend());
    }
};

int main() {
    // Usage examples
    Counter c1, c2, c3;
    std::cout << "Number of Counter objects: " << Counter::count << std::endl;

    incrementAndPrint();
    incrementAndPrint();

    std::cout << "PI: " << MathUtils::PI << std::endl;
    std::cout << "5 squared: " << MathUtils::square(5) << std::endl;

    Singleton& s = Singleton::getInstance();

    std::cout << "Is 'racecar' a palindrome? " 
              << (StringUtils::isPalindrome("racecar") ? "Yes" : "No") << std::endl;

    return 0;
}