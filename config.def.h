/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

static int change_per_avg = 3;

static const char *input_colorname[NUMCOLORS] = {
    "#005577",
    "#762100",
    "#00765D",
    "#001976",
    "#765D00",
    "#007621",
    "#760055",
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
