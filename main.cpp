#include <iostream>
#include <cstdio>
#include <string>
int main() {
    std::freopen("~/etc/nixos/configuration.nix", "r", stdin);
    std::cout << "Hello! Welcome to Nix2Unix. Let's generate a download template for other distros";
    std::cout << " based on your configuration.nix!\n";
    std::string confignix;
    std::getline(std::cin, confignix);
    std::cout << "Nix config: " << confignix;
    return 0;
}
