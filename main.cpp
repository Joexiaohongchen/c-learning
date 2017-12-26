//
//  main.cpp
//  usingFunction
//
//  Created by Xiaohong Chen on 12/25/17.
//  Copyright © 2017 Xiaohong Chen. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <cctype>
#include <cstdlib>
using namespace std;

int main() {
 
   /*
 //computesquareroot.cpp
    double input;
    // Get value from the user
    std::cout << "Enter number: ";
    std::cin >> input;
    double diff;
    // Compute a provisional square root
    double root = 1.0;
    do {  // Loop until the provisional root
        // is close enough to the actual root
        root = (root + input/root) / 2.0;
        std::cout << "root is " << root << '\n';
        // How bad is the approximation?
        diff = root * root - input;
        std::cout << diff << std::endl;
    }
    while (diff > 0.0001 || diff < -0.0001);
    // Report approximate square root
    std::cout << "Square root of " << input << " = " << root << '\n';
}
*/

//standardsquareroot.cpp
  /*  int input;
    cout << "Enter an integer: "<< endl;
    cin >> input;
    
    double root;
    root = sqrt(input);
    
    cout << "the square of root is: " << root << endl;
*/
 
//using square.cpp
    /*double x= 16.0;
     //a literal number
    cout << sqrt(16.0) << endl;
     //a numerical number
    cout << sqrt(x) << endl;
     //a arithmetic expression
    cout << 2*sqrt(x) <<endl;
     //a function invocation that produces an acceptable numeric
    cout << sqrt(sqrt(x)) << endl;
    */
    
    /*
    // Location of orbiting point is (x,y)
    double x;   // These values change as the
    double y; // satellite moves
    const double PI = 3.14159;
    // Location of fixed point is always (100, 0),
    // AKA (p_x, p_y).  Change these as necessary.
    const double p_x = 100;
    const double p_y = 0;
    // Radians in 10 degrees
    const double radians = 10 * PI/180;
    // Precompute the cosine and sine of 10 degrees
    const double COS10 = cos(radians);
    const double SIN10 = sin(radians);
    // Get starting point from user
    std::cout << "Enter initial satellite coordinates (x,y):";
    std::cin >> x >> y;
    // Compute the initial distance
    double d1 = sqrt((p_x - x)*(p_x - x) + (p_y - y)*(p_y - y));
    // Let the satellite orbit 10 degrees
    double x_old = x;  // Remember x's original value
    x = x*COS10 - y*SIN10;  // Compute new x value
    // x's value has changed, but y's calculate depends on
    // x's original value, so use x_old instead of x.
    y = x_old*SIN10 + y*COS10;
    // Compute the new distance
    double d2 = sqrt((p_x - x)*(p_x - x) + (p_y - y)*(p_y - y));
    // Print the difference in the distances
    std::cout << "Difference in distances: " << d2 - d1 << '\n';
}
    
    
    
   */


    
   //maxmin.cpp
  /*  int x, y;
    cout << " please enter two interger: " << endl;
    cin >> x >> y;
    
    cout << "The max interger is: " << max(x,y) << endl;
    cout << "The min interger is: " << min(x,y) << endl;
    
   */
    
    
    // timeit.cpp
    /*
    char letter;
    std::cout << "Enter a character: ";
    clock_t seconds = clock();    // Record starting time
    std::cin >> letter;
    clock_t other = clock();      // Record ending time
    std::cout << static_cast<double>(other - seconds)/CLOCKS_PER_SEC
    << " seconds\n";
     
     */
    
    //touppercase.cpp
    /*
    for (char lower = 'a'; lower <= 'z'; lower++){
        char upper = toupper(lower);
        cout << lower << "->" << upper << endl;
        
    }
   */
    
    /*srand(2); //Initialize random number generator
    for (int i = 0; i < 100; i++) {
        int r = rand();
        std::cout << r << " ";
    }
    std::cout << '\n';
    */
    
    
    
    srand(static_cast<unsigned>(time(0)));
    int value = rand() % 6 + 1;
    cout << value;


}

    
