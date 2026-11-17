/* FUN_00581e26 - 0x00581e26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00581e26(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int extraout_ECX_02;
  int *piVar3;
  int unaff_EBP;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  int iStack_94;
  undefined1 *puStack_90;
  int *piStack_8c;
  
  FUN_00879bb8();
  piStack_8c = (int *)0x0;
  puStack_90 = (undefined1 *)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  iStack_94 = 0x581e4b;
  FUN_00817e25();
  piStack_8c = (int *)0x581e53;
  FUN_0087a1b0();
  piStack_8c = (int *)0x78a;
  puStack_90 = (undefined1 *)(unaff_EBP + -0x28);
  iStack_94 = 0x581e6a;
  FUN_00679d22();
  piStack_8c = (int *)&DAT_009640ac;
  puStack_90 = (undefined1 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_94 = 0x581e7d;
  uVar1 = FUN_004653c5();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  piStack_8c = (int *)0xa;
  iStack_94 = *(int *)(unaff_EBP + 8) + 7;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_98 = (undefined1 *)0x581e93;
  puStack_90 = &stack0xffffff78;
  piStack_8c = (int *)FUN_0087b818();
  puStack_90 = (undefined1 *)(unaff_EBP + -0x1c);
  iStack_94 = 0x581ea3;
  FUN_004653c5();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    piStack_8c = (int *)(*(int *)(unaff_EBP + -0x24) + -0xc);
    puStack_90 = (undefined1 *)0x581eb7;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    piStack_8c = (int *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    puStack_90 = (undefined1 *)0x581ecc;
    FUN_00434e38();
  }
  piStack_8c = &DAT_00980690;
  puStack_90 = (undefined1 *)0x581edb;
  FUN_00403191();
  piStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined1 *)0x581ee8;
  FUN_00403191();
  piStack_8c = (int *)0x0;
  puStack_90 = (undefined1 *)0x0;
  iStack_94 = unaff_EBP + -0x58;
  puStack_98 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_9c = 0x581efe;
  iStack_a0 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_9c;
  iStack_a4 = 0x581f0a;
  FUN_00448a17();
  iStack_a0 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_a4 = 0x581f17;
  FUN_00405a1d();
  iStack_a4 = 0x581f1e;
  FUN_00402660();
  iStack_a4 = 0x581f25;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_94 = 0x581f30;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_8c = (int *)(unaff_EBP + 8);
    puStack_90 = (undefined1 *)0x581f46;
    piStack_8c = (int *)FUN_00404b30();
    if (((int)piStack_8c < 0) && (piStack_8c != (int *)0x80004002)) {
      puStack_90 = (undefined1 *)0x581f57;
      FUN_00878dfb();
    }
  }
  piStack_8c = (int *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_90 = (undefined1 *)0x581f64;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    puStack_90 = (undefined1 *)0x581f6f;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_90 = (undefined1 *)0x581f7c;
  piStack_8c = (int *)FUN_00402bc3();
  if ((int)piStack_8c < 0) {
    puStack_90 = (undefined1 *)0x581f87;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_90 = (undefined1 *)0x581f94;
  iVar2 = FUN_00402bc3();
  puStack_90 = (undefined1 *)piStack_8c;
  if (iVar2 < 0) {
    puStack_90 = (undefined1 *)0x581f9f;
    piStack_8c = (int *)iVar2;
    FUN_00878dfb();
    puStack_90 = extraout_ECX_00;
  }
  piStack_8c = (int *)&DAT_0097812c;
  puStack_98 = (undefined1 *)&puStack_90;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_90;
  iStack_94 = 0x5a9;
  uStack_9c = 0x581fb8;
  FUN_00679e4e();
  iStack_94 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_98 = (undefined1 *)0x581fc8;
  FUN_0040263d();
  puStack_98 = (undefined1 *)0x581fcf;
  puStack_90 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_94 = 0x581fd9;
  puStack_90 = (undefined1 *)FUN_004343c5();
  piStack_8c = (int *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_94 = 0x581fe9;
  FUN_00454081();
  piStack_8c = (int *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_90 = (undefined1 *)0x581ff6;
  iVar2 = FUN_00402bc3();
  puStack_90 = (undefined1 *)piStack_8c;
  if (iVar2 < 0) {
    puStack_90 = (undefined1 *)0x582001;
    piStack_8c = (int *)iVar2;
    FUN_00878dfb();
    puStack_90 = extraout_ECX_01;
  }
  piStack_8c = (int *)&DAT_0097812c;
  puStack_98 = (undefined1 *)&puStack_90;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_90;
  iStack_94 = 0x5ab;
  uStack_9c = 0x582015;
  FUN_00679e4e();
  iStack_94 = unaff_EBP + -0x88;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_98 = (undefined1 *)0x582028;
  FUN_0040263d();
  puStack_98 = (undefined1 *)0x58202f;
  puStack_90 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_94 = 0x582039;
  puStack_90 = (undefined1 *)FUN_004343c5();
  piStack_8c = (int *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_94 = 0x582049;
  FUN_00454081();
  piStack_8c = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_90 = (undefined1 *)0x582059;
  iVar2 = FUN_00402bc3();
  piVar3 = piStack_8c;
  if (iVar2 < 0) {
    puStack_90 = (undefined1 *)0x582064;
    piStack_8c = (int *)iVar2;
    FUN_00878dfb();
    piVar3 = (int *)extraout_ECX_02;
  }
  piStack_8c = (int *)0x0;
  puStack_90 = (undefined1 *)0x1;
  iStack_94 = 0;
  puStack_98 = (undefined1 *)0x0;
  uStack_9c = 1;
  iStack_a0 = 0;
  iStack_a8 = unaff_EBP + -0x14;
  *(int **)(unaff_EBP + -0x20) = &iStack_a4;
  iStack_a4 = (int)piVar3;
  FUN_00450368();
  *(int **)(unaff_EBP + -0x30) = &iStack_a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00450368(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0074da18(*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_8c = (int *)0x5820b2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_8c = (int *)0x5820be;
  FUN_00414ebb();
  piStack_8c = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_8c != (int *)0x0) {
    puStack_90 = (undefined1 *)0x5820cf;
    (**(code **)(*piStack_8c + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_8c = (int *)0x5820db;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


