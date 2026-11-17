/* FUN_006ef7c5 - 0x006ef7c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ef7c5(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  
  FUN_00879bb8();
  puStack_34 = (undefined4 *)0x0;
  iStack_38 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_3c;
  local_40 = 0xfbd;
  FUN_00679e4e(&uStack_3c);
  local_40 = 0x6ef7fc;
  FUN_008163ca();
  puStack_34 = (undefined4 *)0x584;
  iStack_38 = unaff_EBP + -0x14;
  uStack_3c = 0x6ef80d;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_3c = *puVar1;
  iStack_38 = *(int *)(unaff_EBP + -0x10) + 0x54c;
  puStack_34 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_40 = 0x6ef823;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_34 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    iStack_38 = 0x6ef83a;
    FUN_00403384();
  }
  puStack_34 = (undefined4 *)0x584;
  iStack_38 = unaff_EBP + -0x14;
  uStack_3c = 0x6ef847;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_3c = *puVar1;
  iStack_38 = *(int *)(unaff_EBP + -0x10) + 0x550;
  puStack_34 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  local_40 = 0x6ef861;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_34 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    iStack_38 = 0x6ef878;
    FUN_00403384();
  }
  puStack_34 = &DAT_00980690;
  iStack_38 = 0x6ef887;
  FUN_00403191();
  puStack_34 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_38 = 0xff000000;
  uStack_3c = 0xb;
  *(undefined4 **)(unaff_EBP + -0x1c) = &local_40;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&local_40,10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_34 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_38 = 0x6ef8cf;
  puStack_34 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_34 < 0) {
    iStack_38 = 0x6ef8da;
    FUN_00878dfb();
  }
  puStack_34 = &DAT_00980690;
  iStack_38 = 0x6ef8e3;
  FUN_00403191();
  puStack_34 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_38 = 0xffffffff;
  uStack_3c = 0xb;
  *(undefined4 **)(unaff_EBP + -0x1c) = &local_40;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&local_40,10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_34 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_38 = 0x6ef928;
  puStack_34 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_34 < 0) {
    iStack_38 = 0x6ef933;
    FUN_00878dfb();
  }
  puStack_34 = (undefined4 *)(unaff_EBP + -0x1c);
  iStack_38 = 0x6ef942;
  puVar1 = (undefined4 *)FUN_004489f5();
  iStack_38 = *puVar1;
  puStack_34 = (undefined4 *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  uStack_3c = 0x6ef956;
  FUN_0040ee87();
  puStack_34 = (undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_38 = 0x6ef966;
  piVar2 = (int *)FUN_004489f5();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    puStack_34 = (undefined4 *)0x80004003;
    iStack_38 = 0x6ef97a;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  local_40 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_38 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x14) = piVar2;
  puStack_34 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar3 = (**(code **)(iVar3 + 0xfc))(piVar2);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,0xfffffffe);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  iVar3 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9(uVar4);
  FUN_006efa7e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


