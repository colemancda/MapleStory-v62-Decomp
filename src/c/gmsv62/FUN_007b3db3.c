/* FUN_007b3db3 - 0x007b3db3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b3db3(undefined4 param_1)

{
  undefined1 local_c [4];
  int local_8;
  
  FUN_00455c59(local_c);
  *(undefined4 *)(local_8 + 0x527) = param_1;
  if (local_8 != 0) {
    FUN_0045e7c2(0);
  }
  return;
}


