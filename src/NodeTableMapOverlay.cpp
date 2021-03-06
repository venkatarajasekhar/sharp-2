#ifdef HAVE_CONFIG_H
	#include <config.h>
#endif

#include "NodeTableMapOverlay.hpp"

#include <stdexcept>

namespace sharp
{
	using htd::vertex_t;
	
	NodeTableMapOverlay::NodeTableMapOverlay(
			const INodeTableMap &original,
			htd::vertex_t node,
			const ITable &replacement)
		: map_(original), node_(node), replacement_(replacement)
	{ }

	NodeTableMapOverlay::~NodeTableMapOverlay() { }

	ITable &NodeTableMapOverlay::operator[](vertex_t)
	{
		throw std::runtime_error("Unimplemented function! 3");
	}

	ITable &NodeTableMapOverlay::at(vertex_t)
	{
		throw std::runtime_error("Unimplemented function! 4");
	}

	const ITable &NodeTableMapOverlay::operator[](vertex_t node) const
	{
		if(node == node_)
			return replacement_;
		return map_[node];
	}

	const ITable &NodeTableMapOverlay::at(vertex_t node) const
	{
		if(node == node_)
			return replacement_;
		return map_.at(node);
	}

	void NodeTableMapOverlay::clear()
	{
		//TODO: nasty!
		const_cast<INodeTableMap&>(map_).clear();
	}

	bool NodeTableMapOverlay::contains(vertex_t node) const
	{
		return node == node_ || map_.contains(node);
	}

} // namespace sharp
