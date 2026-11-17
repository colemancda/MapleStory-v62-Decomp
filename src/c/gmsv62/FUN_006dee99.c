/* FUN_006dee99 - 0x006dee99 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006dee99(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004cda9b(&param_1,0);
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  uVar2 = param_2;
  FUN_006df1a7(&param_1,0);
  FUN_00414f8b(uVar2);
  return;
}


