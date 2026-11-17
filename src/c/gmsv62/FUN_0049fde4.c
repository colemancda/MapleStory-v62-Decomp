/* FUN_0049fde4 - 0x0049fde4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0049fde4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    iVar1 = (*DAT_0097b704)();
    if (((ulonglong)(uint)(iVar1 - *(int *)(param_1 + 8)) / 300 & 1) == 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(param_1 + 0x14);
      iVar1 = *piVar2;
      uVar3 = 0xffffffff;
      goto LAB_0049fe37;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(param_1 + 0x14);
  iVar1 = *piVar2;
  uVar3 = 0xffffff;
LAB_0049fe37:
  iVar1 = (**(code **)(iVar1 + 0xe0))(piVar2,uVar3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963df8);
  }
  return;
}


