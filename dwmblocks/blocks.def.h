//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
 	 {"", 		 "clock" 	  , 60 ,  1  },
	 {"", 		 "weather" 	  , 600 ,  2 },
	 {"VOL",   	 "voulum"  	  , -1  ,  30 }, 
  	 {"", 		 "cpu"     	  , 3  ,  16 }, 
 	 {"", 		 "internet"	  , 3  ,  5  },
 	 {"", 		 "battery" 	  , 5  ,  4  },
	// {"", 	 "ffmpeg.sh"      , 0  , 22  },

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
