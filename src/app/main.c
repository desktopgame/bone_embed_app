#include <stdio.h>
#include <glib.h>
#include <bone/runtime/interpreter.h>

int main(int argc, char* argv[]) {
    bnInterpreter* bone = bnNewInterpreter("bone.bn", 0, NULL);
    int status = bnEval(bone);
    bnDeleteInterpreter(bone);
    return 0;
}
