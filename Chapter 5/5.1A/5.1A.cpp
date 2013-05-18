#include <iostream>

struct List {
	int data;
	List *next;
  List(int x, List *nxt): data(x), next(nxt) {};
};

List* createList() {
	List *first = NULL;
	List **previousExtensionPoint = &first;
  for (int i = 0; i < 8; ++i) {
  	List *current = new List(i, NULL);
  	*previousExtensionPoint = current;
  	previousExtensionPoint = &(current->next);
  }
  return first;
}

void outputList(List* list) {
	while (list != NULL) {
		std::cout << (list->data) << " ";
		list = list->next;
	}
	std::cout << std::endl;
}

int getFromList(List* list, int index) {
	for (int i = 0; i < index; ++i) {
		list = list->next;
	}
	return list->data;
}

int main() {
	int index;
	std::cin >> index;
	List* list = createList();
	outputList(list);
	std::cout << getFromList(list, index) << std::endl;
	return 0;
}