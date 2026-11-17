/* FUN_004daa95 - 0x004daa95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004daa95(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  iVar1 = (*DAT_0097b704)();
  iVar1 = 0x59f - (uint)(iVar1 + (*(int *)(extraout_ECX + 0x73c) - *(int *)(extraout_ECX + 0x740)))
                  / 60000;
  if ((-1 < iVar1 / 0x3c) && (iVar1 / 0x3c < 0x18)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(int *)(unaff_EBP + -0x18) = iVar1 % 0x3c;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    FUN_00448dc6();
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar2 == (int *)0x0) {
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    iVar3 = *piVar2;
    *(int **)(unaff_EBP + -0x1c) = piVar2;
    iVar3 = (**(code **)(iVar3 + 0x8c))();
    if (iVar3 < 0) {
      iStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_64 = 0x4dab7e;
      iStack_60 = iVar3;
      FUN_00878e09();
    }
    iStack_5c = 0x4dab88;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_5c = unaff_EBP + -0x2c;
    iStack_60 = 0x4dab96;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_5c = 0x4daba2;
      FUN_00878dfb();
    }
    iStack_5c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_60 = 0x4dabb5;
    FUN_004031b7();
    iStack_5c = unaff_EBP + -0x3c;
    iStack_64 = unaff_EBP + -0x1c;
    iStack_60 = 0x1f;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_60 = 0x4dabd9;
    iStack_60 = FUN_00449749();
    iStack_64 = 0x4dabe2;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_64;
    FUN_00448a17(uVar4);
    uVar5 = 0xb;
    uVar4 = 0x17c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004115d9(0x17c,0xb);
    FUN_00448e3a(uVar4,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_5c = 0x4dac15;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_5c = 0x4dac22;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_5c = 0x4dac2d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_5c = 0x4dac3a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_5c = 0x4dac45;
      FUN_00878dfb();
    }
    uVar4 = (*DAT_0097b704)();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(extraout_ECX + 0x744) = uVar4;
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(int *)(extraout_ECX + 0x748) = iVar1;
    if (piVar2 != (int *)0x0) {
      iStack_5c = 0x4dac68;
      (**(code **)(*piVar2 + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


