#pragma once

#include <SFML/Graphics/Texture.hpp>
#include <memory>
#include <stdexcept>
#include <unordered_map>

template <typename Identifier, typename Resource>
class ResourceHolder
{
public:
	void load(Identifier id, const std::string& filename);
	template<typename Params>
	void load(Identifier id, const std::string& filename, Params& Secondparams);

	Resource& get(Identifier id);
	const Resource& get(Identifier id) const;

private:
	void insert(Identifier, std::unique_ptr<Resource> pResource);

private:
	std::unordered_map<Identifier, std::unique_ptr<Resource>> m_ResourceMap;
};

#include "Core/ResourceHolder.inl"
