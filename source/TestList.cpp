#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "List.hpp"
#include <vector>
#include <string>
#include <list>

TEST_CASE("test empty list", "[modifiers]")
{	

	List <int> list;
	REQUIRE (list.size()==0);
	REQUIRE (list.size()>=0);
	REQUIRE (list.empty() != false);
	REQUIRE (list.empty() == true);

}

TEST_CASE ("add an element with push_front ", "[ modifiers ]")
{
	List <int > list ;
	list . push_front (42);
	REQUIRE (42 == list . front ());
}



int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}