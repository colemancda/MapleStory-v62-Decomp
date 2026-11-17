/* FUN_00715237 - 0x00715237 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00715237(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int *piVar3;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *piStack_64;
  int iStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_54 = 0x715254;
  FUN_0081622a();
  iStack_54 = 0x71525f;
  FUN_00448dc6();
  iVar1 = DAT_00979174;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar4 = -(uint)(*(int *)(extraout_ECX + 0x84) != 0) & 5;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 100;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(uint *)(unaff_EBP + -0x1c) = uVar4 + 5;
  *(uint *)(unaff_EBP + -0x10) = uVar4 * 0x28;
  uVar5 = uVar4;
  while( true ) {
    if (**(int **)(unaff_EBP + -0x18) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(**(int **)(unaff_EBP + -0x18) + -4);
    }
    if (*(int *)(unaff_EBP + -0x1c) <= iVar1) {
      iVar1 = *(int *)(unaff_EBP + -0x1c);
    }
    if (iVar1 <= (int)uVar5) break;
    if (uVar5 == *(uint *)(*(int *)(unaff_EBP + -0x20) + 0x80)) {
      piVar3 = *(int **)(unaff_EBP + 8);
      if (piVar3 == (int *)0x0) {
        iStack_54 = 0x7152ce;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar3;
      iStack_54 = 0x28;
      iStack_58 = 0xeb;
      puStack_5c = (undefined1 *)(*(int *)(unaff_EBP + -0x10) + uVar4 * -0x28 + 0x2a);
      iStack_60 = 0xf;
      *(int **)(unaff_EBP + -0x24) = piVar3;
      iStack_68 = 0x7152f4;
      piStack_64 = piVar3;
      iVar1 = (**(code **)(iVar1 + 0x8c))();
      if (iVar1 < 0) {
        iStack_54 = *(int *)(unaff_EBP + -0x24);
        puStack_5c = (undefined1 *)0x715306;
        iStack_58 = iVar1;
        FUN_00878e09();
      }
    }
    if (uVar5 == *(uint *)(*(int *)(unaff_EBP + -0x20) + 0x7c)) {
      piVar3 = *(int **)(unaff_EBP + 8);
      if (piVar3 == (int *)0x0) {
        iStack_54 = 0x71531f;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar3;
      iStack_54 = 0x28;
      iStack_58 = 0xeb;
      puStack_5c = (undefined1 *)(*(int *)(unaff_EBP + -0x10) + uVar4 * -0x28 + 0x2a);
      iStack_60 = 0xf;
      *(int **)(unaff_EBP + -0x24) = piVar3;
      iStack_68 = 0x715345;
      piStack_64 = piVar3;
      iStack_58 = (**(code **)(iVar1 + 0x8c))();
      if (iStack_58 < 0) {
        iStack_54 = *(int *)(unaff_EBP + -0x24);
        puStack_5c = (undefined1 *)0x715357;
        FUN_00878e09();
      }
    }
    iStack_54 = 0;
    iStack_58 = 0;
    puStack_5c = (undefined1 *)0x0;
    iStack_60 = 0;
    piStack_64 = (int *)0x0;
    iStack_68 = *(int *)(unaff_EBP + -0x10) + uVar4 * -0x28 + 0x50;
    uStack_6c = 0x14;
    uStack_74 = 0x715371;
    uStack_70 = uVar5;
    puVar2 = (undefined4 *)FUN_00537b54();
    uStack_70 = *puVar2;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_74;
    FUN_0046fc23(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0048b97b();
    FUN_005558b0();
    iStack_54 = unaff_EBP + -0x28;
    iStack_58 = 0x7153a9;
    FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_54 = 0x7153b6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    puStack_5c = (undefined1 *)&iStack_54;
    *(int **)(unaff_EBP + -0x24) = &iStack_54;
    iStack_58 = 1;
    iStack_60 = 0x7153d5;
    FUN_007d4a9a();
    iStack_58 = unaff_EBP + -0x14;
    puStack_5c = (undefined1 *)0x7153e0;
    FUN_007d3a22();
    iStack_54 = 0x7153ed;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_54 = unaff_EBP + -0x3c;
    iStack_58 = 0x7153fb;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_54 = 0x715407;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_54 = 0x715418;
    FUN_00403191();
    iStack_54 = unaff_EBP + -0x4c;
    puStack_5c = (undefined1 *)(unaff_EBP + -0x2c);
    iStack_58 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_60 = 0x71542f;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_58 = 0x71543c;
    iStack_58 = FUN_00449749();
    puStack_5c = (undefined1 *)0x715445;
    iStack_60 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_5c;
    piStack_64 = (int *)0x715451;
    puStack_5c = extraout_ECX_00;
    FUN_00448a17();
    iStack_60 = *(int *)(unaff_EBP + -0x10) + uVar4 * -0x28 + 0x3a;
    piStack_64 = (int *)0x46;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_68 = 0x715468;
    FUN_004115d9();
    iStack_68 = 0x71546f;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      iStack_54 = 0x715480;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_54 = 0x71548d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_54 = 0x715498;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_54 = 0x7154a5;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_54 = 0x7154b0;
      FUN_00878dfb();
    }
    uVar5 = uVar5 + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_54 = 0x7154d6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


