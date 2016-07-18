#pragma once

template<class T>
class shared_ptr
{
public:
	// copy constructor
	shared_ptr(shared_ptr const& r);

	// generalized copy constructor
	template<class Y>
	shared_ptr(shared_ptr<Y> const& r);

	// copy assignment
	shared_ptr& operator=(shared_ptr const& r);

	template<class Y>
	shared_ptr& operator=(shared_ptr<Y> const& r);
};