#pragma once

#include<algorithm>


auto find_max = [](auto first_arg, auto ...other_args)
{
	if constexpr (sizeof...(other_args) > 0)
		return std::max(first_arg, find_max(other_args...));
	else
		return first_arg;
};	