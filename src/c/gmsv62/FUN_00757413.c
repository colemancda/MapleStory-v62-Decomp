/* FUN_00757413 - 0x00757413 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00757413(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 *puVar6;
  int unaff_EBP;
  uint uVar7;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int *piStack_120;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x420);
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  if (iVar1 != -1) {
    *(int *)(unaff_EBP + -0x18) = iVar1 + 9;
    FUN_004031b7();
    iVar1 = *(int *)(extraout_ECX + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      FUN_00878dfb();
    }
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    iVar1 = (**(code **)(*piVar4 + 0x8c))();
    if (iVar1 < 0) {
      iStack_128 = 0x7574d2;
      iStack_124 = iVar1;
      piStack_120 = piVar4;
      FUN_00878e09();
    }
    iVar1 = *(int *)(extraout_ECX + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (0 < iVar1) {
      puVar6 = (undefined4 *)(extraout_ECX + 0x38);
      iVar1 = extraout_ECX;
      do {
        iVar2 = puVar6[-2];
        iVar5 = puVar6[1];
        *(int *)(unaff_EBP + -0x14) = iVar5;
        if (iVar2 == 1000) {
          piStack_120 = (int *)0x757505;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_120 = (int *)0x757515;
          FUN_00403191();
          piStack_120 = (int *)(unaff_EBP + -0xa0);
          iStack_124 = puVar6[-4];
          iStack_128 = unaff_EBP + -0x34;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_12c = 0x757535;
          FUN_00756efd();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_124 = 0x757540;
          iStack_124 = FUN_00449749();
          iStack_128 = 0x757549;
          iStack_12c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_128;
          iStack_130 = 0x757555;
          iStack_128 = extraout_ECX_00;
          FUN_00448a17();
          iStack_12c = *(int *)(unaff_EBP + -0x18) + -2 + *(int *)(unaff_EBP + 8);
          *(int *)(unaff_EBP + -0x14) = iStack_12c;
          iStack_130 = (*(int *)(iVar1 + 0xc) - puVar6[-6]) / 2;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          uStack_134 = 0x75757b;
          FUN_004115d9();
          uStack_134 = 0x757582;
          FUN_00448e3a();
          FUN_004497b5();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          piStack_120 = (int *)0x75759a;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_120 = (int *)0x7575a5;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_120 = (int *)0x7575b5;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_120 = (int *)0x7575c0;
            FUN_00878dfb();
          }
          if (((char *)*puVar6 != (char *)0x0) && (*(char *)*puVar6 != '\0')) {
            piStack_120 = (int *)0x7575df;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_120 = (int *)0x7575ef;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piStack_120 = (int *)0x7575ff;
            FUN_00403191();
            piStack_120 = (int *)(unaff_EBP + -0xc0);
            iStack_124 = puVar6[-1];
            iStack_128 = unaff_EBP + -0x40;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            iStack_12c = 0x75761f;
            FUN_00756efd();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_124 = 0x75762a;
            iStack_124 = FUN_00449749();
            iStack_128 = 0x757632;
            iStack_12c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_128;
            iStack_130 = 0x75763e;
            iStack_128 = extraout_ECX_01;
            FUN_00448a17();
            iStack_12c = *(int *)(unaff_EBP + -0x14);
            iStack_130 = unaff_EBP + -0xb0;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            uStack_134 = 0x757654;
            uVar3 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x24) = &uStack_134;
            FUN_00448a17(uVar3);
            uVar3 = puVar6[-4];
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00756efd(unaff_EBP + -0x3c,uVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_0044974c();
            iStack_130 = FUN_00448ebb();
            iVar2 = *(int *)(iVar1 + 0xc);
            iVar5 = puVar6[-6];
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_130 = (iVar2 - iVar5) / 2 + iStack_130;
            uStack_134 = 0x7576a0;
            FUN_004115d9();
            uStack_134 = 0x7576a7;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
              piStack_120 = (int *)0x7576b8;
              (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
              piStack_120 = (int *)0x7576c9;
              (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piStack_120 = (int *)0x7576d9;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x7576e4;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_120 = (int *)0x7576f4;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x7576ff;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_00757a1a:
            piStack_120 = (int *)0x757a20;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x757a2b;
              FUN_00878dfb();
            }
          }
        }
        else {
          iVar2 = 0;
          if (iVar5 != 0) {
            piStack_120 = (int *)0xff;
            iStack_124 = 0x757728;
            FUN_004031b7();
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar1 + 0x4dc);
            piVar4 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            if (piVar4 == (int *)0x0) {
              piStack_120 = (int *)0x757746;
              FUN_00878dfb();
              piVar4 = *(int **)(unaff_EBP + -0x10);
            }
            iVar1 = *piVar4;
            iStack_12c = *(int *)(unaff_EBP + -0x24);
            iStack_128 = *(int *)(unaff_EBP + -0x100);
            iStack_124 = *(int *)(unaff_EBP + -0xfc);
            piStack_120 = *(int **)(unaff_EBP + -0xf8);
            iStack_130 = *(int *)(unaff_EBP + -0x18) + 2 + *(int *)(unaff_EBP + 8);
            uStack_134 = 10;
            *(int **)(unaff_EBP + -0x1c) = piVar4;
            iVar1 = (**(code **)(iVar1 + 0x80))(piVar4);
            if (iVar1 < 0) {
              piStack_120 = *(int **)(unaff_EBP + -0x1c);
              iStack_128 = 0x757786;
              iStack_124 = iVar1;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 2;
            piStack_120 = (int *)0x757796;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_120 = (int *)0x7577a1;
              FUN_00878dfb();
            }
            iVar1 = *(int *)(unaff_EBP + -0x28);
            iVar2 = *(int *)(unaff_EBP + -0x14);
          }
          piStack_120 = (int *)0x7577b1;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
          piStack_120 = (int *)(unaff_EBP + -0x80);
          iStack_124 = 0x7577bf;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            piStack_120 = (int *)0x7577cb;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_120 = (int *)0x7577d9;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
          piStack_120 = (int *)(unaff_EBP + -0x70);
          iStack_124 = 0x7577e7;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            piStack_120 = (int *)0x7577f3;
            FUN_00878dfb();
          }
          piStack_120 = (int *)(unaff_EBP + -0x70);
          iStack_124 = puVar6[-4];
          iStack_128 = unaff_EBP + -0x30;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_12c = 0x75780d;
          FUN_00756efd();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_124 = 0x757818;
          iStack_124 = FUN_00449749();
          iStack_128 = 0x757821;
          iStack_12c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_128;
          iStack_130 = 0x75782d;
          iStack_128 = extraout_ECX_02;
          FUN_00448a17();
          iStack_12c = *(int *)(unaff_EBP + -0x18) + -2 + *(int *)(unaff_EBP + 8);
          *(int *)(unaff_EBP + -0x14) = iStack_12c;
          uVar7 = -(uint)(iVar2 != 0) & 6;
          iStack_130 = uVar7 + 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          uStack_134 = 0x757852;
          FUN_004115d9();
          uStack_134 = 0x757859;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
            piStack_120 = (int *)0x75786a;
            (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_120 = (int *)0x757877;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_120 = (int *)0x757882;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_120 = (int *)0x75788f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_120 = (int *)0x75789a;
            FUN_00878dfb();
          }
          if (((char *)*puVar6 != (char *)0x0) && (*(char *)*puVar6 != '\0')) {
            piStack_120 = (int *)0x7578ba;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
            piStack_120 = (int *)(unaff_EBP + -0x90);
            iStack_124 = 0x7578cb;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x7578d7;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            piStack_120 = (int *)0x7578e5;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
            piStack_120 = (int *)(unaff_EBP + -0x50);
            iStack_124 = 0x7578f3;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x7578ff;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            piStack_120 = (int *)0x75790d;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
            piStack_120 = (int *)(unaff_EBP + -0x60);
            iStack_124 = 0x75791b;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x757927;
              FUN_00878dfb();
            }
            piStack_120 = (int *)(unaff_EBP + -0x50);
            iStack_124 = puVar6[-1];
            iStack_128 = unaff_EBP + -0x2c;
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            iStack_12c = 0x757944;
            FUN_00756efd();
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iStack_124 = 0x75794f;
            iStack_124 = FUN_00449749();
            iStack_128 = 0x757957;
            iStack_12c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_128;
            iStack_130 = 0x757963;
            iStack_128 = extraout_ECX_03;
            FUN_00448a17();
            iStack_12c = *(int *)(unaff_EBP + -0x14);
            iStack_130 = unaff_EBP + -0x60;
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            uStack_134 = 0x757976;
            uVar3 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x24) = &uStack_134;
            FUN_00448a17(uVar3);
            uVar3 = puVar6[-4];
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_00756efd(unaff_EBP + -0x38,uVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_0044974c();
            iStack_130 = FUN_00448ebb();
            iStack_130 = uVar7 + 10 + iStack_130;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            uStack_134 = 0x7579b7;
            FUN_004115d9();
            uStack_134 = 0x7579be;
            FUN_00448e3a();
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
              piStack_120 = (int *)0x7579cf;
              (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
              piStack_120 = (int *)0x7579e0;
              (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            piStack_120 = (int *)0x7579ed;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x7579f8;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            piStack_120 = (int *)0x757a05;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_120 = (int *)0x757a10;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 2;
            goto LAB_00757a1a;
          }
        }
        iVar2 = puVar6[-5];
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4 + iVar2;
        puVar6 = puVar6 + 8;
      } while (*(int *)(unaff_EBP + -0x20) < *(int *)(iVar1 + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_120 = (int *)0x757a5d;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


