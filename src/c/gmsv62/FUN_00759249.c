/* FUN_00759249 - 0x00759249 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00759249(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_74;
  int iStack_70;
  int *piStack_6c;
  
  FUN_00879bb8();
  piStack_6c = (int *)0x0;
  iStack_70 = 0x759268;
  FUN_004031b7();
  iVar2 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    piStack_6c = (int *)0x75927b;
    FUN_00878dfb();
  }
  piStack_6c = (int *)(unaff_EBP + -0x18);
  iStack_70 = 0x75928b;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_6c = (int *)0x759298;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x7592a3;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x420) == -1) {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      piStack_6c = (int *)0x7592b7;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x18);
    piStack_6c = (int *)0x1;
    iStack_70 = *(int *)(extraout_ECX + 0xc) + -0xc;
    iStack_74 = *(int *)(unaff_EBP + 8) + -4;
    iStack_70 = (**(code **)(*piVar1 + 0x8c))(piVar1,6);
    if (iStack_70 < 0) {
      iStack_74 = 0x7592e7;
      piStack_6c = piVar1;
      FUN_00878e09();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
  }
  piStack_6c = (int *)(unaff_EBP + -0x14);
  iStack_70 = 0x7592f5;
  FUN_007d4a9a();
  iStack_74 = unaff_EBP + -0x2c;
  iStack_70 = 0x23;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007d4a9a();
  piStack_6c = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_70 = 0x759320;
  puVar3 = (undefined4 *)FUN_00679d22();
  piStack_6c = (int *)*puVar3;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_70 = unaff_EBP + -0x24;
  iStack_74 = 0x759336;
  FUN_00434e21();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_6c = (int *)0x759345;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    piStack_6c = (int *)0x759359;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    piStack_6c = (int *)0x75936e;
    FUN_00434e38();
  }
  piStack_6c = (int *)0x75937d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_6c = (int *)0x75938d;
  iStack_70 = FUN_00449713();
  *(int ***)(unaff_EBP + -0x34) = &piStack_6c;
  iStack_74 = 0x759399;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_70 = 0x7593a5;
  FUN_0044974c();
  iStack_70 = 0x7593ac;
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_6c = (int *)0x7593bc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x7593c7;
    FUN_00878dfb();
  }
  piStack_6c = (int *)0x7593d0;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_6c = (int *)0x7593dd;
  FUN_00403191();
  piStack_6c = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_70 = 0x7593f1;
  iStack_70 = FUN_00449749();
  iStack_74 = 0x7593fa;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x34) = &iStack_74;
  FUN_00448a17(uVar4);
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = (*(int *)(extraout_ECX + 0xc) - *(int *)(unaff_EBP + -0x1c)) / 2;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004115d9(iVar2,uVar4);
  FUN_00448e3a(iVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_6c = (int *)0x759435;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x759440;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_6c = (int *)0x75944d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x759458;
    FUN_00878dfb();
  }
  piStack_6c = (int *)(unaff_EBP + -0x28);
  iStack_70 = 0x759468;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_6c = (int *)0x759475;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    piStack_6c = (int *)0x759489;
    FUN_00434e38();
  }
  piStack_6c = (int *)0x759493;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_6c = (int *)0x7594a3;
  iStack_70 = FUN_00449713();
  *(int ***)(unaff_EBP + -0x34) = &piStack_6c;
  iStack_74 = 0x7594af;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_70 = 0x7594bb;
  FUN_0044974c();
  iStack_70 = 0x7594c2;
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_6c = (int *)0x7594d2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x7594dd;
    FUN_00878dfb();
  }
  piStack_6c = (int *)(unaff_EBP + -0x34);
  iStack_70 = 0x7594ed;
  puVar3 = (undefined4 *)FUN_00679d22();
  piStack_6c = (int *)*puVar3;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_70 = unaff_EBP + -0x28;
  iStack_74 = 0x75950f;
  FUN_00434e21();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  piStack_6c = (int *)0x75951f;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00414ebb();
  piStack_6c = (int *)0x759540;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_6c = (int *)0x759550;
  iStack_70 = FUN_00449713();
  *(int ***)(unaff_EBP + 0xc) = &piStack_6c;
  iStack_74 = 0x75955c;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_70 = 0x759568;
  FUN_0044974c();
  iStack_70 = 0x75956f;
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_6c = (int *)0x75957f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x75958a;
    FUN_00878dfb();
  }
  piStack_6c = (int *)0x759596;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  piStack_6c = (int *)(unaff_EBP + -0x54);
  iStack_70 = 0x7595a0;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x7595ac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_6c = (int *)0x7595b6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  piStack_6c = (int *)(unaff_EBP + -0x44);
  iStack_70 = 0x7595c0;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x7595cc;
    FUN_00878dfb();
  }
  piStack_6c = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_70 = 0x7595e0;
  iStack_70 = FUN_00449749();
  iStack_74 = 0x7595e9;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + 0x10) = &iStack_74;
  FUN_00448a17(uVar4);
  iVar5 = *(int *)(unaff_EBP + 8) + 0x10;
  *(int *)(unaff_EBP + 8) = iVar5;
  iVar2 = *(int *)(extraout_ECX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = ((iVar2 - *(int *)(unaff_EBP + 0xc)) - *(int *)(unaff_EBP + -0x1c)) / 2;
  FUN_004115d9(iVar2,iVar5);
  FUN_00448e3a(iVar2,iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_6c = (int *)0x75962e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x759639;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_6c = (int *)0x759646;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x759651;
    FUN_00878dfb();
  }
  piStack_6c = (int *)0x759657;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  piStack_6c = (int *)(unaff_EBP + -0x44);
  iStack_70 = 0x759661;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x75966d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_6c = (int *)0x759677;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  piStack_6c = (int *)(unaff_EBP + -0x54);
  iStack_70 = 0x759681;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x75968d;
    FUN_00878dfb();
  }
  piStack_6c = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_70 = 0x7596a1;
  iStack_70 = FUN_00449749();
  iStack_74 = 0x7596aa;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + 0x10) = &iStack_74;
  FUN_00448a17(uVar4);
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = ((*(int *)(extraout_ECX + 0xc) - *(int *)(unaff_EBP + 0xc)) + *(int *)(unaff_EBP + -0x1c))
          / 2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_004115d9(iVar2,uVar4);
  FUN_00448e3a(iVar2,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_6c = (int *)0x7596e8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x7596f3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_6c = (int *)0x759700;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_6c = (int *)0x75970b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_6c = (int *)0x759734;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_6c = (int *)0x759745;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    piStack_6c = (int *)0x759756;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


