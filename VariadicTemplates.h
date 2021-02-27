#pragma once

#include <sstream>
#include <vector>

template<typename T>
std::string to_string(const T& param)
{
	std::stringstream ss;
	ss << param;
	return ss.str();
}

template<typename T, typename ...G>
std::vector<std::string> to_string_vector(const T& first_param, const G&... other_params)
{
	std::vector<std::string> ans;
	ans.push_back(to_string(first_param));

	if constexpr (sizeof...(other_params) > 0)
	{
		auto other_ans = to_string_vector(other_params...);
		ans.insert(ans.end(), other_ans.begin(), other_ans.end());
	}

	return ans;
}