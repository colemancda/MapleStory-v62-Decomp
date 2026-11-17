/* ptr_005498e8 - 0x005498e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005498e8(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *puVar5;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int *piStack_8;
  undefined4 *puStack_4;
  
  do {
    piStack_8 = (int *)0x5498f0;
    puStack_4 = in_EAX;
    piStack_8 = (int *)(**(code **)(*unaff_ESI + 4))();
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_14 = *(int *)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x18) = &iStack_18;
    iStack_18 = extraout_ECX_00;
    FUN_0046fc23(unaff_EBP + 8);
    while( true ) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      FUN_005558b0();
      iVar2 = *(int *)(unaff_EBX + 0x578);
      if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
        (**(code **)(*unaff_ESI + 0x18))();
        *(int ***)(unaff_EBP + -0x18) = &param_2;
        param_2 = (int *)extraout_ECX_01;
        FUN_00424dbc();
        puStack_4 = *(undefined4 **)(unaff_EBP + -0x48);
        *(int ***)(unaff_EBP + -0x18) = &piStack_8;
        uStack_10 = 0x549965;
        piStack_8 = extraout_ECX_02;
        FUN_0046fc23();
        FUN_007d3201();
      }
      iVar2 = FUN_0045e2eb();
      if (iVar2 != *(int *)(unaff_EBX + 0x588)) {
        piVar3 = *(int **)(unaff_EBP + 8);
        if (piVar3 == (int *)0x0) {
          param_2 = (int *)0x54998e;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        param_2 = (int *)0x20;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        puStack_4 = *(undefined4 **)(unaff_EBP + -0x48);
        piStack_8 = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x8c))();
        if (iVar2 < 0) {
          param_2 = *(int **)(unaff_EBP + -0x20);
          FUN_00878e09();
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == *(int *)(unaff_EBX + 0x580)) {
        piVar3 = *(int **)(unaff_EBP + 8);
        if (piVar3 == (int *)0x0) {
          param_2 = (int *)0x5499e6;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        param_2 = (int *)0x20;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        puStack_4 = *(undefined4 **)(unaff_EBP + -0x48);
        piStack_8 = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x8c))();
        if (iVar2 < 0) {
          uStack_10 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_18 = 0x549a13;
          iStack_14 = iVar2;
          FUN_00878e09();
        }
        piVar3 = *(int **)(unaff_EBP + 8);
        if (piVar3 == (int *)0x0) {
          uStack_10 = 0x549a24;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        uStack_10 = 2;
        iStack_14 = 0x20;
        iStack_18 = *(int *)(unaff_EBP + -0x44) + -1;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x8c))(piVar3,*(undefined4 *)(unaff_EBP + -0x48));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        piVar3 = *(int **)(unaff_EBP + 8);
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x8c))
                          (piVar3,*(undefined4 *)(unaff_EBP + -0x48),
                           *(int *)(unaff_EBP + -0x3c) + -1,0x20,2);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        piVar3 = *(int **)(unaff_EBP + 8);
        if (piVar3 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x8c))
                          (piVar3,*(int *)(unaff_EBP + -0x48) + -1,
                           *(undefined4 *)(unaff_EBP + -0x44),2,0x20);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + 8);
        iVar2 = (**(code **)(*piVar3 + 0x8c))
                          (piVar3,*(int *)(unaff_EBP + -0x40) + -1,
                           *(undefined4 *)(unaff_EBP + -0x44),2,0x20);
        if (iVar2 < 0) {
          param_2 = piVar3;
          FUN_00878e09();
        }
        unaff_EBX = *(int *)(unaff_EBP + -0x1c);
      }
      do {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        iVar2 = *(int *)(unaff_EBX + 0x574) + 0x18;
        if (*(int *)(unaff_EBP + -0x14) <= iVar2) {
          iVar2 = *(int *)(unaff_EBP + -0x14);
        }
        if (iVar2 <= *(int *)(unaff_EBP + -0x10)) {
          if ((*(int *)(unaff_EBX + 0x578) == 2) && (DAT_00978358 != 0)) {
            param_2 = (int *)0x0;
            puStack_4 = (undefined4 *)0x0;
            piStack_8 = (int *)0x549b2b;
            param_2 = (int *)FUN_007a22a3();
            if ((param_2 != (int *)0x0) && (iVar2 = FUN_00549d20(), iVar2 != 0)) {
              param_2 = (int *)0x549b53;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
              param_2 = (int *)(unaff_EBP + -0x38);
              iVar2 = FUN_00402e32();
              if (iVar2 < 0) {
                param_2 = (int *)0x549b70;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              param_2 = (int *)0x549b7a;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
              param_2 = (int *)(unaff_EBP + -0x48);
              iVar2 = FUN_00402e32();
              puVar5 = &DAT_00980690;
              if (iVar2 < 0) {
                param_2 = (int *)0x549b90;
                FUN_00878dfb();
                puVar5 = extraout_ECX_03;
              }
              param_2 = (int *)0x0;
              *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_4;
              piStack_8 = (int *)0x73d;
              *(undefined1 *)(unaff_EBP + -4) = 4;
              uStack_10 = 0x549bb4;
              puStack_4 = puVar5;
              FUN_00679e4e();
              piStack_8 = (int *)(unaff_EBP + -0x78);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              FUN_00405a1d();
              FUN_00402660();
              FUN_00404a02();
              *(undefined1 *)(unaff_EBP + -4) = 6;
              iVar2 = FUN_004032b4();
              *(int *)(unaff_EBP + -0x28) = iVar2;
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
              if (iVar2 != 0) {
                param_2 = (int *)0x549bf0;
                iVar2 = FUN_0041a581();
                if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                  param_2 = (int *)0x549c01;
                  FUN_00878dfb();
                }
              }
              *(undefined1 *)(unaff_EBP + -4) = 10;
              param_2 = (int *)0x549c0e;
              iVar2 = FUN_00402bc3();
              if (iVar2 < 0) {
                param_2 = (int *)0x549c19;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 9;
              param_2 = (int *)0x549c26;
              iVar2 = FUN_00402bc3();
              if (iVar2 < 0) {
                param_2 = (int *)0x549c31;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 8;
              param_2 = (int *)0x549c3e;
              iVar2 = FUN_00402bc3();
              if (iVar2 < 0) {
                param_2 = (int *)0x549c49;
                FUN_00878dfb();
              }
              param_2 = (int *)0xff;
              FUN_004031b7();
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                param_2 = (int *)0x549c6c;
                FUN_00878dfb();
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  param_2 = (int *)0x549c77;
                  FUN_00878dfb();
                }
              }
              if (*(int *)(unaff_EBP + 8) == 0) {
                param_2 = (int *)0x549c85;
                FUN_00878dfb();
              }
              piVar3 = *(int **)(unaff_EBP + 8);
              *(int **)(unaff_EBP + -0x1c) = piVar3;
              *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
              iVar4 = FUN_0040eed0();
              iVar2 = *(int *)(unaff_EBP + -0x54);
              FUN_0040eea9();
              puStack_4 = *(undefined4 **)(unaff_EBP + -0x20);
              param_2 = *(int **)(unaff_EBP + -0x60);
              uStack_10 = *(undefined4 *)(unaff_EBP + -0x1c);
              iStack_14 = 0x549cc3;
              piStack_8 = (int *)(iVar2 - iVar4);
              iVar2 = (**(code **)(*piVar3 + 0x80))();
              if (iVar2 < 0) {
                param_2 = *(int **)(unaff_EBP + -0x1c);
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 8;
              param_2 = (int *)0x549ce2;
              iVar2 = FUN_00402bc3();
              if (iVar2 < 0) {
                param_2 = (int *)0x549ced;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
                param_2 = (int *)0x549cfe;
                (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
              }
            }
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            param_2 = (int *)0x549d0f;
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        param_2 = *(int **)(unaff_EBX + 0x578);
        iVar2 = FUN_00458c4f();
        unaff_ESI = *(int **)(iVar2 + 4);
        FUN_0046575e();
      } while (unaff_ESI == (int *)0x0);
      *(int **)(unaff_EBP + -0x20) = unaff_ESI + 3;
      uVar1 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
      param_2 = *(int **)(unaff_EBP + -0x10);
      FUN_00549d20();
      iVar2 = (**(code **)(*unaff_ESI + 0x10))();
      if (iVar2 != 3) break;
      param_2 = (int *)0x0;
      FUN_0048b3b8();
      puStack_4 = (undefined4 *)0x0;
      piStack_8 = (int *)0x0;
      uStack_10 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_14 = *(int *)(unaff_EBP + -0x18);
      *(int **)(unaff_EBP + -0x18) = &iStack_18;
      iStack_18 = extraout_ECX;
      FUN_0046fc23(unaff_EBP + 8);
    }
    in_EAX = (undefined4 *)0x0;
    param_2 = (int *)0x0;
  } while( true );
}


