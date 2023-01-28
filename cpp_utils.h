#ifndef _CPP_UTILS_H_
#define _CPP_UTILS_H_

#include <iostream>

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
