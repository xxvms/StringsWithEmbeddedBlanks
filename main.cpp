#include <fstream>

int main() {
    std::ofstream outfile("TEST.TXT");                                      // create file for output
    outfile << "I fear thee, ancient Mariner! \n";
    outfile << "I fear thy skinny hand \n";
    outfile << "And thour art long and lank, and brown \n";
    outfile << "As is the ribbed sea sand \n";
    return 0;
}