/* FUN_0043fbaf - 0x0043fbaf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043fbaf(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_3 == 0) && (param_2 == param_1[0x12d])) {
    return;
  }
  param_1[0x12d] = param_2;
  if ((param_2 & 0xfffffffe) == 0x12) {
    param_1[0x12e] = -1;
    FUN_00441501(1);
  }
  uVar2 = FUN_0043f6fe();
  if (0x7fffffff < uVar2) {
    (**(code **)(*param_1 + 0x10))(6,100,0);
  }
  iVar3 = FUN_0043f90a(0);
  if (param_1[0x11a] == 0) {
LAB_0043fc25:
    if ((iVar3 != 0x21) && (iVar3 != 0x20)) goto LAB_0043fc52;
  }
  else if ((iVar3 != 8) && (iVar3 != 0x10)) {
    if (param_1[0x11a] != 0) goto LAB_0043fc52;
    goto LAB_0043fc25;
  }
  iVar4 = FUN_00413367(param_1 + 0x116,param_1[0x118]);
  if (iVar4 == 8) {
    FUN_0043f7b6(0,0xffffffff);
  }
LAB_0043fc52:
  iVar4 = 0;
  do {
    piVar1 = *(int **)(param_1[0xd8] + 4 + iVar4);
    if (piVar1 != (int *)0x0) {
      iVar5 = iVar3;
      if (param_1[0x11a] != 0) {
        iVar5 = 2;
      }
      (**(code **)(*piVar1 + 4))(iVar5);
    }
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x188);
  return;
}


