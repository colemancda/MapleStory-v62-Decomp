/* FUN_0075a904 - 0x0075a904 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0075a904(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 0x18;
  iVar2 = *(int *)(param_1 + 8) + param_2 * 0x18;
  *param_5 = *(undefined4 *)(iVar1 + 8);
  param_5[1] = *(undefined4 *)(iVar1 + 0xc);
  FUN_00414f8b(iVar2 + 0x10);
  FUN_00414f8b(iVar2 + 0x14);
  (*DAT_0097b57c)(iVar2,param_3,param_4);
  return;
}


