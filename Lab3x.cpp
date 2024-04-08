#include <iostream>
#include <regex>
#include <filesystem>
#include <fstream>

void countFiles(const std::string& path, const std::regex& pattern)
{
	int count = 0;
	for (auto& entry : std::filesystem::directory_iterator(path))
	{
		if (entry.is_regular_file() && std::regex_match(entry.path().string(), pattern))
		{
			count++;
		}
	}
	std::filesystem::path output_dir("output");
	std::filesystem::create_directories(output_dir);
	std::ofstream outfile(output_dir / "dll_count.txt");
	outfile << "Liczba plikow DLL= " << count << std::endl;
	outfile.close();
}


int main()
{
	std::string path = "C:\\Windows\\System32";
	std::regex pattern(".*\\.dll$");
	countFiles(path, pattern);
	return 0;
}
