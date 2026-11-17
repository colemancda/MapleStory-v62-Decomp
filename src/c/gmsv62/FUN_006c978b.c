/* FUN_006c978b - 0x006c978b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006c978b(int param_1,int param_2)

{
  if (param_1 != 4) {
    if (param_1 == 6) {
      param_2 = param_2 + -0x46;
    }
    else {
      param_2 = param_2 + -0x19;
    }
  }
  return param_2;
}


