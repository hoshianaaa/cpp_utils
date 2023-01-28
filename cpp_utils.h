#ifndef _CPP_UTILS_H_
#define _CPP_UTILS_H_

#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

/*create json object*/
/*
  json j;
  j["pi"] = 3.141;
  j["happy"] = true;
  j["name"] = "Niels";
  j["nothing"] = nullptr;
  j["answer"]["everything"] = 42;  // 存在しないキーを指定するとobjectが構築される
  j["list"] = { 1, 0, 2 };         // [1,0,2]
  j["object"] = { {"currency", "USD"}, {"value", 42.99} };  // {"currentcy": "USD", "value": 42.99}
*/

json json_parse(std::string s, bool debug=false)
{
    json j = json::parse(s);

    if (debug)
      std::cout << j << std::endl;

    return j;
}


std::string list2string(std::vector<std::string> list)
{
  std::string ret;
  int size = list.size();
  for (int i=0;i<size;i++)
  {
    ret += list[i];
    if (i!=size-1)
      ret += ",";
  }
  return ret;
}

double per2pix(double per)
{
return per / 100 * 255;
}

#endif
