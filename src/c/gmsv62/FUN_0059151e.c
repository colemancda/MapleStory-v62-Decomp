/* FUN_0059151e - 0x0059151e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059151e(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  iStack_50 = 0x22;
  uStack_54 = 300;
  iStack_58 = unaff_EBP + -0x14;
  puVar2 = (undefined4 *)FUN_00590664();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x148);
  iStack_50 = 0x591552;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_50 = 0x59155f;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_50 = 0;
  uStack_54 = 0x59156a;
  FUN_004031b7();
  iVar3 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iStack_50 = 0x59157b;
    FUN_00878dfb();
  }
  iStack_50 = unaff_EBP + -0x10;
  uStack_54 = 0x59158a;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_50 = 0x591597;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5915a2;
    FUN_00878dfb();
  }
  iStack_50 = 0x5915b0;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x5915bd;
  FUN_00403191();
  iStack_50 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x14;
  uStack_54 = 0x1f;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_54 = 0x5915e1;
  uStack_54 = FUN_00449749();
  *(int **)(unaff_EBP + -0x18) = &iStack_58;
  FUN_00448a17(s_Please_select_the_World_you_woul_0096593c);
  uVar5 = 10;
  uVar4 = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004115d9(0xf,10);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_50 = 0x59161a;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x591627;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x591632;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_50 = 0x59163f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x59164a;
    FUN_00878dfb();
  }
  iStack_50 = 0x591656;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  uStack_54 = 0x591660;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x59166c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_50 = 0x591676;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  uStack_54 = 0x591680;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x59168c;
    FUN_00878dfb();
  }
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    iStack_50 = 0x59169f;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  iStack_58 = *(int *)(unaff_EBP + -0x38);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,0x19,0xffffffd3,*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


