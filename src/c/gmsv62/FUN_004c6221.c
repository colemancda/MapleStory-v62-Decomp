/* FUN_004c6221 - 0x004c6221 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_004c6221(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00455c59(local_10);
  uVar4 = *(undefined4 *)(iVar1 + 4);
  if (local_c != 0) {
    FUN_0045e7c2(0);
  }
  if ((*(int *)(param_1 + 0x14) == 0) &&
     (iVar1 = FUN_00650dae(uVar4,*(undefined4 *)(param_1 + 0x10),0), iVar1 < 1)) {
    return 0;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be04), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 == (int *)0x0) goto LAB_004c62c2;
LAB_004c62b2:
    uVar4 = 1;
    goto LAB_004c65f6;
  }
LAB_004c62c2:
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be04), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 == (int *)0x0) goto LAB_004c6305;
LAB_004c63f5:
    uVar4 = 0;
    goto LAB_004c65f6;
  }
LAB_004c6305:
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be40), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 != (int *)0x0) goto LAB_004c62b2;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097bd4c), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 != (int *)0x0) goto LAB_004c63f5;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097bd4c), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 != (int *)0x0) goto LAB_004c62b2;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be40), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 != (int *)0x0) goto LAB_004c63f5;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be04), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be08), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if (piVar2 == (int *)0x0) goto LAB_004c6441;
    uVar4 = 0;
LAB_004c643d:
    uVar3 = 0;
LAB_004c64c0:
    uVar4 = FUN_004c66d2(param_4,param_5,uVar3,uVar4);
    return uVar4;
  }
LAB_004c6441:
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be08), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be08), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if ((piVar2 != (int *)0x0) && (*(int *)(local_8 + 0x14) == 0)) {
      uVar4 = 1;
      goto LAB_004c643d;
    }
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be08), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (((piVar2 != (int *)0x0) &&
      (param_3 == (int *)(-(uint)(DAT_00978364 != 0) & DAT_00978364 + 4U))) &&
     (*(int *)(local_8 + 0x14) == 0)) {
    uVar4 = 0;
    uVar3 = 1;
    goto LAB_004c64c0;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be08), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if ((piVar2 != (int *)0x0) && (*(int *)(local_8 + 0x14) != 0)) goto LAB_004c62b2;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be40), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 != (int *)0x0) {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097be40), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if ((piVar2 != (int *)0x0) && (*(int *)(local_8 + 0x14) != 0)) goto LAB_004c62b2;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097be08), iVar1 == 0)
     ) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_2 + -1;
  }
  if (piVar2 == (int *)0x0) {
LAB_004c65a9:
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
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      param_3 = (int *)0x0;
    }
    else {
      param_3 = param_3 + -1;
    }
    if (param_3 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(local_8 + 0x14) == 0) {
      return 0;
    }
  }
  else {
    if ((param_3 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_3 + 0x48))(&DAT_0097bd4c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_3 + -1;
    }
    if ((piVar2 == (int *)0x0) || (*(int *)(local_8 + 0x14) == 0)) goto LAB_004c65a9;
  }
  uVar4 = 0;
LAB_004c65f6:
  uVar4 = FUN_004c67fa(param_4,param_5,uVar4);
  return uVar4;
}


