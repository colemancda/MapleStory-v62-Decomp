/* ptr_00471acf - 0x00471acf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_00471acf(VARIANTARG *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 uStack_c;
  int iStack_8;
  uint uStack_4;
  
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_4 = 0x471ada;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x30) = iVar1;
  *(int *)(unaff_EBP + -0x18) = unaff_ESI;
  if (iVar1 != unaff_ESI) {
    param_1 = (VARIANTARG *)(unaff_EBP + -0x30);
    param_1 = (VARIANTARG *)FUN_00404b30();
    if (((int)param_1 < unaff_ESI) && (param_1 != (VARIANTARG *)0x80004002)) {
      FUN_00878dfb();
    }
  }
  param_1 = (VARIANTARG *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_1 = (VARIANTARG *)FUN_00402bc3();
  if ((int)param_1 < unaff_ESI) {
    FUN_00878dfb();
  }
  param_1 = (VARIANTARG *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  param_1 = (VARIANTARG *)FUN_00402bc3();
  if ((int)param_1 < unaff_ESI) {
    FUN_00878dfb();
  }
  param_1 = (VARIANTARG *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  param_1 = (VARIANTARG *)FUN_00402bc3();
  if ((int)param_1 < unaff_ESI) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != unaff_ESI) {
    param_1 = (VARIANTARG *)0x471b5c;
    FUN_0040cf4d();
    param_1 = (VARIANTARG *)(unaff_EBP + -0x29);
    uStack_4 = 0x471b6b;
    FUN_00472746();
    *(int *)(unaff_EBP + -0x20) = unaff_ESI;
    do {
      if (*(int *)(unaff_EBP + -0x18) == unaff_ESI) {
        param_1 = (VARIANTARG *)0x80004003;
        FUN_00878dfb();
      }
      param_1 = (VARIANTARG *)0x471b87;
      uVar2 = FUN_0040cf4d();
      if (uVar2 <= *(uint *)(unaff_EBP + -0x20)) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        param_1 = (VARIANTARG *)0x471df5;
        FUN_004027eb();
        param_1 = (VARIANTARG *)0x1;
        uStack_4 = unaff_EBP + -0x4a4;
        iStack_8 = *(undefined4 *)(unaff_EBP + 8);
        uStack_c = 0x471e0c;
        FUN_004714b2();
        if (DAT_009784ec == unaff_ESI) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(DAT_009784ec + -4);
        }
        iVar1 = iVar1 + -1;
        if (unaff_ESI <= iVar1) {
          iVar8 = iVar1 * 0x14;
          iVar6 = DAT_009784ec;
          do {
            puVar7 = *(undefined4 **)(iVar8 + 0xc + iVar6);
            while (puVar7 != (undefined4 *)0x0) {
              param_1 = (VARIANTARG *)*puVar7;
              iVar6 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 4);
              puVar7 = (undefined4 *)(-(uint)(iVar6 != 0) & iVar6 + 0x10U);
              uStack_4 = 0x471e5d;
              iVar5 = FUN_00471450();
              iVar6 = DAT_009784ec;
              if (iVar5 != 0) {
                param_1 = (VARIANTARG *)0x471e7f;
                iVar6 = (*DAT_0097b704)();
                if ((uint)(iVar6 - _DAT_009784f8) < 10000) goto LAB_00471dd2;
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
                param_1 = (VARIANTARG *)0x597;
                *(undefined4 *)(unaff_EBP + -4) = 0x15;
                uStack_4 = 0x471eaf;
                FUN_00679d86();
                uStack_4 = unaff_EBP + -0x14;
                *(undefined1 *)(unaff_EBP + -4) = 0x16;
                iStack_8 = 0x471ec0;
                param_1 = (VARIANTARG *)iVar1;
                FUN_0041354c();
                *(undefined1 *)(unaff_EBP + -4) = 0x15;
                param_1 = (VARIANTARG *)0x471ecf;
                FUN_00402676();
                param_1 = (VARIANTARG *)(unaff_EBP + -0x54);
                VariantInit(param_1);
                param_1 = (VARIANTARG *)&DAT_00980690;
                uStack_4 = 0x471eea;
                param_1 = (VARIANTARG *)FUN_00402e32();
                if ((int)param_1 < 0) {
                  FUN_00878dfb();
                }
                param_1 = (VARIANTARG *)(unaff_EBP + -0x44);
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                VariantInit(param_1);
                param_1 = (VARIANTARG *)&DAT_00980690;
                uStack_4 = 0x471f0a;
                param_1 = (VARIANTARG *)FUN_00402e32();
                if ((int)param_1 < 0) {
                  FUN_00878dfb();
                }
                param_1 = (VARIANTARG *)0x0;
                uStack_4 = unaff_EBP + -0x54;
                iStack_8 = unaff_EBP + -0x44;
                *(undefined1 *)(unaff_EBP + -4) = 0x18;
                uStack_c = 0x471f2c;
                uVar3 = FUN_00411641();
                *(undefined4 **)(unaff_EBP + -0x28) = &uStack_c;
                FUN_004033a1(uVar3);
                iVar1 = unaff_EBP + -100;
                *(undefined1 *)(unaff_EBP + -4) = 0x18;
                FUN_00405a1d(iVar1);
                FUN_00402660();
                FUN_00404a02(iVar1);
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                uStack_4 = 0x471f5e;
                iVar1 = FUN_004032b4();
                *(int *)(unaff_EBP + -0x1c) = iVar1;
                *(undefined4 *)(unaff_EBP + 8) = 0;
                if (iVar1 != 0) {
                  param_1 = (VARIANTARG *)(unaff_EBP + -0x1c);
                  param_1 = (VARIANTARG *)FUN_00404b30();
                  if (((int)param_1 < 0) && (param_1 != (VARIANTARG *)0x80004002)) {
                    FUN_00878dfb();
                  }
                }
                param_1 = (VARIANTARG *)(unaff_EBP + -100);
                *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                param_1 = (VARIANTARG *)FUN_00402bc3();
                if ((int)param_1 < 0) {
                  FUN_00878dfb();
                }
                param_1 = (VARIANTARG *)(unaff_EBP + -0x44);
                *(undefined1 *)(unaff_EBP + -4) = 0x1d;
                param_1 = (VARIANTARG *)FUN_00402bc3();
                if ((int)param_1 < 0) {
                  FUN_00878dfb();
                }
                param_1 = (VARIANTARG *)(unaff_EBP + -0x54);
                *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                param_1 = (VARIANTARG *)FUN_00402bc3();
                if ((int)param_1 < 0) {
                  FUN_00878dfb();
                }
                param_1 = (VARIANTARG *)0x0;
                if (*(int *)(unaff_EBP + 8) == 0) {
LAB_0047209f:
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  if (param_1 != (VARIANTARG *)0x0) {
                    (**(code **)(*(int *)param_1 + 8))();
                  }
                  uVar3 = 0;
                }
                else {
                  param_1 = (VARIANTARG *)0x471fdd;
                  iVar1 = FUN_0040cf4d();
                  if (iVar1 == 0) {
                    param_1 = *(VARIANTARG **)(unaff_EBP + 8);
                    goto LAB_0047209f;
                  }
                  param_1 = (VARIANTARG *)0x471fed;
                  FUN_0087a1b0();
                  param_1 = (VARIANTARG *)&stack0x00000008;
                  FUN_0040263d();
                  FUN_0040cf4d();
                  _rand();
                  uStack_4 = 0x472010;
                  FUN_00412335();
                  *(undefined1 **)(unaff_EBP + -0x28) = &stack0x00000004;
                  uStack_4 = 0x47201c;
                  FUN_004033a1();
                  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                  uStack_4 = 0x47202c;
                  FUN_0040263d();
                  uStack_4 = 0x472033;
                  FUN_004048a4();
                  *(undefined1 *)(unaff_EBP + -4) = 0x20;
                  param_1 = (VARIANTARG *)0xffffffff;
                  uStack_4 = 0x472052;
                  FUN_00454081();
                  param_1 = (VARIANTARG *)(unaff_EBP + -0x74);
                  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                  param_1 = (VARIANTARG *)FUN_00402bc3();
                  if ((int)param_1 < 0) {
                    FUN_00878dfb();
                  }
                  param_1 = (VARIANTARG *)0x472070;
                  _DAT_009784f8 = (*DAT_0097b704)();
                  param_1 = *(VARIANTARG **)(unaff_EBP + 8);
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  if (param_1 != (VARIANTARG *)0x0) {
                    (**(code **)(*(int *)param_1 + 8))();
                  }
                  uVar3 = 1;
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                param_1 = (VARIANTARG *)0x472095;
                FUN_00402676();
                goto LAB_00471dd4;
              }
            }
            iVar1 = iVar1 + -1;
            iVar8 = iVar8 + -0x14;
          } while (-1 < iVar1);
        }
        goto LAB_00471dd2;
      }
      *(int *)(unaff_EBP + -0x24) = unaff_ESI;
      param_1 = (VARIANTARG *)0x596;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_4 = 0x471baa;
      FUN_00679d86();
      param_1 = *(VARIANTARG **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_4 = unaff_EBP + -0x24;
      iStack_8 = 0x471bbd;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x34) != unaff_ESI) {
        param_1 = (VARIANTARG *)(*(int *)(unaff_EBP + -0x34) + -0xc);
        FUN_00403384();
      }
      param_1 = (VARIANTARG *)unaff_EDI;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      param_1 = (VARIANTARG *)unaff_EDI;
      FUN_00403191();
      uStack_4 = unaff_EBP + -0x84;
      iStack_8 = unaff_EBP + -0x94;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_c = 0x471c0d;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_c;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_4 = 0x471c3f;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar1;
      *(int *)(unaff_EBP + -0x10) = unaff_ESI;
      if (iVar1 != unaff_ESI) {
        param_1 = (VARIANTARG *)(unaff_EBP + -0x1c);
        param_1 = (VARIANTARG *)FUN_00404b30();
        if (((int)param_1 < unaff_ESI) && (param_1 != (VARIANTARG *)0x80004002)) {
          FUN_00878dfb();
        }
      }
      param_1 = (VARIANTARG *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      param_1 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_1 < unaff_ESI) {
        FUN_00878dfb();
      }
      param_1 = (VARIANTARG *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      param_1 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_1 < unaff_ESI) {
        FUN_00878dfb();
      }
      param_1 = (VARIANTARG *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      param_1 = (VARIANTARG *)FUN_00402bc3();
      if ((int)param_1 < unaff_ESI) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == unaff_ESI) goto LAB_00471dad;
      uVar2 = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == unaff_ESI) {
          param_1 = (VARIANTARG *)0x80004003;
          FUN_00878dfb();
        }
        param_1 = (VARIANTARG *)0x471cd6;
        uVar4 = FUN_0040cf4d();
        if (uVar4 <= uVar2) break;
        param_1 = (VARIANTARG *)0x471ce6;
        FUN_0087a1b0();
        param_1 = (VARIANTARG *)&DAT_0097812c;
        iStack_8 = 0x471cf4;
        uStack_4 = uVar2;
        uStack_4 = FUN_00412335();
        *(BADSPACEBASE **)(unaff_EBP + -0x28) = register0x00000010;
        iStack_8 = 0x471d00;
        FUN_004033a1();
        uStack_4 = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_8 = 0x471d10;
        FUN_0040263d();
        iStack_8 = 0x471d17;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uStack_4 = 0x471d21;
        FUN_004343c5();
        param_1 = (VARIANTARG *)0xffffffff;
        *(int *)(unaff_EBP + -0x14) = unaff_ESI;
        uStack_4 = 0x471d31;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        param_1 = (VARIANTARG *)0x471d42;
        FUN_004726be();
        param_1 = (VARIANTARG *)(unaff_EBP + -0x14);
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x14) != unaff_ESI) {
          param_1 = (VARIANTARG *)(*(int *)(unaff_EBP + -0x14) + -0xc);
          FUN_00434e38();
        }
        param_1 = (VARIANTARG *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        param_1 = (VARIANTARG *)FUN_00402bc3();
        if ((int)param_1 < unaff_ESI) {
          FUN_00878dfb();
        }
        uVar2 = uVar2 + 1;
      }
      param_1 = (VARIANTARG *)0x471d88;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x24) != unaff_ESI) {
        param_1 = (VARIANTARG *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        FUN_00403384();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      unaff_EDI = &DAT_00980690;
    } while( true );
  }
LAB_00471dca:
  param_1 = (VARIANTARG *)0x471dd2;
  FUN_004027eb();
LAB_00471dd2:
  uVar3 = 0;
LAB_00471dd4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
LAB_00471dad:
  param_1 = (VARIANTARG *)0x471db5;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x24) != unaff_ESI) {
    param_1 = (VARIANTARG *)(*(int *)(unaff_EBP + -0x24) + -0xc);
    FUN_00403384();
  }
  goto LAB_00471dca;
}


