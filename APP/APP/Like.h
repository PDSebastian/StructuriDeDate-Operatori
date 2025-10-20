#pragma once
#include"User.h"
class Like
{
private:
	int user_id;
	int photo_id;
	string created_at;
public:
	Like() = default;
	Like(int user_id, int photo_id, string created_at) {
		this->user_id = user_id;
		this->photo_id = photo_id;
		this->created_at = created_at;
	
	}
	~Like() {};
	void setUserID(int user_id) {
		this->user_id = user_id;
	}
	void setPhotoID(int photo_id) {
		this->photo_id = photo_id;
	}
	void setCreatedAt(string created_at) {
		this->created_at = created_at;
	}

	int getUserID() const{
		return user_id;
	}
	int getPhotoID()const {
		return photo_id;
	}
	string getCreatedAt()const {
		return created_at;
	}

};

