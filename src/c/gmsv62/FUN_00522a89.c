/* FUN_00522a89 - 0x00522a89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00522a89(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 1;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  iStack_ac = 0x522c3a;
  puVar3 = (undefined4 *)FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -0x10) = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_ac = 0x522c4e;
  puVar3 = (undefined4 *)FUN_004489f5();
  iStack_ac = 0xff;
  uStack_b0 = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = *puVar3;
  iStack_b8 = unaff_EBP + -0x10;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_b4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_bc = 0x522c6e;
  FUN_0052359e();
  iStack_b8 = 0x17;
  uStack_bc = 0x7f;
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_c0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00523572(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00679d86(unaff_EBP + -0x1c,0xd9c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar4 = FUN_00411641(0);
  puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x18,uVar4);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x90);
  iStack_ac = 0x522cc1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_ac = 0x522cce;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_ac = 0x522ceb;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_ac = 0x522cfb;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  iStack_ac = 0x522d07;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_ac = unaff_EBP + -0x5c;
  uStack_b0 = 0x522d15;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_ac = 0x522d21;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_ac = 0x522d2b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_ac = unaff_EBP + -0x4c;
  uStack_b0 = 0x522d39;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_ac = 0x522d45;
    FUN_00878dfb();
  }
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar2 == 0) {
    iStack_ac = 0x522d57;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x58);
  iVar2 = *piVar1;
  iStack_ac = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x24) = piVar1;
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x40);
  iVar2 = (**(code **)(iVar2 + 0x110))(piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x4c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


