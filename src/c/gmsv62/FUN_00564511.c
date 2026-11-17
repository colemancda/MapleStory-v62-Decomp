/* FUN_00564511 - 0x00564511 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00564511(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x154) != 0) {
    (*DAT_0097b514)(0);
  }
  iVar3 = *(int *)(DAT_00973cd8 + 0x18);
  iVar2 = *(int *)(extraout_ECX + 0x140);
  if ((iVar2 != 0) && (iVar3 != iVar2 && -1 < iVar3 - iVar2)) {
    FUN_00564c71();
    *(undefined4 *)(extraout_ECX + 0x140) = 0;
  }
  if (*(int *)(extraout_ECX + 0x13c) == 1) {
    uVar5 = 0x11;
  }
  else if (*(int *)(extraout_ECX + 0x13c) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_00568d56(uVar5);
  if (*(int *)(extraout_ECX + 0x198) != 0) {
    FUN_008161f1(0);
  }
  if (((*(int *)(extraout_ECX + 0xf4) != 0) && (*(int *)(extraout_ECX + 0xfc) != 0)) &&
     (10000 < iVar3 - *(int *)(extraout_ECX + 0xfc))) {
    *(undefined4 *)(extraout_ECX + 0xf4) = 0;
    *(int *)(extraout_ECX + 0x104) = *(int *)(extraout_ECX + 0x108);
    if (*(int *)(extraout_ECX + 0x108) == 0) {
      if (*(int *)(extraout_ECX + 0xf0) != 0) {
        FUN_0056874a();
      }
      FUN_00568c7a();
      FUN_005697ac(0,0);
      goto LAB_005648c0;
    }
    FUN_00568c02();
    FUN_00564909(4);
    if (DAT_00979414 == 0) {
      *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x120);
      FUN_00402aba();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_004029b9(0x3724);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar3 != 0) {
        FUN_0057492e(extraout_ECX,*(undefined4 *)(extraout_ECX + 0x10c));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar1 = (int *)(extraout_ECX + 0x124);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(extraout_ECX + 0x120) = 0;
      }
    }
    else {
      FUN_005697ac(0,0);
    }
  }
  if (((*(int *)(extraout_ECX + 0x13c) != 2) && (*(int *)(extraout_ECX + 0x13c) != 4)) ||
     ((*(int *)(extraout_ECX + 0x160) < 0 && (5 < *(int *)(extraout_ECX + 0x160))))) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x184),
               (IBinding *)0x0);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x188),
               (IBinding *)0x0);
  }
  if (((*(int *)(extraout_ECX + 400) != 0) && (*(int *)(extraout_ECX + 0x13c) != 3)) &&
     (*(int *)(extraout_ECX + 400) != 0)) {
    FUN_00449941(0);
    *(undefined4 *)(extraout_ECX + 400) = 0;
  }
  if ((((*(int *)(extraout_ECX + 0x13c) == 2) && (-1 < *(int *)(extraout_ECX + 0x160))) &&
      (*(int *)(extraout_ECX + 0x1b0) == 0)) && (*(int *)(extraout_ECX + 0x160) < 6)) {
    if (DAT_00979420 == 0) {
      iVar3 = FUN_004029b9(0xe8);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar3 != 0) {
        FUN_0056e9a7(extraout_ECX,*(undefined4 *)(extraout_ECX + 0x160));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_0056470e;
    }
LAB_00564718:
    if ((*(int *)(extraout_ECX + 0x1b0) != 0) ||
       (*(int *)(extraout_ECX + 0x160) != *(int *)(DAT_00979420 + 0xd0))) {
      FUN_004de7d7(0);
    }
  }
  else {
LAB_0056470e:
    if (DAT_00979420 != 0) goto LAB_00564718;
  }
  if (((*(int *)(extraout_ECX + 0x13c) == 4) && (-1 < *(int *)(extraout_ECX + 0x160))) &&
     ((*(int *)(extraout_ECX + 0x1b0) == 0 && (*(int *)(extraout_ECX + 0x160) < 0x3c)))) {
    if (DAT_00979418 != 0) goto LAB_0056479f;
    if (*(int *)(extraout_ECX + 0x108) != 0) {
      iVar3 = FUN_004029b9(0xe4);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (iVar3 != 0) {
        FUN_005733a5(extraout_ECX,*(undefined4 *)(extraout_ECX + 0x160));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00564795;
    }
  }
  else {
LAB_00564795:
    if (DAT_00979418 != 0) {
LAB_0056479f:
      if ((*(int *)(extraout_ECX + 0x1b0) != 0) ||
         (*(int *)(extraout_ECX + 0x160) != *(int *)(DAT_00979418 + 0xd0))) {
        FUN_004de7d7(0);
      }
    }
  }
  iVar3 = *(int *)(extraout_ECX + 0x13c);
  if (iVar3 == 0) {
    if ((((*(char **)(extraout_ECX + 0x1c0) != (char *)0x0) &&
         (**(char **)(extraout_ECX + 0x1c0) != '\0')) &&
        (*(char **)(extraout_ECX + 0x1c4) != (char *)0x0)) &&
       (((**(char **)(extraout_ECX + 0x1c4) != '\0' && (*(int *)(DAT_00973cd8 + 0x28) != 0)) &&
        (DAT_00979430 != 0)))) {
      FUN_00565a4e(*(undefined4 *)(extraout_ECX + 0x1c0),*(undefined4 *)(extraout_ECX + 0x1c4));
    }
  }
  else if (iVar3 == 1) {
    if (((*(char **)(extraout_ECX + 0x1c8) != (char *)0x0) &&
        (**(char **)(extraout_ECX + 0x1c8) != '\0')) &&
       ((*(char **)(extraout_ECX + 0x1cc) != (char *)0x0 &&
        (((**(char **)(extraout_ECX + 0x1cc) != '\0' && (*(int *)(DAT_00973cd8 + 0x28) != 0)) &&
         (*(int *)(extraout_ECX + 0x140) == 0)))))) {
      uVar5 = *(undefined4 *)(extraout_ECX + 0x1c8);
      uVar4 = FUN_0087b6ab(*(undefined4 *)(extraout_ECX + 0x1cc));
      uVar5 = FUN_0087b6ab(uVar5,uVar4);
      FUN_00566401(uVar5,uVar4);
    }
  }
  else if (((iVar3 == 2) && (*(char **)(extraout_ECX + 0x1d0) != (char *)0x0)) &&
          ((**(char **)(extraout_ECX + 0x1d0) != '\0' &&
           ((*(int *)(DAT_00973cd8 + 0x28) != 0 && (*(int *)(extraout_ECX + 0x140) == 0)))))) {
    *(undefined4 *)(DAT_00973cd8 + 0x28) = 0;
    uVar5 = FUN_0087b6ab(*(undefined4 *)(extraout_ECX + 0x1d0));
    *(undefined4 *)(extraout_ECX + 0x160) = uVar5;
    FUN_005665b3();
  }
LAB_005648c0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


