#include <iostream>
#include <stdlib.h>
#include <time.h>

struct List {
	int data;
	List *next;
	List(int x, List *nxt): data(x), next(nxt) {};
};

List* createList() {
	srand(time(NULL));
	int size = rand() % 100 + 1;
	List *first = NULL;
	List **previousExtensionPoint = &first;
	for (int i = 0; i < size; ++i) {
		List *current = new List(i, NULL);
		*previousExtensionPoint = current;
		previousExtensionPoint = &(current->next);
	}
	*previousExtensionPoint = first;
	return first;
}

int size(List* list) {
	List* current = list;
	int size = 0;
	do {
		current = current->next;
		size += 1;
	} while (current != list);

	return size;
}

int main() {
	List* list = createList();
	std::cout << size(list) << " " << size(list->next->next) << std::endl;
	return 0;
}