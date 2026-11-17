/* FUN_006a456c - 0x006a456c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a456c(int *param_1)

{
  FUN_0081622a(param_1);
  FUN_00448dc6(&param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


