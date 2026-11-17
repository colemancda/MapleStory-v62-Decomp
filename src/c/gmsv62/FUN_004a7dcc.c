/* FUN_004a7dcc - 0x004a7dcc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a7dcc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
LAB_004a7e0b:
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(param_1 + 0x14);
      iVar1 = *piVar2;
      uVar3 = 0xffffff;
      goto LAB_004a7e40;
    }
  }
  else {
    iVar1 = (*DAT_0097b704)();
    if (((ulonglong)(uint)(iVar1 - *(int *)(param_1 + 8)) / 300 & 1) != 0) goto LAB_004a7e0b;
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(param_1 + 0x14);
      iVar1 = *piVar2;
      uVar3 = 0xffffffff;
      goto LAB_004a7e40;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar1 = *piVar2;
  uVar3 = 0;
LAB_004a7e40:
  iVar1 = (**(code **)(iVar1 + 0xe0))(piVar2,uVar3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963df8);
  }
  return;
}


