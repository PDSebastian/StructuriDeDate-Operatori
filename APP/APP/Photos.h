#pragma once
#include"User.h"

class Photos
{
	int photoID;
	string image_url;
	int user_id;
	string created_at;
public:
	Photos() {};
	Photos(int photoID, string image_url, int user_id, string created_at) {
		this->photoID= photoID;
		this->image_url = image_url;
		this->user_id = user_id;
		this->created_at = created_at;

	}
	void setID(int id) {
		this->photoID = id;
	}
	void setImageURL(string url) {
		this->image_url = url;

	}
	void setUserID(int userID) {
		this->user_id = userID;
	}
	void setCreatedAt(string created) {
		this->created_at = created;
	}

	int getID() const {
		return this->photoID;
	}
	string getImageUrl() const  {
		return this->image_url;
	}
	string createdAt() const  {
		return this->created_at;
	}
	friend ostream& operator<<(ostream& os, const Photos& p) {
		os << p.photoID << endl;
		os << p.image_url << endl;
		os << p.user_id << endl;
		os << p.created_at << endl;
		return os;
	
	}
	bool operator==(const Photos& p) const {
		return this->photoID == p.photoID;
	}
	bool operator!=(const Photos& p) const {
		return !(*this == p);
	}

};

