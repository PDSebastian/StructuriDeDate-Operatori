#pragma once
#include"User.h"
class Photo_tags
{
private:
	int photo_id;
	int tag_id;
public:
	Photo_tags() = default;
	Photo_tags(int photo_id, int tag_id) {
		this->photo_id = photo_id;
		this->tag_id = tag_id;
	}
	~Photo_tags() {};

	void setPhotoID(int  photo_id) {
		this->photo_id = photo_id;
	}
	void setTagID(int tag_id) {
		this->tag_id = tag_id;
	}
	int getPhotoID() const {
		return photo_id;
	}
	int getTagID() const {
		return tag_id;

	}


};

