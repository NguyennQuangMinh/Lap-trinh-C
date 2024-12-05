//quan ly sach bang con tro
#include <stdio.h>
#include <string.h>

struct books{
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
};

void inSach(struct books *ptr){
	printf("book tittle: %s\n", ptr->title);
	printf("book author: %s\n", ptr->author);
	printf("book subject: %s\n", ptr->subject );
	printf("book id: %d\n", ptr->book_id);
}

int main(){
	struct books book_1, book_2;
	
	//Book_1
	strcpy(book_1.title, "C programming");
	strcpy(book_1.author, "Nuha Ali");
	strcpy(book_1.subject, "C programming Turtorials");
	book_1.book_id = 65434;
	
	//Book2_2
	strcpy(book_2.title, "Telecom Billing");
	strcpy(book_2.author, "Zara");
	strcpy(book_2.subject, "Telecom Billing Turtorials");
	book_2.book_id = 93545;
	
	inSach(&book_1);
	inSach(&book_2);
	
}
