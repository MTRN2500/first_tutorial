#include <iostream>

int main (int argc, char * argv[]) // int main () is also ok if you are not taking commandline arguments.
{
   std::cout << "Hello world!\n"; // "\n" and std::endl are both acceptable. std::endl flushes the output bufffer, '\n' does not.
   return 0;
}