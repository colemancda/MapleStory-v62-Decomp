/* FUN_0085682d - 0x0085682d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085682d(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x2cb8) + param_2 * 4);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2cbc) + param_2 * 0x25);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_4 = *puVar2;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + 1;
  }
  *(undefined1 *)param_4 = *(undefined1 *)puVar2;
  return;
}


