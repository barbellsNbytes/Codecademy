#include <iostream>

using namespace std;

int main() {

	string choice = "blank";
	bool bobbypin = false, celldoor_locked = true;

	cout << "Available commands: \n";
	cout << "	North	--> Move North\n";
	cout << "	South	--> Move South\n";
	cout << "	East	--> Move East\n";
	cout << "	West	--> Move West\n";
	cout << "	Grab	-->	Grab and object in the room\n";
	cout << "	Use	--> Use and object from your inventory\n";
	cout <<	"	Map	--> Review a map of the area\n";
	cout << "	Inventory	-->	Check inventory\n";
	cout << " \n\n";
	

	cout << "You wake up in a jail cell. Looking around, you see three walls and a locked cell door to the North.\n";
	cout << "The pile of straw on the floor is your bed and bucket in the corner is for...well...you'd rather not think about it.\n\n";

	
	
	while (choice == "blank") {
		cout << "What do you do?\n\n";
		cin >> choice;

		if (choice == "north" && celldoor_locked == false) {
			cout << "The lock on the door opens on your third attempt, but the bobby pin is broken inside the lock.\n";
			break;
		}
		else if (choice == "north" && celldoor_locked == true) {
			cout << "Your hands attempt to push open the cold steel bars in front of you. They barely rattle.\n";
		}
		else if (choice == "south" || choice == "east" || choice == "west") {
			cout << "Your hands push against the cold stone walls. It doesn't move.\n";
		}
		else if (choice == "grab" && bobbypin == false) {
			cout << "You go to sit on the straw bed and are poked by something sharp. Digging through the bed, you find a bobby pin!\n";
			bobbypin = true;
		}
		else if (choice == "grab" && bobbypin == true) {
			cout << "You've searched through the straw bed, so you decide to check the bucket. You find nothing.\n";
		}
		else if (choice == "use" && bobbypin == true) {
			cout << "You use the bobbypin to unlock the celldoor. However, its stuck in there pretty good.\n";
			bobbypin = false;
			celldoor_locked = false;
		}
		else if (choice == "use" && bobbypin == false) {
			cout << "There's nothing for you to use.\n";
		}
		else if (choice == "map") {
			cout << " D \n";
			cout << "|X|\n";
			cout << " - \n";
		}
		else {
			cout << "not an option\n";
		}

		choice = "blank";

	}
	cout << "\n";
}