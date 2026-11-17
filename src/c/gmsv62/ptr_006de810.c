/* ptr_006de810 - 0x006de810 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


VARIANTARG * ptr_006de810(int *param_1,int *param_2,undefined *param_3,VARIANTARG *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  short *psVar10;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  do {
    piVar5 = (int *)(in_EAX + *(int *)(unaff_EBP + -0x10) * 8);
    (*DAT_0097b54c)(unaff_EBP + -0x50,
                    unaff_ESI[0x168] +
                    ((unaff_ESI[0x163] + *piVar5 >> ((byte)unaff_ESI[0x165] & 0x1f)) -
                    unaff_ESI[0x16a]) + -2,
                    unaff_ESI[0x169] +
                    ((piVar5[1] + unaff_ESI[0x164] >> ((byte)unaff_ESI[0x165] & 0x1f)) -
                    unaff_ESI[0x16b]) + -5);
    iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    if (iVar4 != 0) {
      param_4 = (VARIANTARG *)(unaff_EBP + -0x1c);
      param_3 = (undefined *)(unaff_EBP + -0x10);
      param_2 = (int *)0x6de885;
      FUN_006defab();
      param_4 = *(VARIANTARG **)(unaff_EBP + -0x1c);
      param_3 = (undefined *)0x6de88d;
      iVar4 = FUN_005f3a71();
      if (*(int **)(iVar4 + 0x18) != unaff_EBX) break;
      param_4 = *(VARIANTARG **)(unaff_EBP + -0x1c);
      param_3 = (undefined *)0x6de8a3;
      piVar5 = (int *)FUN_005f1350();
      if ((piVar5 == unaff_EBX) || ((int *)piVar5[0x49] != unaff_EBX)) {
        param_4 = *(VARIANTARG **)(iVar4 + 4);
        param_3 = (undefined *)0x6de8c1;
        iVar4 = (**(code **)(*unaff_ESI + 0x30))();
        param_3 = (undefined *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
        param_2 = (int *)0x6de8d0;
        iVar4 = (**(code **)(*unaff_ESI + 0x2c))();
        param_2 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 8));
        param_1 = (int *)0x6de8e0;
        FUN_0074d755();
        goto LAB_006ded8a;
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    if (((int *)unaff_ESI[0x16d] == unaff_EBX) ||
       ((uint)((int *)unaff_ESI[0x16d])[-1] <= *(uint *)(unaff_EBP + -0x10))) break;
    param_4 = (VARIANTARG *)0x7;
    param_3 = (undefined *)0x5;
    param_1 = unaff_EBX;
    param_2 = unaff_EBX;
    (*DAT_0097b504)();
    in_EAX = unaff_ESI[0x16d];
  } while( true );
  piVar5 = *(int **)(DAT_009791f0 + 0x28);
  *(int **)(unaff_EBP + -0x1c) = piVar5;
  while (piVar5 != unaff_EBX) {
    param_4 = (VARIANTARG *)0x7;
    param_3 = (undefined *)0x5;
    param_1 = unaff_EBX;
    param_2 = unaff_EBX;
    (*DAT_0097b504)();
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    uVar8 = *(undefined4 *)(iVar4 + 4);
    *(int *)(unaff_EBP + -0x24) = iVar4;
    iVar4 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar8;
    piVar5 = (int *)(**(code **)(*(int *)(iVar4 + 4) + 0x10))();
    iVar4 = *piVar5;
    iVar7 = unaff_ESI[0x163];
    iVar2 = unaff_ESI[0x165];
    iVar3 = unaff_ESI[0x16a];
    iVar6 = (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 0x10) + 4) + 0x10))();
    (*DAT_0097b54c)(unaff_EBP + -0x50,
                    ((iVar4 + iVar7 >> ((byte)iVar2 & 0x1f)) - iVar3) + -2 + unaff_ESI[0x168],
                    ((*(int *)(iVar6 + 4) + unaff_ESI[0x164] >> ((byte)unaff_ESI[0x165] & 0x1f)) -
                    unaff_ESI[0x16b]) + -5 + unaff_ESI[0x169]);
    iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    if (iVar4 != 0) {
      param_4 = (VARIANTARG *)(unaff_EBP + -0x24);
      param_3 = (undefined *)0x6de9d3;
      puVar9 = (undefined4 *)FUN_006ded92();
      param_4 = (VARIANTARG *)*puVar9;
      iVar4 = *unaff_ESI;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      param_3 = (undefined *)0x6de9e3;
      iVar4 = (**(code **)(iVar4 + 0x30))();
      param_3 = (undefined *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
      param_2 = (int *)0x6de9f2;
      iVar4 = (**(code **)(*unaff_ESI + 0x2c))();
      param_2 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 8));
      param_1 = (int *)0x6dea02;
      FUN_0074d755();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      param_4 = (VARIANTARG *)0x6dea0e;
      FUN_00414ebb();
      goto LAB_006ded8a;
    }
    piVar5 = *(int **)(unaff_EBP + -0x1c);
  }
  param_4 = (VARIANTARG *)0x6de999;
  iVar4 = FUN_00429303();
  if (iVar4 != 0) {
    param_4 = (VARIANTARG *)0x6de9a6;
    FUN_00429303();
    param_4 = (VARIANTARG *)0x6de9b1;
    FUN_004f162d();
    iVar4 = DAT_00979264;
    *(int *)(unaff_EBP + -0x24) = DAT_00979264;
    if (*(int **)(iVar4 + 4) == unaff_EBX) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int **)(iVar4 + 4))[-1];
    }
    *(int *)(unaff_EBP + -0x1c) = iVar4 + -1;
    if ((int)unaff_EBX <= iVar4 + -1) {
      do {
        iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 4) + 4 +
                        *(int *)(unaff_EBP + -0x1c) * 8);
        if ((((*(int *)(iVar4 + 8) == 2) || (*(int *)(iVar4 + 8) == 7)) &&
            (*(int *)(iVar4 + 0x14) != -1)) && (*(int **)(iVar4 + 0x1c) == unaff_EBX)) {
          param_4 = (VARIANTARG *)0x7;
          param_3 = (undefined *)0x5;
          param_1 = unaff_EBX;
          param_2 = unaff_EBX;
          (*DAT_0097b504)();
          (*DAT_0097b54c)(unaff_EBP + -0x60,
                          unaff_ESI[0x168] +
                          ((*(int *)(iVar4 + 0xc) + unaff_ESI[0x163] >>
                           ((byte)unaff_ESI[0x165] & 0x1f)) - unaff_ESI[0x16a]) + -2,
                          unaff_ESI[0x169] +
                          ((*(int *)(iVar4 + 0x10) + unaff_ESI[0x164] >>
                           ((byte)unaff_ESI[0x165] & 0x1f)) - unaff_ESI[0x16b]) + -5);
          iVar7 = (*DAT_0097b57c)(unaff_EBP + -0x60,*(undefined4 *)(unaff_EBP + 8),
                                  *(undefined4 *)(unaff_EBP + 0xc));
          if (iVar7 != 0) {
            *(int **)(unaff_EBP + -0x20) = unaff_EBX;
            *(undefined4 *)(unaff_EBP + -4) = 9;
            *(int **)(unaff_EBP + -0x14) = unaff_EBX;
            *(undefined1 *)(unaff_EBP + -4) = 10;
            param_4 = (VARIANTARG *)0x6deaf4;
            uVar8 = FUN_00429303();
            *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
            param_4 = (VARIANTARG *)0xe74;
            param_3 = (undefined *)(unaff_EBP + -0x28);
            param_2 = (int *)0x6deb0a;
            puVar9 = (undefined4 *)FUN_00679d86();
            *(undefined4 *)(unaff_EBP + -0x1c) = *puVar9;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            param_4 = (VARIANTARG *)0x6deb21;
            param_4 = (VARIANTARG *)FUN_004f162d();
            param_3 = *(undefined **)(unaff_EBP + -0x1c);
            param_2 = (int *)(unaff_EBP + -0x20);
            param_1 = (int *)0x6deb2e;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            param_4 = (VARIANTARG *)0x6deb3d;
            FUN_00402676();
            param_4 = (VARIANTARG *)(unaff_EBP + -0x50);
            param_3 = (undefined *)0x6deb47;
            VariantInit(param_4);
            param_3 = (undefined *)(unaff_EBP + -0x50);
            param_4 = (VARIANTARG *)&DAT_00980690;
            param_2 = (int *)0x6deb55;
            param_4 = (VARIANTARG *)FUN_00402e32();
            if ((int)param_4 < (int)unaff_EBX) {
              param_3 = (undefined *)0x6deb61;
              FUN_00878dfb();
            }
            param_4 = (VARIANTARG *)(unaff_EBP + -0x40);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            param_3 = (undefined *)0x6deb6f;
            VariantInit(param_4);
            param_3 = (undefined *)(unaff_EBP + -0x40);
            param_4 = (VARIANTARG *)&DAT_00980690;
            param_2 = (int *)0x6deb7d;
            param_4 = (VARIANTARG *)FUN_00402e32();
            if ((int)param_4 < (int)unaff_EBX) {
              param_3 = (undefined *)0x6deb89;
              FUN_00878dfb();
            }
            param_2 = (int *)(unaff_EBP + -0x50);
            param_1 = (int *)(unaff_EBP + -0x40);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            uVar8 = FUN_00411641();
            *(BADSPACEBASE **)(unaff_EBP + -0x30) = register0x00000010;
            FUN_004033a1(uVar8);
            iVar7 = unaff_EBP + -0x70;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_00405a1d(iVar7);
            FUN_00402660();
            FUN_00404a02(iVar7);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            param_2 = (int *)0x6debd1;
            piVar5 = (int *)FUN_004032b4();
            *(int **)(unaff_EBP + -0x28) = piVar5;
            *(int **)(unaff_EBP + -0x18) = unaff_EBX;
            if (piVar5 != unaff_EBX) {
              param_4 = (VARIANTARG *)(unaff_EBP + -0x28);
              param_3 = (undefined *)0x6debe7;
              param_4 = (VARIANTARG *)FUN_00404b30();
              if (((int)param_4 < (int)unaff_EBX) && (param_4 != (VARIANTARG *)0x80004002)) {
                param_3 = (undefined *)0x6debf8;
                FUN_00878dfb();
              }
            }
            param_4 = (VARIANTARG *)(unaff_EBP + -0x70);
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            param_3 = (undefined *)0x6dec05;
            param_4 = (VARIANTARG *)FUN_00402bc3();
            if ((int)param_4 < (int)unaff_EBX) {
              param_3 = (undefined *)0x6dec10;
              FUN_00878dfb();
            }
            param_4 = (VARIANTARG *)(unaff_EBP + -0x40);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            param_3 = (undefined *)0x6dec1d;
            param_4 = (VARIANTARG *)FUN_00402bc3();
            if ((int)param_4 < (int)unaff_EBX) {
              param_3 = (undefined *)0x6dec28;
              FUN_00878dfb();
            }
            param_4 = (VARIANTARG *)(unaff_EBP + -0x50);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            param_3 = (undefined *)0x6dec35;
            param_4 = (VARIANTARG *)FUN_00402bc3();
            if ((int)param_4 < (int)unaff_EBX) {
              param_3 = (undefined *)0x6dec40;
              FUN_00878dfb();
            }
            if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
              param_1 = *(int **)(iVar4 + 4);
              param_2 = (int *)0xffffffff;
              (*DAT_0097b4c8)();
              param_4 = (VARIANTARG *)0x6dec66;
              FUN_0087a1b0();
              param_4 = (VARIANTARG *)0xffffffff;
              param_2 = (int *)0x6dec73;
              param_3 = &stack0x00000014;
              param_2 = (int *)FUN_00449713();
              param_1 = (int *)0x6dec79;
              param_3 = (undefined *)FUN_00456ad5();
              *(undefined1 **)(unaff_EBP + -0x30) = &stack0x00000010;
              param_2 = (int *)0x6dec86;
              FUN_004033a1();
              param_3 = (undefined *)(unaff_EBP + -0x80);
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              param_2 = (int *)0x6dec96;
              FUN_0040263d();
              param_2 = (int *)0x6dec9d;
              psVar10 = (short *)FUN_004048a4();
              sVar1 = *psVar10;
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              if (sVar1 == 8) {
                param_3 = *(undefined **)(psVar10 + 4);
              }
              else {
                param_3 = &DAT_0097812c;
              }
              param_4 = (VARIANTARG *)0xffffffff;
              param_2 = (int *)0x6decbc;
              FUN_00454081();
              param_4 = (VARIANTARG *)(unaff_EBP + -0x80);
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              param_3 = (undefined *)0x6decc9;
              param_4 = (VARIANTARG *)FUN_00402bc3();
              if ((int)param_4 < (int)unaff_EBX) {
                param_3 = (undefined *)0x6decd4;
                FUN_00878dfb();
              }
            }
            param_4 = *(VARIANTARG **)(unaff_EBP + -0x14);
            if ((param_4 == (VARIANTARG *)unaff_EBX) || ((char)*(int *)param_4 == (char)unaff_EBX))
            {
              param_4 = (VARIANTARG *)0x6c7;
              param_3 = (undefined *)(unaff_EBP + -0x30);
              param_2 = (int *)0x6decf2;
              puVar9 = (undefined4 *)FUN_00679d22();
              param_4 = (VARIANTARG *)*puVar9;
              param_3 = *(undefined **)(iVar4 + 0x14);
              param_2 = (int *)(unaff_EBP + -0x2c);
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              param_1 = (int *)0x6ded0a;
              param_4 = (VARIANTARG *)FUN_00550c58();
              *(undefined1 *)(unaff_EBP + -4) = 0x17;
              param_3 = (undefined *)0x6ded17;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              param_4 = (VARIANTARG *)0x6ded23;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              param_4 = (VARIANTARG *)0x6ded2f;
              FUN_00414ebb();
              param_4 = *(VARIANTARG **)(unaff_EBP + -0x14);
            }
            if ((param_4 != (VARIANTARG *)unaff_EBX) && ((char)*(int *)param_4 != (char)unaff_EBX))
            {
              param_3 = (undefined *)0x6ded42;
              iVar4 = (**(code **)(*unaff_ESI + 0x30))();
              param_3 = (undefined *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
              param_2 = (int *)0x6ded51;
              iVar4 = (**(code **)(*unaff_ESI + 0x2c))();
              param_2 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 8));
              param_1 = (int *)0x6ded61;
              FUN_0074d755();
            }
            param_4 = *(VARIANTARG **)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (param_4 != (VARIANTARG *)unaff_EBX) {
              param_3 = (undefined *)0x6ded72;
              (**(code **)(*(int *)param_4 + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 9;
            param_4 = (VARIANTARG *)0x6ded7e;
            FUN_00414ebb();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            param_4 = (VARIANTARG *)0x6ded8a;
            FUN_00402676();
LAB_006ded8a:
            param_4 = (VARIANTARG *)0x1;
            goto LAB_006deac7;
          }
        }
        piVar5 = (int *)(unaff_EBP + -0x1c);
        *piVar5 = *piVar5 + -1;
      } while (-1 < *piVar5);
    }
    param_4 = (VARIANTARG *)0x6deac5;
    FUN_0074d6fb();
  }
  param_4 = (VARIANTARG *)0x0;
LAB_006deac7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return param_4;
}


