/* auto-generated on Tue 02 Jul 2019 04:34:44 PM EDT. Do not edit! */

#include <iostream>
#include "simdjson.h"
#include "simdjson.cpp"
using namespace simdjson;
int main(int argc, char *argv[]) {
  const char * filename = argv[1];
  padded_string p = get_corpus(filename);
  ParsedJson pj = build_parsed_json(p); // do the parsing
  if( ! pj.isValid() ) {
    std::cout << "not valid" << std::endl;
  } else {
    std::cout << "valid" << std::endl;
  }
  return EXIT_SUCCESS;
}

