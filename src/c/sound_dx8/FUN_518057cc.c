/* FUN_518057cc - 0x518057cc in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518057cc(void)

{
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_5180ea30();
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar3 + 0x20);
  FUN_5180a3da((int *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  if (piVar2 == (int *)0x0) {
    iVar3 = *(int *)(iVar3 + 0x1c);
    if (iVar3 != 0) {
      *(int *)(unaff_EBP + -0x14) = iVar3;
      FUN_5180a3da((int *)(unaff_EBP + -0x14));
    }
    goto LAB_518059a4;
  }
  if (*(int *)(unaff_EBP + 0xc) == -1) {
    iVar3 = FUN_51805ca0((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + 8));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5180e990(iVar3);
    }
    Ordinal_8(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_5180e990(0x80004003);
    }
    iVar3 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x38))
                      (*(int **)(unaff_EBP + 8),unaff_EBP + -0x24);
    if ((-1 < iVar3) && ((*(byte *)(unaff_EBP + -0x23) & 0x40) != 0)) {
      iVar3 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
      if (iVar3 == 0) {
        FUN_5180e990(0x80004003);
      }
      piVar2 = FUN_518060d6(*(int **)(unaff_EBP + 8));
      pIVar1 = *(IBinding **)(unaff_EBP + 8);
      *(int **)(extraout_ECX + 0xc) = piVar2;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x48),pIVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_518047f3((short *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_5180e990(iVar3);
    }
    goto LAB_518059a4;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  (**(code **)(iVar3 + 0x40))(piVar2,0,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iVar3 = FUN_51805ca0((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + 8));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
LAB_5180598d:
      FUN_5180e990(iVar3);
    }
  }
  else {
    iVar3 = FUN_51805ca0((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x10));
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_5180e990(iVar3);
    }
    Ordinal_8(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_5180e990(0x80004003);
    }
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x38))
                      (*(int **)(unaff_EBP + -0x10),unaff_EBP + -0x24);
    if ((-1 < iVar3) && ((*(byte *)(unaff_EBP + -0x23) & 0x40) != 0)) {
      iVar3 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(extraout_ECX + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
      if (iVar3 == 0) {
        FUN_5180e990(0x80004003);
      }
      piVar2 = FUN_518060d6(*(int **)(unaff_EBP + -0x10));
      pIVar1 = *(IBinding **)(unaff_EBP + -0x10);
      *(int **)(extraout_ECX + 0xc) = piVar2;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x48),pIVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_518047f3((short *)(unaff_EBP + -0x24));
    if (iVar3 < 0) goto LAB_5180598d;
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
LAB_518059a4:
  if (*(int *)(extraout_ECX + 8) == 0) {
    FUN_518060fd();
    iVar6 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piVar2 = (int *)(extraout_ECX + 0x10);
    iVar3 = FUN_51805a3c();
    FUN_51805d44(piVar2,iVar3,iVar6);
    (**(code **)(*piVar2 + 0x20))(unaff_EBP + -0x48,*(undefined4 *)(unaff_EBP + 0xc));
    (**(code **)(*piVar2 + 0x28))(0,0);
    uVar4 = FUN_51805e61(piVar2,0,(LPCSTR)0x0,4,0,0,0,0);
    *(uint *)(extraout_ECX + 8) = uVar4;
    uVar5 = (**(code **)(*piVar2 + 0x2c))();
    *(undefined4 *)(extraout_ECX + 0xc) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_51806e25();
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


