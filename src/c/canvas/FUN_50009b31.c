/* FUN_50009b31 - 0x50009b31 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __cdecl FUN_50009b31(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar1 = (param_1 + -0x80) * (param_2 + 0x80);
    iVar2 = 0x80;
  }
  else {
    if (0xff - param_2 <= param_1) {
      return 0xff;
    }
    if (param_1 <= param_2) {
      return 0;
    }
    iVar1 = (param_1 + -0x80) * 0x80;
    iVar2 = 0x80 - param_2;
  }
  return iVar1 / iVar2 + 0x80;
}


