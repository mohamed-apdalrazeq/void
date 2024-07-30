//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "clock"    , 60 ,  1  },
  {"",  "cpu"      , 1  ,  16 }, 
  {"VOL",  "voulum"   , 0  ,  30 },
  {"",  "internet" , 5  ,  4  },
  {"",  "battery"  , 5  ,  4  },

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
