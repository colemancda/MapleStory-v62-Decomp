/* FUN_51809f42 - 0x51809f42 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51809f42(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(short *)(unaff_EBP + 0xc) != 0) && (*(short *)(unaff_EBP + 0xc) != 10)) {
    Ordinal_8(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_51804844((void *)(unaff_EBP + -0x30),0xd,(ushort *)(unaff_EBP + 0xc));
    uVar4 = FUN_5180aa62();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    iVar5 = FUN_5180d98b((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x18));
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      FUN_5180e990(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iVar5 = FUN_518047f3((short *)(unaff_EBP + -0x30));
      if (iVar5 < 0) {
        FUN_5180e990(iVar5);
      }
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      FUN_5180a0c7();
      return;
    }
    iVar5 = FUN_518047f3((short *)(unaff_EBP + -0x30));
    if (iVar5 < 0) {
      FUN_5180e990(iVar5);
    }
  }
  iVar5 = *(int *)(unaff_EBP + 8);
  puVar3 = *(undefined4 **)(iVar5 + 0x18);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar3;
  FUN_518017b5();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  if ((*(int *)(iVar5 + 0x38) == 0) || (*(int *)(iVar5 + 0x2c) != 0)) {
    iVar1 = *(int *)this;
    *(int *)(unaff_EBP + 8) = iVar1;
    if (iVar1 != *(int *)(unaff_EBP + -0x14)) {
      *(int *)this = *(int *)(unaff_EBP + -0x14);
      FUN_5180a3da((int *)this);
      piVar2 = *(int **)(unaff_EBP + 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  piVar2 = puVar3 + 1;
  *piVar2 = *piVar2 + -1;
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    *puVar3 = 0;
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_5180e990(0x80004003);
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    iVar5 = (**(code **)(*piVar2 + 0x14))(piVar2,*(undefined4 *)(iVar5 + 0x34));
    if (iVar5 < 0) {
      FUN_5180e99e(iVar5,piVar2,&DAT_5181e388);
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_5180a0c7();
  return;
}


