#include <iostream>

struct gensokyo {
	char name[40];
	int dd, mm, yy;
	char *proff;
	gensokyo *next;
};

gensokyo Sakuya = {"十六夜 咲夜", 0, 0, 1990, "maid", NULL};
gensokyo Remilia = {"レミリア・スカーレット", 0, 0, 1503, "scarlet devil", &Sakuya};
gensokyo *p = &Remilia;

void someFunction() {
	char c1, c2, c3, c4;
	c1 = Sakuya.name[2];
	c2 = Remilia.proff[3];
	c3 = p->name[3];
	c4 = p->next->proff[1];
	std::cout << std::endl << "Powered by " << Sakuya.name << " and " << Remilia.name << std::endl;
	std::cout << c1 << c2 << c3 << c4 << std::endl << std::endl;
}

int main() {
	someFunction();
	return 0;
}
