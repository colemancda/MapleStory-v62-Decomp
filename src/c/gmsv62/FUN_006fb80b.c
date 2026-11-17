/* FUN_006fb80b - 0x006fb80b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fb80b(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  undefined4 extraout_ECX_00;
  uint uVar5;
  int unaff_EBP;
  int iVar6;
  int *piVar7;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b0;
  int *piStack_ac;
  int iStack_a8;
  
  FUN_00879bb8();
  iStack_a8 = 0x6fb828;
  FUN_0081622a();
  iStack_a8 = 0x6fb833;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_a8 = 0x6fb84a;
  FUN_00414f8b();
  piStack_ac = (int *)(extraout_ECX + 0xb0);
  *(int **)(unaff_EBP + -0x14) = &iStack_a8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_b0 = 0x6fb865;
  FUN_0046fcc9();
  piStack_ac = (int *)(unaff_EBP + -0x20);
  uStack_b0 = 0x6fb86e;
  FUN_007d3a22();
  iStack_a8 = 0x6fb87f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a8 = 0x6fb88c;
  FUN_00403191();
  iStack_a8 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_ac = (int *)0x6fb89f;
  piStack_ac = (int *)FUN_00449749();
  uStack_b0 = 0x6fb8a8;
  FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_b0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_bc = 0x6fb8c4;
  FUN_004115d9();
  iStack_bc = 0x6fb8cb;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a8 = 0x6fb8d8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a8 = 0x6fb8e3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a8 = 0x6fb8f0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a8 = 0x6fb8fb;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x3e;
  iStack_a8 = 0x6fb915;
  FUN_00414f8b();
  piVar7 = (int *)(extraout_ECX + 0xb4);
  *(int **)(unaff_EBP + -0x14) = &iStack_a8;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_b0 = 0x6fb930;
  piStack_ac = piVar7;
  FUN_0046fcc9();
  piStack_ac = (int *)(unaff_EBP + -0x18);
  uStack_b0 = 0x6fb939;
  uVar3 = FUN_007d3a22();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  iStack_a8 = 0x6fb948;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_a8 = 0x6fb955;
  FUN_00403191();
  iStack_a8 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_ac = (int *)0x6fb968;
  piStack_ac = (int *)FUN_00449749();
  uStack_b0 = 0x6fb971;
  FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_b0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_bc = 0x6fb98d;
  FUN_004115d9();
  iStack_bc = 0x6fb994;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_a8 = 0x6fb9a1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a8 = 0x6fb9ac;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a8 = 0x6fb9b9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a8 = 0x6fb9c4;
    FUN_00878dfb();
  }
  if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0')) {
    if (*piVar7 == 0) {
      iStack_a8 = 0x6fb9df;
      FUN_00878dfb();
    }
    iVar2 = FUN_004a2734();
    *(int *)(unaff_EBP + -0x10) = iVar2 + 0x45;
  }
  pcVar1 = *(char **)(*(int *)(extraout_ECX + 0x70) + 0x10);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_a8 = 0x6fba0c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_a8 = 0x6fba19;
    FUN_00403191();
    iStack_a8 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_ac = (int *)0x6fba2c;
    piStack_ac = (int *)FUN_00449749();
    uStack_b0 = 0x6fba35;
    FUN_00705b3e();
    uStack_b0 = 0x6fba3f;
    FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_b0;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_bc = 0x6fba60;
    FUN_004115d9();
    iStack_bc = 0x6fba67;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_a8 = 0x6fba74;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a8 = 0x6fba7f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_a8 = 0x6fba8c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a8 = 0x6fba97;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    iStack_a8 = 0;
    piStack_ac = (int *)0x0;
    uStack_b0 = 0;
    (*DAT_0097b504)();
  }
  else {
    iStack_a8 = 0x6fbaac;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_a8 = unaff_EBP + -0x34;
    piStack_ac = (int *)0x6fbab6;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_a8 = 0x6fbac2;
      FUN_00878dfb();
    }
    iVar2 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar2 == 0) {
      iStack_a8 = 0x6fbad5;
      FUN_00878dfb();
    }
    FUN_004a2734();
    iStack_a8 = unaff_EBP + -0x34;
    piStack_ac = (int *)0x6fbaec;
    uStack_b0 = FUN_00449713();
    *(int ***)(unaff_EBP + -0x14) = &piStack_ac;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_b0 = 0x6fbb03;
    FUN_0044974c();
    uStack_b0 = 0x6fbb0a;
    iStack_a8 = FUN_00448ebb();
    iStack_a8 = iStack_a8 + 0x17;
    piStack_ac = *(int **)(unaff_EBP + -0x10);
    uStack_b0 = 0x17;
    (*DAT_0097b504)();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_bc = 0x6fbb2d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_bc = 0x6fbb38;
      FUN_00878dfb();
    }
  }
  iStack_bc = 1;
  iStack_c0 = 0x6fbb59;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_bc = 0x6fbb6d;
    FUN_00878dfb();
  }
  iStack_bc = 0x95;
  iStack_c0 = 0x107;
  uStack_c4 = 0x6c;
  FUN_00545a5c(unaff_EBP + -0xa0,0x12);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_bc = 0x6fbb9b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_bc = 0x6fbba6;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0x9c);
  *(int *)(unaff_EBP + -0x5c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 1;
  *(int *)(unaff_EBP + -0x54) = iVar2 + 0x97;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar5 = 0;
  while ((iVar2 = *(int *)(*(int *)(extraout_ECX + 0x70) + 0x18), iVar2 != 0 &&
         (uVar5 < *(uint *)(iVar2 + -4)))) {
    iVar6 = uVar5 * 4;
    iStack_bc = 1;
    iStack_c0 = *(int *)(unaff_EBP + -0x10);
    uStack_c4 = 0;
    (*DAT_0097b504)(unaff_EBP + -0x90);
    iVar2 = (*DAT_0097b5a0)(unaff_EBP + -0x90,unaff_EBP + -0x60,unaff_EBP + -0x90);
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        iVar6 = *(int *)(unaff_EBP + -0x24) * 4;
        iVar2 = *(int *)(*(int *)(*(int *)(extraout_ECX + 0x70) + 0x20) + iVar6);
        if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + -0x38))) break;
        piVar7 = (int *)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x70) + 0x20) + iVar6) +
                        *(int *)(unaff_EBP + -0x1c));
        iVar2 = (piVar7[7] - *(int *)(extraout_ECX + 0x9c)) + *(int *)(unaff_EBP + -0x10);
        if ((-0x31 < iVar2) && (iVar2 < 0xaf)) {
          if (*piVar7 == 0) {
            iStack_bc = 0x6fbd34;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
            iStack_bc = unaff_EBP + -0x48;
            iStack_c0 = 0x6fbd3e;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              iStack_bc = 0x6fbd4a;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            iStack_bc = 0x6fbd58;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
            iStack_bc = unaff_EBP + -0x34;
            iStack_c0 = 0x6fbd62;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              iStack_bc = 0x6fbd6e;
              FUN_00878dfb();
            }
            iStack_bc = unaff_EBP + -0x34;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            iStack_c0 = 0x6fbd82;
            iStack_c0 = FUN_00449749();
            uStack_c4 = 0x6fbd8b;
            uVar3 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_c4;
            uStack_c4 = extraout_ECX_00;
            FUN_00448a17(uVar3);
            iVar2 = (piVar7[7] - *(int *)(extraout_ECX + 0x9c)) + 0x6b + *(int *)(unaff_EBP + -0x10)
            ;
            iVar6 = piVar7[6] + 0x11;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_004115d9(iVar6,iVar2);
            FUN_00448e3a(iVar6,iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            iStack_bc = 0x6fbdcf;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_bc = 0x6fbdda;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            iStack_bc = 0x6fbde7;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_bc = 0x6fbdf6;
              FUN_00878dfb();
            }
          }
          else if (*piVar7 == 1) {
            iStack_bc = 0xff;
            iStack_c0 = 0x6fbc99;
            FUN_004031b7();
            piVar4 = *(int **)(unaff_EBP + 8);
            iVar2 = piVar7[5];
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            *(int *)(unaff_EBP + -0x50) = iVar2;
            if (piVar4 == (int *)0x0) {
              iStack_bc = 0x6fbcb4;
              FUN_00878dfb();
              piVar4 = *(int **)(unaff_EBP + 8);
            }
            iVar2 = *piVar4;
            *(int *)(unaff_EBP + -0x4c) =
                 (piVar7[7] - *(int *)(extraout_ECX + 0x9c)) + 0x6b + *(int *)(unaff_EBP + -0x10);
            iVar6 = piVar7[6];
            uStack_c4 = *(undefined4 *)(unaff_EBP + -0x80);
            iStack_c0 = *(int *)(unaff_EBP + -0x7c);
            iStack_bc = *(undefined4 *)(unaff_EBP + -0x78);
            *(int **)(unaff_EBP + -0x14) = piVar4;
            iVar2 = (**(code **)(iVar2 + 0x80))
                              (piVar4,iVar6 + 0x11,*(undefined4 *)(unaff_EBP + -0x4c),
                               *(undefined4 *)(unaff_EBP + -0x50));
            if (iVar2 < 0) {
              iStack_bc = *(undefined4 *)(unaff_EBP + -0x14);
              uStack_c4 = 0x6fbd01;
              iStack_c0 = iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            iStack_bc = 0x6fbd0e;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              iStack_bc = 0x6fbd19;
              FUN_00878dfb();
            }
          }
        }
        *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x3c;
      }
    }
    *(int *)(unaff_EBP + -0x10) =
         *(int *)(unaff_EBP + -0x10) +
         *(int *)(*(int *)(*(int *)(extraout_ECX + 0x70) + 0x1c) + iVar6);
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    uVar5 = *(uint *)(unaff_EBP + -0x24);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x6fbe22;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_bc = 0x6fbe2d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_bc = 0x6fbe56;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


