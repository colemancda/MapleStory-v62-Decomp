/* FUN_00403384 - 0x00403384 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00403384(LONG *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1);
  if (LVar1 < 1) {
    FUN_004054e1(param_1);
  }
  return;
}


