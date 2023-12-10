// Print a Pyramid:

// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Right Triangle:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Square:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows and columns
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }
// ```

// Print a Hollow Rectangle:
// #include <iostream>

// int main() {
//     int rows = 4;
//     int cols = 6;
    
//     for (int i = 1; i <= rows; ++i) {
//         for (int j = 1; j <= cols; ++j) {
//             if (i == 1 || i == rows || j == 1 || j == cols)
//                 std::cout << "*";
//             else
//                 std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }
// ```

// Print a Pascal's Triangle:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 0; i < n; ++i) {
//         int num = 1;
//         for (int j = 0; j <= i; ++j) {
//             std::cout << num << " ";
//             num = num * (i - j) / (j + 1);
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print an Inverted Pyramid:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = n; i >= 1; --i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Diamond Pattern:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     for (int i = n - 1; i >= 1; --i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Number Pattern:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << j << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Hollow Pyramid:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             if (j == 1 || j == 2 * i - 1)
//                 std::cout << "*";
//             else
//                 std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Hollow Diamond Pattern:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             if (j == 1 || j == 2 * i - 1)
//                 std::cout << "*";
//             else
//                 std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     for (int i = n - 1; i >= 1; --i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             if (j == 1 || j == 2 * i - 1)
//                 std::cout << "*";
//             else
//                 std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Hollow Right Triangle:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             if (j == 1 || j == i || i == n)
//                 std::cout << "*";
//             else
//                 std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

//Print an Alphabetic Pattern:
// #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     char ch = 'A';
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << ch << " ";
//             ++ch;
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }


// Print a Hollow Alphabetic Pattern:
//  #include <iostream>

// int main() {
//     int n = 5; // Number of rows
//     char ch = 'A';
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             if (j == 1 || j == i || i == n)
//                 std::cout << ch << " ";
//             else
//                 std::cout << "  ";
//             ++ch;
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }


// Print a Number Pyramid:

// #include <iostream>

// int main() {
//     int n = 6; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             std::cout << j;
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Number Right Triangle:
// #include <iostream>

// int main() {
//     int n = 6; // Number of rows
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             std::cout << j;
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Number Square:
// #include <iostream>

// int main() {
//     int n = 6; // Number of rows and columns
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             std::cout << j;
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Print a Hollow Number Square
// #include <iostream>

// int main() {
//     int n = 6; // Number of rows and columns
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             if (i == 1 || i == n || j == 1 || j == n)
//                 std::cout << j;
//             else
//                 std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }
