/* FUN_0056e79f - 0x0056e79f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056e79f(void)

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
  uStack_54 = 0xe3;
  iStack_58 = unaff_EBP + -0x14;
  puVar2 = (undefined4 *)FUN_0056d8e5();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 100);
  iStack_50 = 0x56e7d0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_50 = 0x56e7dd;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_50 = 0;
  uStack_54 = 0x56e7e8;
  FUN_004031b7();
  iVar3 = *(int *)this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iStack_50 = 0x56e7f9;
    FUN_00878dfb();
  }
  iStack_50 = unaff_EBP + -0x10;
  uStack_54 = 0x56e808;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_50 = 0x56e815;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x56e820;
    FUN_00878dfb();
  }
  iStack_50 = 0x56e82e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x56e83b;
  FUN_00403191();
  iStack_50 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x14;
  uStack_54 = 0x1f;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_54 = 0x56e85f;
  uStack_54 = FUN_00449749();
  *(int **)(unaff_EBP + -0x18) = &iStack_58;
  FUN_00448a17(s_Double_click_on_a_character_to_l_009657b0);
  uVar5 = 10;
  uVar4 = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004115d9(0xf,10);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_50 = 0x56e898;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x56e8a5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x56e8b0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_50 = 0x56e8bd;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x56e8c8;
    FUN_00878dfb();
  }
  iStack_50 = 0x56e8d4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  uStack_54 = 0x56e8de;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x56e8ea;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_50 = 0x56e8f4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  uStack_54 = 0x56e8fe;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x56e90a;
    FUN_00878dfb();
  }
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    iStack_50 = 0x56e91d;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  iStack_58 = *(int *)(unaff_EBP + -0x38);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,0xfffffecf,0xffffffbf,*(undefined4 *)(unaff_EBP + -0x28),
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


