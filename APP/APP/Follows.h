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
	bool operator==(const Follows& f) const {
		return this->follower_id == f.follower_id && this->followee_id == f.followee_id;
	}
	bool operator!=(const Follows& f) const {
		return !(*this ==f);
	}
	friend ostream& operator<<(ostream& os, Follows& f) {
		os << f.created_at << endl;
		os << f.followee_id << endl;
		os << f.follower_id << endl;
		return os;
	}
	






};

