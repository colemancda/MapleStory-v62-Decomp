/* FUN_004133b5 - 0x004133b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004133b5(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_004133f0();
  *param_2 = uVar1;
  uVar2 = FUN_0087a034(uVar1 ^ param_1,5);
  param_2[1] = uVar2;
  iVar3 = FUN_0087a034(uVar1 ^ 0xbaadf00d,5);
  return iVar3 + uVar2;
}


