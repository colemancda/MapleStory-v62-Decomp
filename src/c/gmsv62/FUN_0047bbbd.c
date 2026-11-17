/* FUN_0047bbbd - 0x0047bbbd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0047bbbd(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x48) != 0;
  if (bVar1) {
    FUN_00879c20(param_2,param_1 + 0x1bc,0x1bd);
  }
  return bVar1;
}


