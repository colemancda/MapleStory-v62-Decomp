/* FUN_004f0d80 - 0x004f0d80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004f0d80(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00979264;
  if ((*(int *)(param_1 + 0x13c) == 0) || (*(uint *)(*(int *)(param_1 + 0x13c) + -4) <= param_3)) {
    if (*(int *)(DAT_00979264 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(DAT_00979264 + 4) + -4);
    }
    iVar2 = _rand();
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + 4 + (iVar2 % iVar3) * 8);
    *param_2 = *(undefined4 *)(iVar1 + 0xc);
    param_2[1] = *(undefined4 *)(iVar1 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x13c);
    *param_2 = *(undefined4 *)(iVar1 + param_3 * 8);
    param_2[1] = *(undefined4 *)(iVar1 + 4 + param_3 * 8);
  }
  return;
}


