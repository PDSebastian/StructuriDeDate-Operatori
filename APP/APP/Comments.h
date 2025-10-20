#pragma once
#include"User.h"
class Comments
{
private:
	int idComment;
	int photo_id;
	int user_id;
	string created_at;
	string comment_text;
public:
	Comments() = default;
	Comments(int idComment, int photo_id, int user_id, string created_at, string comment_text) {
		this->idComment = idComment;
		this->user_id = user_id;
		this->created_at = created_at;
		this->comment_text = comment_text;


	
	}
	~Comments() {};
	void setIdComment(int idComment) {
		this->idComment=idComment;
	}
	void setPhotoID(int photo_id) {
		this->photo_id = photo_id;
	}
	void setUserID(int user_id) {
		this->user_id = user_id;
	}
	void setCreatedAt(string created_at) {
		this->created_at = created_at;
	}
	void setCommentText(string comment_text) {
		this->comment_text = comment_text;
	}

	int getidComment() {
		return idComment;
	}
	int getPhotoID() {
		return photo_id;
	}
	int getUserID() {
		return user_id;
	}
	string getCreatedAt() {
		return created_at;
	}
	string getCommentText() {
		return comment_text;
	}
};

