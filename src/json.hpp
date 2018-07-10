#pragma once

#include <cstdio>
#include <string>

#include <json/json.h>

std::string getFromJsonString(const std::string &raw, const std::string &key) {
  Json::Reader parser;
  Json::Value all;
  parser.parse(raw, all);
  std::string res = all[key].asString();
  return res;
}

bool getFromJsonBool(const std::string &raw, const std::string &key) {
  Json::Reader parser;
  Json::Value all;
  parser.parse(raw, all);
  bool res = all[key].asBool();
  return res;
}

float getFromJsonFloat(const std::string &raw, const std::string &key) {
  Json::Reader parser;
  Json::Value all;
  parser.parse(raw, all);
  float res = all[key].asFloat();
  return res;
}

int getFromJsonInt(const std::string &raw, const std::string &key) {
  Json::Reader parser;
  Json::Value all;
  parser.parse(raw, all);
  int res = all[key].asInt();
  return res;
}
