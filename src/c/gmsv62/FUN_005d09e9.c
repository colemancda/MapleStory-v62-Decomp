/* FUN_005d09e9 - 0x005d09e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005d09e9(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_007d1e08();
  puVar2 = (undefined4 *)FUN_005d13f0();
  *puVar2 = param_2;
  puVar2[1] = param_3 + iVar1;
  if (param_3 + iVar1 == 0) {
    puVar2[1] = 1;
  }
  puVar2[2] = 0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x94);
  return;
}


