#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

class URLShortener {
    std::unordered_map<std::string, std::string> urls;
    int counter;

public:
    URLShortener() : counter(1) {}

    std::string encode(int num) {
        std::string base62 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        std::string encoded;
        
        while (num > 0) {
            encoded = base62[num % 62] + encoded;
            num /= 62;
        }
        
        return encoded;
    }

    std::string shortenURL(const std::string& url) {
        if (urls.count(url) > 0) {
            return urls[url];
        } else {
            std::string shortURL = encode(counter);
            urls[url] = shortURL;
            counter++;
            return shortURL;
        }
    }
};

int main() {
    URLShortener shortener;

    std::string url;
    std::cout << "Enter the URL to shorten: ";
    std::getline(std::cin, url);

    std::string shortURL = shortener.shortenURL(url);
    std::cout << "Shortened URL: " << shortURL << std::endl;

    return 0;
}