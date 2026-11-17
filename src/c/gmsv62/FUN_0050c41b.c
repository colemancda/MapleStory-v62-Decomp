/* FUN_0050c41b - 0x0050c41b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0050c41b(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_2 - *(int *)(param_1 + 0xc);
  if (((DAT_00979278 <= param_2) && (param_2 <= DAT_0097927c)) && (*(int *)(param_1 + 0x34) != 0)) {
    if (param_4 == 0) {
      *(int *)(param_1 + 0x10) = iVar1 * 3;
      *(undefined4 *)(param_1 + 0x14) = param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(param_1 + 0xc) = param_2;
      *(undefined4 *)(param_1 + 0x14) = param_3;
      FUN_0050c19a(iVar1);
    }
  }
  return;
}


