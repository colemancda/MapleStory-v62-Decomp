/* FUN_004dacab - 0x004dacab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004dacab(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_68 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_6c = 0x4dacd9;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_68 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_6c = unaff_EBP + -0x14;
  iStack_70 = 0x4dacec;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iStack_68 = 0x4dad06;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x4dad15;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_68 = 0x4dad21;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x4dad2b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_68 = unaff_EBP + -0x30;
  iStack_6c = 0x4dad35;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_68 = 0x4dad41;
    FUN_00878dfb();
  }
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x40;
  iStack_70 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_74 = (undefined1 *)0x4dad57;
  uVar3 = FUN_00411641();
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_74;
  FUN_004033a1(uVar3);
  iVar2 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_6c = 0x4dad89;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    iStack_68 = 0x4dada4;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_68 = 0x4dadb2;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x4dadbf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4dadca;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x4dadd7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4dade2;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_68 = 0x4dadef;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_68 = 0x4dadfa;
    FUN_00878dfb();
    iVar2 = extraout_ECX_00;
  }
  iStack_68 = 0;
  puStack_74 = (undefined1 *)&iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0xd3f;
  iStack_6c = iVar2;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_74 = (undefined1 *)0x4dae22;
  FUN_0040263d();
  puStack_74 = (undefined1 *)0x4dae29;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_6c = 0x4dae34;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x4dae49;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_68 = 0x4dae57;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_68 = 0x4dae64;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x4dae6f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_68 = 0x4dae7f;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


