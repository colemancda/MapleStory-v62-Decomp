/* FUN_0077fcef - 0x0077fcef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077fcef(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_60;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  iStack_60 = unaff_EBP + -0x18;
  FUN_007d4a9a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x2b44;
  do {
    if (**(int **)(unaff_EBP + -0x20) != 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      iStack_60 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0085c53b(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x48,unaff_EBP + -0x1c,
                   unaff_EBP + -0x44,unaff_EBP + -0x28,unaff_EBP + -0x40);
      iStack_60 = 0x77fd70;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iStack_60 = unaff_EBP + -0x58;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_60 = 0x77fd8a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_60 = 0x77fd9a;
      uVar2 = FUN_00449713();
      *(int **)(unaff_EBP + -0x2c) = &iStack_60;
      FUN_00448a17(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0044974c();
      uVar2 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_60 = 0x77fdc9;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_60 = 0x77fdd4;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x2c)) {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x2c);
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 4;
  } while (*(int *)(unaff_EBP + -0x14) < 6);
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 100;
  if (*(int *)(unaff_EBP + -0x10) < 0x96) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x96;
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    iStack_60 = 0x77fe2a;
    FUN_00878dfb();
  }
  iVar3 = FUN_004a2734();
  iVar1 = *(int *)(unaff_EBP + -0x24);
  iStack_60 = unaff_EBP + -0x30;
  FUN_0047c974(*(undefined4 *)(extraout_ECX + 0x554),unaff_EBP + -0x34);
  iStack_60 = 0;
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
               *(undefined4 *)(unaff_EBP + -0x10),(iVar3 + 5) * iVar1 + 5,10,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_60 = 0x77fe86;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


