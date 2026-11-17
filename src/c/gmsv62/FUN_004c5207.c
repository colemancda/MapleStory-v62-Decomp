/* FUN_004c5207 - 0x004c5207 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c5207(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((param_1 == (int *)0x0) || (iVar1 = (**(code **)(*param_1 + 0x48))(&DAT_0097bd4c), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_1 + -1;
  }
  if (piVar2 == (int *)0x0) {
LAB_004c5259:
    if ((param_1 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_1 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_1 + -1;
    }
    if (piVar2 != (int *)0x0) {
      if ((param_2 == (int *)0x0) ||
         (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = param_2 + -1;
      }
      if (piVar2 == (int *)0x0) goto LAB_004c5298;
LAB_004c5294:
      uVar3 = 1;
      goto LAB_004c530e;
    }
LAB_004c5298:
    if ((param_1 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_1 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_1 + -1;
    }
    if (piVar2 != (int *)0x0) {
      if ((param_2 == (int *)0x0) ||
         (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = param_2 + -1;
      }
      if (piVar2 != (int *)0x0) goto LAB_004c5294;
    }
    if ((param_1 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_1 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = param_1 + -1;
    }
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if ((param_2 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = param_2 + -1;
    }
    if (param_2 == (int *)0x0) {
      return 0;
    }
  }
  else {
    if ((param_2 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_2 + -1;
    }
    if (piVar2 == (int *)0x0) goto LAB_004c5259;
  }
  uVar3 = 0;
LAB_004c530e:
  uVar3 = FUN_004c532a(param_3,param_4,uVar3);
  return uVar3;
}


