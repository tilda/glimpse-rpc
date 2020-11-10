#include <libgimp/gimp.h>

static void init  (void);
static void quit  (void);
static void query (void);
static void run   (const gchar      *name,
                   gint              nparams,
                   const GimpParam  *param,
                   gint             *nreturn_vals,
                   GimpParam       **return_vals);

GimpPlugInInfo PLUG_IN_INFO {
    init,
    quit,
    query,
    run
};

MAIN(); // cringe

static void init(void) {

};

static void quit(void) {

};

static void query(void) {

};

static void run(const gchar *name, gint nparams, const GimpParam *param, gint *nreturn_vals, GimpParam **return_vals) {

};

