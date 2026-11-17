/* FUN_006f577d - 0x006f577d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006f577d(undefined4 param_1,int param_2)

{
  undefined1 local_14 [16];
  
  if (param_2 != 0) {
    FUN_006f5500(param_2);
    param_1 = FUN_006f5706(local_14);
  }
  return param_1;
}


