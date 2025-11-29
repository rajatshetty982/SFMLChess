
template <typename Identifier, typename Resource>
void ResourceHolder<Identifier, Resource>::load(Identifier id, const std::string& filename)
{
	std::unique_ptr<Resource> pResource = std::make_unique<Resource>();
	if (!pResource->loadFromFile(filename))
		throw std::runtime_error("ResourceHolder::load - Failed to load from file: " + filename);

	auto inserted = m_ResourceMap.insert(std::make_pair(id, std::move(pResource)));
	assert(inserted.second);
}

template <typename Identifier, typename Resource>
template <typename Params>
void ResourceHolder<Identifier, Resource>::load(Identifier id, const std::string& filename, Params& secondParams)
{
	std::unique_ptr<Resource> pResource = std::make_unique<Resource>();
	if (!pResource->loadFromFile(filename, secondParams))
		throw std::runtime_error("ResourceHolder::load - Failed to load from file: " + filename);

	auto inserted = m_ResourceMap.insert(std::make_pair(id, std::move(pResource)));
	assert(inserted.second);
}

template <typename Identifier, typename Resource>
Resource& ResourceHolder<Identifier, Resource>::get(Identifier id)
{
	auto found = m_ResourceMap.find(id);
	assert(!found.end());
	return *found->second;
}

template <typename Identifier, typename Resource>
const Resource& ResourceHolder<Identifier, Resource>::get(Identifier id) const
{
	auto found = m_ResourceMap.find(id);
	assert(!found.end());
	return *found->second;
}

template <typename Identifier, typename Resource>
void ResourceHolder<Identifier, Resource>::insert(Identifier id, const std::unique_ptr<Resource> pResource)
{
	auto inserted = m_ResourceMap.insert(std::make_pair(id, std::move(pResource)));
	assert(inserted.second && "ResourceHolder::insert - Failed -  Resource not inserted");
}

