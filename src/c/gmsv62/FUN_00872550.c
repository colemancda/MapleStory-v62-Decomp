/* FUN_00872550 - 0x00872550 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00872550(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_0097fca4) {
    do {
      FUN_00872550(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00402614(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_0097fca4);
  }
  return;
}


