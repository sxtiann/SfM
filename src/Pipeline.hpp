#pragma once

#include "structures.hpp"

class Pipeline {

public:
	/**
	 * Constructors
	 */
	Pipeline(std::string folder_path);

	/**
	 * Run pipeline
	 */
	void run();

private:
	std::string folder_path;

	void load_images(std::string _folder_path, Images& images);

	void find_matching_pairs(const Images& images, const CamFrames& camframes, ImagePairs& pairs);
};