/* FUN_0050c565 - 0x0050c565 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050c565(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  int *piStack_80;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = iVar3 + -0x1e;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  (*DAT_0097b504)();
  *(int ***)(unaff_EBP + -0x18) = &piStack_80;
  iStack_84 = 0;
  iStack_88 = 0x50c5b3;
  FUN_00424e0a();
  iStack_84 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_8c;
  iStack_88 = iVar3;
  FUN_00424dd7(0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + 0x10),0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x20),
             (IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar4) {
    FUN_00878dfb();
  }
  piStack_80 = (int *)0xa;
  iStack_84 = 0x34;
  iStack_88 = 0;
  uStack_8c = 0;
  puVar2 = (undefined4 *)FUN_0042a39f(unaff_EBP + 8);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x24);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  iVar3 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar3 < 0) {
    iStack_88 = 0x50c6e7;
    iStack_84 = iVar3;
    piStack_80 = piVar1;
    FUN_00878e09();
  }
  piStack_80 = (int *)0x50c6f3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  piStack_80 = (int *)(unaff_EBP + -0x5c);
  iStack_84 = 0x50c701;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_80 = (int *)0x50c70d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piStack_80 = (int *)0x50c71a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_80 = (int *)(unaff_EBP + -0x4c);
  iStack_84 = 0x50c728;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_80 = (int *)0x50c734;
    FUN_00878dfb();
  }
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    piStack_80 = (int *)0x50c746;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x5c);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x58);
  piStack_80 = *(int **)(unaff_EBP + -0x54);
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x40);
  iVar3 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_0050c8d7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


