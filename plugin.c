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

MAIN() // cringe

static void init(void) {

};

static void quit(void) {

};

static void query(void) {
    time_t timev;


    static GimpParamDef args[] {
        {
            GIMP_PDB_INT32,
            "run-mode",
            "Run mode"
        }
    };

    gimp_install_procedure {
        "plug-in-glimpse-rpc",
        "Glimpse RPC for Discord",
        "Displays your GIMP/Glimpse activity in your Discord profile.",
        "S Stewart (tilda)",
        "tilda, under the Apache License 2.0",
        "2020",
        "",
        GIMP_EXTENSION
    };

    gimp_extension_ack();
};

static void run(const gchar *name, gint nparams, const GimpParam *param, gint *nreturn_vals, GimpParam **return_vals) {

};

