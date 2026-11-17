/* FUN_0067b86e - 0x0067b86e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0067b86e(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 4);
  if (param_3 == *(int *)(param_2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xf8);
  }
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) - *(int *)(iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar1 + 0x40);
  FUN_00411537((int *)(param_1 + 0x108),iVar1 + 0x10);
  (*DAT_0097b504)(param_1 + 0x118,-*(int *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x10c),
                  -*(int *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x114));
  return;
}


