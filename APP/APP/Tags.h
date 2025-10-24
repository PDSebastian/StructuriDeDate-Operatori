#pragma once
#include"User.h"
class Tags
{
private:
	int idTags;
	string tag_name;
	string created_at;
public:
	Tags() = default;
	Tags(int idTags, string tag_name, string created_at) {
		this->created_at = created_at;
		this->tag_name = tag_name;
		this->idTags = idTags;

	}
	
	void setIdTags(int idTags) {
		this->idTags = idTags;
	}
	void setTag_name(string tag_name) {
		this->tag_name = tag_name;
	}
	void setCreatedAt(string created_at) {
		this->created_at = created_at;
	}

	int getIdTag() const {
		return idTags;
	}
	string getTagName() const {
		return tag_name;
	}
	string getCreatedAt() const {
		return created_at;
	}
	friend ostream& operator<<(ostream& os, Tags& t) {
		os << t.created_at << endl;
		os << t.tag_name << endl;
		os << t.idTags << endl;
		return os;
	}
	
};

