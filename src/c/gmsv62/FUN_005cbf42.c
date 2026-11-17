/* FUN_005cbf42 - 0x005cbf42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005cbf42(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  
  FUN_00879bb8();
  iVar4 = DAT_00978358;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0xd78) == *(int *)(unaff_EBP + 8))) {
    uVar1 = (*DAT_0097b704)();
    *(undefined4 *)(extraout_ECX + 0x458) = uVar1;
  }
  iVar2 = FUN_005d1961();
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 8) = uVar1;
  uVar1 = FUN_004b8ce9();
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(iVar2 + 0x38) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(iVar2 + 0x50) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  piVar3 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  *(int *)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + 0x28) - *piVar3;
  iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  iVar7 = *(int *)(unaff_EBP + 0x2c) - *(int *)(iVar4 + 4);
  *(int *)(unaff_EBP + 0x2c) = iVar7;
  uVar1 = FUN_0055a766();
  *(undefined4 *)(iVar2 + 0x68) = uVar1;
  uVar1 = FUN_004133b5();
  iVar4 = *(int *)(unaff_EBP + 0x38);
  *(undefined4 *)(iVar2 + 0x80) = uVar1;
  if (iVar4 == 1) {
    if ((*(int *)(extraout_ECX + 0x274) == 0) ||
       (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0)) {
      iVar4 = *(int *)(extraout_ECX + 0x15c);
    }
    puStack_44 = (undefined1 *)(iVar4 + 0x10c);
    iStack_48 = 0x5cc09e;
    FUN_00413367();
  }
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x74) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x8c) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(iVar2 + 0x98) = uVar1;
  uVar1 = FUN_0055a766();
  iVar4 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(iVar2 + 0xa4) = uVar1;
  piVar3 = *(int **)(unaff_EBP + 0x30);
  if (0 < iVar4) {
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*piVar3 + -4) >> 1;
    }
    if (((uVar5 != 0) && (*(int *)(unaff_EBP + 0x28) != 0x7fffffff)) && (iVar7 != 0x7fffffff)) {
      if (((*(code **)(unaff_EBP + 0xc) != ptr_004e23ec) && (*(int *)(unaff_EBP + 0xc) != 0x4e23ef))
         || (*(int *)(unaff_EBP + 0x24) == 0)) {
        piVar3 = (int *)FUN_005d1aeb();
        puStack_44 = (undefined1 *)0x5cc166;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        puStack_44 = (undefined1 *)(unaff_EBP + -0x2c);
        iStack_48 = 0x5cc174;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          puStack_44 = (undefined1 *)0x5cc180;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_44 = (undefined1 *)0x5cc18a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
        puStack_44 = (undefined1 *)(unaff_EBP + -0x1c);
        iStack_48 = 0x5cc198;
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          puStack_44 = (undefined1 *)0x5cc1a4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_48 = 0x5cc1b1;
        puStack_44 = (undefined1 *)iVar2;
        iVar7 = FUN_00413367();
        puStack_44 = (undefined1 *)(unaff_EBP + -0x2c);
        iStack_48 = unaff_EBP + -0x1c;
        uStack_4c = 0x63d;
        uStack_4c = FUN_00679e4e(unaff_EBP + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uVar1 = FUN_00432f57(unaff_EBP + 0x1c);
        *(undefined4 **)(unaff_EBP + 0x38) = &uStack_4c;
        FUN_0046fd15(uVar1);
        iVar4 = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00405a1d(iVar4);
        FUN_00402660();
        puStack_44 = (undefined1 *)FUN_00404a02(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_48 = 0x5cc214;
        iVar4 = FUN_00412550();
        iStack_48 = unaff_EBP + -0x3c;
        *piVar3 = iVar7 - iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_4c = 0x5cc225;
        iVar4 = FUN_00402bc3();
        uVar1 = 0;
        if (iVar4 < 0) {
          puStack_44 = (undefined1 *)0x5cc234;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 0x1c) = 0;
        }
        if (*(int *)(unaff_EBP + 0x10) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_44 = (undefined1 *)0x5cc25f;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_44 = (undefined1 *)0x5cc26a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_44 = (undefined1 *)0x5cc277;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_44 = (undefined1 *)0x5cc282;
          FUN_00878dfb();
        }
        iVar4 = *(int *)(unaff_EBP + 0xc);
        iVar7 = *(int *)(unaff_EBP + 0x18);
        piVar3[1] = iVar4;
        piVar3[2] = iVar7;
        if ((iVar4 == 0x127a7a) || (iVar4 == 0x12a191)) {
          puStack_44 = (undefined1 *)0x5cc2ae;
          piVar6 = (int *)FUN_007c00e8();
          iVar4 = (**(code **)(*piVar6 + 4))();
          puStack_44 = (undefined1 *)(iVar4 + 0x3a8);
          iStack_48 = 0x5cc2c6;
          iVar4 = FUN_00413367();
          if (iVar4 < 0x127a81) {
            if (iVar4 < 0x127a7f) {
              if (0x127a7a < iVar4) {
                if (iVar4 < 0x127a7d) {
                  uVar1 = 2;
                }
                else if (iVar4 < 0x127a7f) {
                  uVar1 = 1;
                }
              }
            }
            else {
              uVar1 = 3;
            }
          }
          else if ((0x12a18a < iVar4) && (iVar4 < 0x12a18d)) {
            uVar1 = 5;
          }
          FUN_0087a1b0();
          uStack_4c = 0x5cc31b;
          iStack_48 = uVar1;
          puStack_44 = &stack0xffffffc4;
          FUN_0087a25a();
          puStack_44 = (undefined1 *)0x5cc327;
          FUN_00402e8e();
          puStack_44 = &DAT_00965698;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_48 = 0x5cc33c;
          FUN_0049e7d6();
          puStack_44 = (undefined1 *)0x5cc343;
          FUN_00432dcc();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + 0x1c) != 0) {
            FUN_004030b1();
          }
        }
        puStack_44 = (undefined1 *)0x5cc35b;
        iVar4 = FUN_00653d6b();
        if ((iVar4 == 0) || (*(int *)(unaff_EBP + 0x24) != 0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
        piVar3[3] = iVar4;
        puStack_44 = (undefined1 *)0x5cc37c;
        FUN_00402f41();
        piVar3[5] = *(int *)(unaff_EBP + 0x28);
        piVar3[6] = *(int *)(unaff_EBP + 0x2c);
        piVar3 = *(int **)(unaff_EBP + 0x30);
      }
      if ((*(int *)(unaff_EBP + 0xc) == 0x205d2f) || (*(int *)(unaff_EBP + 0xc) == 0x21e3cf)) {
        iStack_48 = 0x5cc3a6;
        puStack_44 = (undefined1 *)iVar2;
        FUN_00413367();
        uVar1 = FUN_004133b5();
        *(undefined4 *)(iVar2 + 8) = uVar1;
        piVar3 = *(int **)(unaff_EBP + 0x30);
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


