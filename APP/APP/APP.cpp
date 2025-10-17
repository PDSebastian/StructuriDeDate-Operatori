
#include "User.h"
#include "Photos.h"
#include "Service.h"

int main()
{
	Service* s = new Service();
	User* u1 = new User(11, "Andrei");
	User* u2 = new User(12, "Ana");

	if (s->addUser(*u1) == false) {
		cout << " exista user " << endl;
	}
	else {
		cout << "user adaugat" << endl;
	}

	Photos* p1 = new Photos(1, "ddwwfwfwf", 2, "22:30");
	Photos* p2 = new Photos(2, "fefefefe", 3, "21:30");

	s->addPhotos(*u1, *p1);
	s->addPhotos(*u2, *p2);

	s->afisarePozeUser(*u1);







}


