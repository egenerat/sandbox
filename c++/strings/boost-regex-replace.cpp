#include <iostream>
#include <boost/algorithm/string/replace.hpp>

std::string cleanString (std::string input) {
    std::string output = boost::replace_all_copy(input, "blah", "____");
    boost::replace_all(output, "alert()", "");
    return output;
}

int main () {
    const std::string input = "blah#blah<script>alert()</script>";
    std::cout << cleanString(input) << std::endl;
}

