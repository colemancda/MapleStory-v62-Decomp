/* ptr_0085fb81 - 0x0085fb81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085fb81(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *unaff_EBX;
  int unaff_EBP;
  float10 fVar4;
  int iStack_c;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_c;
  FUN_004033a1(u_jumpSpeed_0096cb50);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d(iVar2);
  iStack_c = FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  fVar4 = (float10)FUN_00434352();
  *(double *)(unaff_EBP + -0x20) = (double)fVar4;
  uStack_8 = CONCAT44(0x85fbc6,(undefined4)uStack_8);
  iVar2 = FUN_00861ad4();
  *(undefined8 *)(iVar2 + 0x70) = *(undefined8 *)(unaff_EBP + -0x20);
  uStack_8._4_4_ = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_8._0_4_ = 0x85fbd9;
  iVar3 = FUN_00402bc3();
  iVar2 = uStack_8._4_4_;
  if (iVar3 < (int)unaff_EBX) {
    uStack_8 = CONCAT44(iVar3,0x85fbe4);
    FUN_00878dfb();
    iVar2 = extraout_ECX;
  }
  uStack_8 = 0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_c;
  iStack_c = iVar2;
  FUN_004033a1(u_maxFriction_0096cb38);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d(iVar2);
  iStack_c = FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  fVar4 = (float10)FUN_00434352();
  *(double *)(unaff_EBP + -0x20) = (double)fVar4;
  uStack_8 = CONCAT44(0x85fc29,(undefined4)uStack_8);
  iVar2 = FUN_00861ad4();
  *(undefined8 *)(iVar2 + 0x78) = *(undefined8 *)(unaff_EBP + -0x20);
  uStack_8._4_4_ = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_8._0_4_ = 0x85fc3c;
  iVar3 = FUN_00402bc3();
  iVar2 = uStack_8._4_4_;
  if (iVar3 < (int)unaff_EBX) {
    uStack_8 = CONCAT44(iVar3,0x85fc47);
    FUN_00878dfb();
    iVar2 = extraout_ECX_00;
  }
  uStack_8 = 0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_c;
  iStack_c = iVar2;
  FUN_004033a1(u_minFriction_0096cb20);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d(iVar2);
  iStack_c = FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  fVar4 = (float10)FUN_00434352();
  *(double *)(unaff_EBP + -0x20) = (double)fVar4;
  uStack_8 = CONCAT44(0x85fc8c,(undefined4)uStack_8);
  iVar2 = FUN_00861ad4();
  *(undefined8 *)(iVar2 + 0x80) = *(undefined8 *)(unaff_EBP + -0x20);
  uStack_8._4_4_ = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_8._0_4_ = 0x85fca2;
  iVar3 = FUN_00402bc3();
  iVar2 = uStack_8._4_4_;
  if (iVar3 < (int)unaff_EBX) {
    uStack_8 = CONCAT44(iVar3,0x85fcad);
    FUN_00878dfb();
    iVar2 = extraout_ECX_01;
  }
  uStack_8 = 0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_c;
  iStack_c = iVar2;
  FUN_004033a1(u_swimSpeedDec_0096cb04);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d(iVar2);
  iStack_c = FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  fVar4 = (float10)FUN_00434352();
  *(double *)(unaff_EBP + -0x20) = (double)fVar4;
  uStack_8 = CONCAT44(0x85fcf2,(undefined4)uStack_8);
  iVar2 = FUN_00861ad4();
  *(undefined8 *)(iVar2 + 0x88) = *(undefined8 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_8 = CONCAT44(unaff_EBP + -0x60,0x85fd08);
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    uStack_8 = CONCAT44(iVar2,0x85fd13);
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != unaff_EBX) {
    uStack_8 = CONCAT44(piVar1,0x85fd24);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


