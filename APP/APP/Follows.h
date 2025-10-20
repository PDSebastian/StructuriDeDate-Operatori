#pragma once
#include"User.h"
class Follows
{
private:
	int follower_id;
	int followee_id;
	string created_at;
public :
	Follows() = default;
	Follows(int follower_id, int followee_id, string created_at) {
		this->followee_id = followee_id;
		this->follower_id = follower_id;
		this->created_at = created_at;
	}
	~Follows() {};
	
	void setFollowerID(int follower_id) {
		this->follower_id = follower_id;
	}
	void setFolloweeID(int followee_id) {
		this->followee_id = followee_id;
	}
	void setCreatedAT(string created_at) {
		this->created_at = created_at;
	}

	int getFollowerID() const {
		return follower_id;
	}
	int getFolloweeID() const {
		return followee_id;
	}
	string getCreatedAT()const {
		return created_at;
	}








};

