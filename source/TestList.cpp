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


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
