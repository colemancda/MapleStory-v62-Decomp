/* FUN_500100fc - 0x500100fc in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_500100fc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    piVar2 = FUN_50011d2b(u_Canvas_500182f4);
    *param_2 = piVar2;
    uVar1 = 0;
  }
  return uVar1;
}


