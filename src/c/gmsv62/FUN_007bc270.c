/* FUN_007bc270 - 0x007bc270 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bc270(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = 0x7bc291;
  bVar1 = FUN_0045e4b8();
  uVar4 = 1;
  if ((bVar1 & 1) == 0) {
    uStack_18 = 0x7bc29d;
    iVar2 = FUN_00429303();
    uVar3 = *(uint *)(iVar2 + 0x108) >> 1 & 1;
    *(uint *)(unaff_EBP + -0x14) = uVar3;
    if (uVar3 == 0) goto LAB_007bc2ec;
    uStack_18 = 0x361;
    iStack_1c = unaff_EBP + 0xc;
    uStack_20 = 0x7bc2bf;
    iStack_1c = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_18 = 0xc;
    uStack_20 = 0x7bc2cb;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_18 = 0x7bc2d9;
    FUN_00414ebb();
  }
  else {
LAB_007bc2ec:
    if (*(int *)(extraout_ECX + 0x1ed4) == 0) {
      uStack_18 = 0x7bc2fc;
      iVar2 = FUN_007b3bb4();
      if (iVar2 == 0) {
        uStack_18 = 0x7bc307;
        iVar2 = FUN_007a3f46();
        if (iVar2 == 0) {
          *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x78;
          uStack_18 = 0x7bc316;
          uVar3 = FUN_0043f6fe();
          if ((0x7fffffff < uVar3) &&
             (*(int *)((-(uint)(*(int *)(extraout_ECX + 0xd74) != 0) &
                       *(int *)(extraout_ECX + 0xd74) - 0xcU) + 0x110) == 0)) {
            uStack_18 = 0x7bc33a;
            iVar2 = FUN_00615923();
            if (iVar2 == 0) {
              uStack_18 = 0x7bc345;
              iVar2 = FUN_006158e9();
              if (iVar2 == 0) {
                uStack_18 = 0x7bc350;
                iVar2 = FUN_007bc4b2();
                if (iVar2 != 0) {
                  uStack_18 = 0x7bc35b;
                  iVar2 = FUN_007bc489();
                  if (iVar2 != 0) goto LAB_007bc2d9;
                }
                uStack_18 = 0;
                iStack_1c = 0;
                uStack_20 = 0;
                uStack_24 = 0xffffffff;
                uStack_28 = 0;
                uStack_30 = *(double *)(unaff_EBP + 8);
                uStack_38 = (double)CONCAT44(0x7bc378,(undefined4)uStack_38);
                iVar2 = FUN_007bd07c();
                if (iVar2 != 0) {
                  uStack_18 = 0x7fffffff;
                  iStack_1c = 0;
                  uStack_20 = 6;
                  uStack_24 = *(undefined4 *)(unaff_EBP + 0xc);
                  uStack_28 = *(undefined4 *)(unaff_EBP + 8);
                  uStack_30 = (double)CONCAT44(0x7bc396,(undefined4)uStack_30);
                  FUN_00790b31();
                  *(undefined4 *)(extraout_ECX + 0x1ed4) = 1;
                  uStack_30 = 1.27359821186679e-313;
                  FUN_004e98b7();
                  iVar2 = *(int *)(unaff_EBP + 0xc);
                  if ((*(byte *)(extraout_ECX + 0x52c) & 1) == 0) {
                    *(int *)(unaff_EBP + 0xc) = (iVar2 / 4) * 0x28 + 0x15e;
                  }
                  else {
                    *(int *)(unaff_EBP + 0xc) = (iVar2 / 4) * -0x28 + -0x15e;
                  }
                  *(int *)(unaff_EBP + 8) = (iVar2 / 4) * -0x14 + -0xfa;
                  uStack_30 = (double)*(int *)(unaff_EBP + 8);
                  uStack_38 = (double)*(int *)(unaff_EBP + 0xc);
                  uStack_3c = 0x7bc3fe;
                  FUN_0067db5b();
                  uStack_30 = (double)CONCAT44(0xc00614a4,extraout_ECX_00);
                  *(undefined8 **)(unaff_EBP + 0xc) = &uStack_30;
                  uStack_38 = 4.00742574129585e-317;
                  FUN_00424e0a();
                  iVar2 = *(int *)(extraout_ECX + 4);
                  *(undefined4 *)(unaff_EBP + -4) = 1;
                  uStack_38 = (double)CONCAT44(0x7bc41e,(undefined4)uStack_38);
                  iVar2 = (**(code **)(iVar2 + 0x10))();
                  uStack_38._4_4_ = *(undefined4 *)(iVar2 + 4);
                  uStack_38._0_4_ = 0x7bc428;
                  puVar5 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
                  uStack_38 = (double)CONCAT44(uStack_38._4_4_,*puVar5);
                  *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
                  FUN_00424dd7(0);
                  *(undefined1 *)(unaff_EBP + -4) = 2;
                  FUN_00679d86(unaff_EBP + -0x14,0xa6f);
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  iVar2 = FUN_0043f900();
                  uVar3 = (uint)(iVar2 == 0);
                  uVar6 = FUN_00411641(uVar3);
                  FUN_00424e82(uVar6);
                  FUN_0042b613(uVar6,uVar3);
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  uStack_30 = (double)CONCAT44(0x7bc482,(undefined4)uStack_30);
                  FUN_00402676();
                  goto LAB_007bc2db;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_007bc2d9:
  uVar4 = 0;
LAB_007bc2db:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


