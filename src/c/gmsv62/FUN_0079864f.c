/* FUN_0079864f - 0x0079864f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079864f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_40;
  int iStack_3c;
  int *piStack_38;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x524) == 0) {
    piStack_38 = (int *)0x798675;
    iVar2 = FUN_0079b949();
    iVar5 = *(int *)(unaff_EBP + 8);
    if (iVar5 == 0) {
      piStack_38 = (int *)0x798687;
      FUN_0079ba1a();
    }
    else if (*(int *)(iVar2 + 8) != iVar5) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piStack_38 = (int *)(unaff_EBP + 8);
      iStack_3c = 0x7986b0;
      puVar3 = (undefined4 *)FUN_00679d86();
      piStack_38 = (int *)*puVar3;
      iStack_3c = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_40 = 0x7986c1;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      piStack_38 = (int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 8) = iVar5;
      iStack_3c = 0x7986e4;
      FUN_00424e27();
      iStack_3c = 0x7986eb;
      iStack_3c = FUN_0043210d();
      uStack_40 = 0x7986f4;
      uVar4 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + 8) = &uStack_40;
      uStack_40 = extraout_ECX_00;
      FUN_004033a1(uVar4);
      iVar5 = FUN_0079be1e();
      if (iVar5 != 0) {
        piStack_38 = (int *)0x79871b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
        piStack_38 = (int *)(unaff_EBP + -0x30);
        iStack_3c = 0x79872a;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_38 = (int *)0x798736;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piStack_38 = (int *)0x798740;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
        piStack_38 = (int *)(unaff_EBP + -0x20);
        iStack_3c = 0x79874a;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_38 = (int *)0x798756;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(iVar2 + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar5 == 0) {
          piStack_38 = (int *)0x79876a;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(iVar2 + 0x14);
        uStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
        iStack_3c = *(int *)(unaff_EBP + -0x2c);
        piStack_38 = *(int **)(unaff_EBP + -0x28);
        iVar5 = (**(code **)(*piVar1 + 0x110))
                          (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x20),
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                           *(undefined4 *)(unaff_EBP + -0x14));
        if (iVar5 < 0) {
          uStack_40 = 0x7987a0;
          iStack_3c = iVar5;
          piStack_38 = piVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piStack_38 = (int *)0x7987ad;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_38 = (int *)0x7987b8;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_38 = (int *)0x7987c5;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_38 = (int *)0x7987d0;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


