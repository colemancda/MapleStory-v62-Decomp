/* FUN_004860bb - 0x004860bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004860bb(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((param_2 == 0xe) || (iVar2 = FUN_0048651d(param_2), iVar2 != 0)) {
    if ((param_2 == 0xc) || (((param_2 == 0xd || (param_2 == 0xf)) || (param_2 == 0x10)))) {
      piVar4 = &DAT_00964178;
      do {
        iVar2 = *(int *)(param_1 + 0xa5 + *piVar4 * 4);
        if ((iVar2 != 0) && (*(int *)(param_1 + 0x23c + param_2 * 8) == iVar2)) goto LAB_004860f5;
        piVar4 = piVar4 + 1;
      } while ((int)piVar4 < 0x964188);
    }
    else {
      if (param_2 == 0xe) {
        if (*(int *)(param_1 + 0x3c4) == 0) goto LAB_004860f5;
LAB_00486106:
        iVar2 = *(int *)(param_1 + 0xa5 + param_2 * 4);
      }
      else {
        if (param_2 != 0xb) goto LAB_00486106;
        iVar2 = *(int *)(param_1 + 0xa1);
      }
      iVar1 = *(int *)(param_1 + 0x23c + param_2 * 8);
      if ((iVar1 == 0) || (iVar2 == iVar1)) goto LAB_004860f5;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x240 + param_2 * 8);
  }
  else {
LAB_004860f5:
    uVar3 = 0;
  }
  return uVar3;
}


