/* FUN_50009b83 - 0x50009b83 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50009b83(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6)

{
  code *pcVar1;
  
  pcVar1 = (code *)0x0;
  if (param_3 == 1) {
    pcVar1 = FUN_50009c65;
  }
  else if (param_3 == 2) {
    pcVar1 = FUN_50009bd9;
  }
  else if (param_3 == 0x201) {
    pcVar1 = FUN_50009d1e;
  }
  (*pcVar1)(param_1,param_2,param_6 == 0xffffff,param_4,param_5,
            -(uint)(param_6 != 0xffffff) & param_6);
  return;
}


