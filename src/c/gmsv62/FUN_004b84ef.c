/* FUN_004b84ef - 0x004b84ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b84ef(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x11);
  *(uint *)(param_1 + 0xd) = (uint)*(byte *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x17);
  param_2 = 1;
  piVar1 = (int *)(param_1 + 0xe1);
  iVar3 = param_4 - (int)param_3;
  do {
    param_3 = param_3 + 1;
    if ((param_2 == 0xb) || (iVar2 = *(int *)(iVar3 + (int)param_3), iVar2 == 0)) {
      iVar2 = *param_3;
    }
    else {
      piVar1[-0x31] = iVar2;
    }
    piVar1[-0x31] = iVar2;
    if (((*param_3 == 0) || (*(int *)(iVar3 + (int)param_3) == 0)) || (param_2 == 0xb)) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = *param_3;
    }
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
  } while (param_2 < 0x31);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_4 + 0x2c);
  return;
}


