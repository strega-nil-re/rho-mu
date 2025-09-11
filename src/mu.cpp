#include <mu.h>

#include <print>
#include <string_view>

namespace mu {

void do_the_thing(std::string_view name) {
  std::println("Hello, {}!", name);
}

}
