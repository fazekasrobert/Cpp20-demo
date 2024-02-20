#include <algorithm>
#include <format>
#include <iostream>
#include <span>
#include <string_view>
#include <vector>

struct Person {
  int id;
  std::string_view name;
};

using Persons = std::vector<Person>;

void print(std::span<Person> persons) {
  for (auto &&person : persons) {
    std::cout << std::format("id: {}, name: {}\n", person.id, person.name);
  }
}

int main() {
  Persons persons{{7, "sdflmk"}, {26, "we54"}, {4, "378hreb"}, {16, "barau"}};

  print(persons);
  std::ranges::sort(persons, std::ranges::less{}, &Person::id);
  std::cout << "-----------\n";
  print(persons);
  return 0;
}
