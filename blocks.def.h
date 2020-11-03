//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "kbselect", 0, 30}, */
	// {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11}, */
	{"",	"pacpackages",	120,	8},
	/* {"",	"torrent",	20,	7}, */
	{"",	"basename \"$(cat ~/scripts/wallpaper/current)\"",	5,	14}, 
	{"",	"memory",	2,	14}, 
	// {"",	"cpu",		10,	18}, 
	{"",	"cpubars",		1,	18}, 
	{"",	"nettraf",	1,	16},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	1},
	// {"",	"help-icon",	0,	15},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
