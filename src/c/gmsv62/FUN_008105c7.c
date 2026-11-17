/* FUN_008105c7 - 0x008105c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008105c7(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x5cc) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(int *)(unaff_EBP + -0x1c) = iVar1 << 2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x40;
  do {
    if ((*(int *)(extraout_ECX + 0x5d0) != 0) &&
       ((uint)(*(int *)(unaff_EBP + -0x18) + iVar1) < *(uint *)(*(int *)(extraout_ECX + 0x5d0) + -4)
       )) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_4c = 0x810630;
      FUN_00414f8b();
      iStack_50 = extraout_ECX + 0xb4;
      *(int **)(unaff_EBP + -0x24) = &iStack_4c;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_54 = 0x81064b;
      FUN_0046fcc9();
      iStack_50 = unaff_EBP + -0x10;
      uStack_54 = 0x810654;
      FUN_007d3a22();
      iStack_4c = 0x81065d;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      iStack_4c = unaff_EBP + -0x44;
      iStack_50 = 0x81066b;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_4c = 0x810677;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_4c = 0x810681;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iStack_4c = unaff_EBP + -0x34;
      iStack_50 = 0x81068f;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_4c = 0x81069b;
        FUN_00878dfb();
      }
      iStack_4c = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_50 = 0x8106af;
      iStack_50 = FUN_004458be();
      uStack_54 = 0x8106b8;
      uVar2 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_54;
      FUN_00448a17(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
      uVar3 = 0xb;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0044974c(0xb,uVar2);
      FUN_005c1d2c(uVar3,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_4c = 0x8106e8;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_4c = 0x8106f3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_4c = 0x810700;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_4c = 0x81070b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      iVar1 = *(int *)(unaff_EBP + -0x20);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
  } while (*(int *)(unaff_EBP + -0x14) < 0x9a);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_4c = 0x810743;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


