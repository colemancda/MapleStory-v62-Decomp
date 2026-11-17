/* FUN_0071f653 - 0x0071f653 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0071f653(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_5 = 0;
  iVar2 = 0x58;
  do {
    if ((iVar2 + -0x20 <= param_3) && (param_3 <= iVar2)) {
      *param_5 = *(int *)(*(int *)(param_1 + 0x70) + 0x38) + iVar3;
      break;
    }
    iVar2 = iVar2 + 0x2d;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0xdf);
  if (iVar3 == 3) {
LAB_0071f6d8:
    uVar1 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0x34;
    do {
      if ((iVar2 + -0x20 <= param_2) && (param_2 <= iVar2)) {
        *param_6 = iVar3;
        break;
      }
      iVar2 = iVar2 + 0x25;
      iVar3 = iVar3 + 1;
    } while (iVar2 < 0xa3);
    if (iVar3 == 3) {
      if (((param_4 == 0) || (param_2 < 0x92)) || (0xb2 < param_2)) goto LAB_0071f6d8;
      *param_6 = 3;
    }
    uVar1 = 1;
  }
  return uVar1;
}


