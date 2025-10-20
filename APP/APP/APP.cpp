
#include "User.h"
#include "Photos.h"
#include "Service.h"
#include"Comments.h"
#include"Tags.h"

int main()
{
	Service<Photos>* s = new Service<Photos>();
	User* u1 = new User(11, "Andrei");
	User* u2 = new User(12, "Ana");

	if (s->addUser(*u1) == false) {
		cout << " exista user " << endl;
	}
	else {
		cout << "user adaugat" << endl;
	}

	Photos* p1 = new Photos(1, "poza1", 2, "22:30");
	Photos* p2 = new Photos(2, "poza2", 3, "21:30");
	s->add(*u1, *p1);
	s->add(*u2, *p2);

	Service<Comments>* s2 = new Service<Comments>();
	Comments* c1 = new Comments(1, 1, 1, "2025", "Like");
	Comments* c2 = new Comments(2, 2, 2, "2026", "Like");
	
	s2->addUser(*u1);
	s2->addUser(*u2);
	s2->add(*u1, *c1);
	s2->add(*u2, *c2);

	Service<Follows>* s3 = new Service<Follows>();
	
	Follows* f1 = new Follows(u1->getID(), u2->getID(), "2025-10-18");
	Follows* f2 = new Follows(u2->getID(), u1->getID(), "2025-10-18");

	s3->add(*u1, *f1);
	s3->add(*u2, *f2);

	Service<Tags>* s4 = new Service<Tags>();
	Tags* t1 = new Tags(1, "Nature","10-03-2025");
	Tags* t2 = new Tags(2, "Travel","20-10-2025");

	s4->add(*u1, *t1);
	s4->add(*u2, *t2);
	



	s->userContent(*u1);






}


