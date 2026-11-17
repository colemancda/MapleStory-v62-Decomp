/* ptr_00471c4c - 0x00471c4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_00471c4c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar8;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  
  do {
    iVar2 = FUN_00404b30();
    if ((iVar2 < unaff_ESI) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    do {
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar2 = FUN_00402bc3();
      if (iVar2 < unaff_ESI) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < unaff_ESI) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iVar2 = FUN_00402bc3();
      if (iVar2 < unaff_ESI) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == unaff_ESI) {
        FUN_004027eb();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x24) != unaff_ESI) {
          FUN_00403384();
        }
        FUN_004027eb();
        goto LAB_00471dd2;
      }
      uVar8 = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == unaff_ESI) {
          FUN_00878dfb();
        }
        uVar3 = FUN_0040cf4d();
        if (uVar3 <= uVar8) break;
        FUN_0087a1b0();
        iStack_10 = 0x471cf4;
        uStack_c = uVar8;
        uStack_c = FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffff8;
        iStack_10 = 0x471d00;
        FUN_004033a1();
        uStack_c = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_10 = 0x471d10;
        FUN_0040263d();
        iStack_10 = 0x471d17;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        uStack_c = 0x471d21;
        FUN_004343c5();
        *(int *)(unaff_EBP + -0x14) = unaff_ESI;
        uStack_c = 0x471d31;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_004726be();
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x14) != unaff_ESI) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iVar2 = FUN_00402bc3();
        if (iVar2 < unaff_ESI) {
          FUN_00878dfb();
        }
        uVar8 = uVar8 + 1;
      }
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x24) != unaff_ESI) {
        FUN_00403384();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      if (*(int *)(unaff_EBP + -0x18) == unaff_ESI) {
        FUN_00878dfb();
      }
      uVar8 = FUN_0040cf4d();
      if (uVar8 <= *(uint *)(unaff_EBP + -0x20)) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004027eb();
        uStack_c = unaff_EBP + -0x4a4;
        iStack_10 = *(undefined4 *)(unaff_EBP + 8);
        uStack_14 = 0x471e0c;
        FUN_004714b2();
        if (DAT_009784ec == unaff_ESI) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(DAT_009784ec + -4);
        }
        iVar2 = iVar2 + -1;
        if (iVar2 < unaff_ESI) goto LAB_00471dd2;
        iVar7 = iVar2 * 0x14;
        iVar4 = DAT_009784ec;
        goto LAB_00471e2a;
      }
      *(int *)(unaff_EBP + -0x24) = unaff_ESI;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_c = 0x471baa;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uStack_c = unaff_EBP + -0x24;
      iStack_10 = 0x471bbd;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x34) != unaff_ESI) {
        FUN_00403384();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191();
      uStack_c = unaff_EBP + -0x84;
      iStack_10 = unaff_EBP + -0x94;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_14 = 0x471c0d;
      uVar1 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_14;
      FUN_004033a1(uVar1);
      iVar2 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00405a1d(iVar2);
      FUN_00402660();
      FUN_00404a02(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_c = 0x471c3f;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      *(int *)(unaff_EBP + -0x10) = unaff_ESI;
    } while (iVar2 == unaff_ESI);
  } while( true );
LAB_00471e2a:
  do {
    uVar8 = *(uint *)(iVar7 + 0xc + iVar4);
    while (uVar8 != 0) {
      iVar4 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
      uVar8 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      uStack_c = 0x471e5d;
      iVar5 = FUN_00471450();
      iVar4 = DAT_009784ec;
      if (iVar5 != 0) {
        iVar2 = (*DAT_0097b704)();
        if ((uint)(iVar2 - _DAT_009784f8) < 10000) goto LAB_00471dd2;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0x15;
        uStack_c = 0x471eaf;
        FUN_00679d86();
        uStack_c = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_10 = 0x471ec0;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_00402676();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        uStack_c = 0x471eea;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        uStack_c = 0x471f0a;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        uStack_c = unaff_EBP + -0x54;
        iStack_10 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        uStack_14 = 0x471f2c;
        uVar1 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_14;
        FUN_004033a1(uVar1);
        iVar2 = unaff_EBP + -100;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_00405a1d(iVar2);
        FUN_00402660();
        FUN_00404a02(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uStack_c = 0x471f5e;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x1c) = iVar2;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        piVar6 = (int *)0x0;
        if (*(int *)(unaff_EBP + 8) == 0) {
LAB_0047209f:
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 8))();
          }
          uVar1 = 0;
        }
        else {
          iVar2 = FUN_0040cf4d();
          if (iVar2 == 0) {
            piVar6 = *(int **)(unaff_EBP + 8);
            goto LAB_0047209f;
          }
          FUN_0087a1b0();
          FUN_0040263d();
          FUN_0040cf4d();
          _rand();
          uStack_c = 0x472010;
          FUN_00412335();
          *(undefined1 **)(unaff_EBP + -0x28) = &stack0xfffffffc;
          uStack_c = 0x47201c;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          uStack_c = 0x47202c;
          FUN_0040263d();
          uStack_c = 0x472033;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          uStack_c = 0x472052;
          FUN_00454081();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            FUN_00878dfb();
          }
          _DAT_009784f8 = (*DAT_0097b704)();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          uVar1 = 1;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        goto LAB_00471dd4;
      }
    }
    iVar2 = iVar2 + -1;
    iVar7 = iVar7 + -0x14;
  } while (-1 < iVar2);
LAB_00471dd2:
  uVar1 = 0;
LAB_00471dd4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


