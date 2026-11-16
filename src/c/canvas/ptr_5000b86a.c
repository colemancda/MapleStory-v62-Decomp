/* ptr_5000b86a - 0x5000b86a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 ptr_5000b86a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 1) ||
     ((((2 < param_2 && (param_2 != 0x201)) && (param_2 != 0x10002)) &&
      (((param_2 != 0x10201 && (param_2 != 0x20002)) && (param_2 != 0x20201)))))) {
    uVar1 = 0x80070057;
  }
  else {
    DAT_500194ec = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


