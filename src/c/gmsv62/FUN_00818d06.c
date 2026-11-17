/* FUN_00818d06 - 0x00818d06 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00818d06(uint param_1)

{
  int iVar1;
  
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_00527f9a();
  if (param_1 != (iVar1 != 0)) {
    FUN_00818c4d();
  }
  return;
}


