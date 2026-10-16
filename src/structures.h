#pragma once
#include <string>
#include <vector>

struct Blob {
	std::string contents;
	std::string hash;
};

struct Commit {
	std::string treehash;
	std::string parenthash;
	std::string metadeta;
	std::string commithash;
	std::string contents;

};

struct TreeEntry {
	std::string name;
	std::string hash;
	bool isDirectory;
};

struct Tree {
	std::string hash;
	std::vector<TreeEntry> contents;
};

