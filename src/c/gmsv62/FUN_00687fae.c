/* FUN_00687fae - 0x00687fae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00687fae(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined *puStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  piVar2 = *(int **)(unaff_EBP + 0x10);
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    piStack_5c = (int *)(iVar6 + -0xc);
    puStack_60 = (undefined *)0x687fd4;
    FUN_00434e38();
    *piVar2 = 0;
  }
  if ((*(int *)(extraout_ECX + 4) != 0) && (*(int *)(*(int *)(extraout_ECX + 4) + -4) != 0)) {
    uVar10 = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while( true ) {
      iVar6 = *(int *)(extraout_ECX + 4);
      if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar10)) goto LAB_00688037;
      piVar2 = (int *)(iVar6 + *(int *)(unaff_EBP + -0x18));
      if ((*piVar2 <= *(int *)(unaff_EBP + 0xc)) &&
         ((*(int *)(unaff_EBP + 0xc) <= piVar2[1] &&
          ((piVar2[3] & 1 << ((char)*(undefined4 *)(unaff_EBP + 8) - 1U & 0x1f)) != 0)))) break;
      uVar10 = uVar10 + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x18;
    }
    if (-1 < (int)uVar10) {
      iVar11 = uVar10 * 0x18;
      iVar6 = *(int *)(extraout_ECX + 4);
      piStack_5c = (int *)0x68802f;
      iVar3 = (*DAT_0097b704)();
      if (*(uint *)(iVar11 + iVar6 + 8) <= (uint)(iVar3 - *(int *)(extraout_ECX + 8))) {
        piStack_5c = (int *)0x688044;
        uVar4 = (*DAT_0097b704)();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(extraout_ECX + 8) = uVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar6 = *(int *)(extraout_ECX + 4);
        piStack_5c = (int *)0x688059;
        iVar3 = _rand();
        if (iVar3 % 100 < *(int *)(iVar11 + iVar6 + 0x10)) {
          piStack_5c = (int *)0x71b;
          puStack_60 = (undefined *)(unaff_EBP + 0xc);
          iStack_64 = 0x688077;
          piStack_5c = (int *)FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          puStack_60 = (undefined *)0x688084;
          FUN_00419192();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          piStack_5c = (int *)0x71c;
          puStack_60 = (undefined *)(unaff_EBP + 0xc);
          iStack_64 = 0x6880a0;
          puVar5 = (undefined4 *)FUN_00679d86();
          piStack_5c = *(int **)(iVar11 + 0x14 + *(int *)(extraout_ECX + 4));
          puStack_60 = (undefined *)*puVar5;
          iStack_64 = unaff_EBP + -0x14;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_68 = 0x6880b7;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        piStack_5c = (int *)0x6880c6;
        FUN_00402676();
        piStack_5c = &DAT_00980690;
        puStack_60 = (undefined *)0x6880d4;
        FUN_00403191();
        piStack_5c = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_60 = (undefined *)0x6880e1;
        FUN_00403191();
        piStack_5c = (int *)0x0;
        puStack_60 = (undefined *)0x0;
        iStack_64 = unaff_EBP + -0x38;
        iStack_68 = unaff_EBP + -0x28;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_6c = 0x6880f9;
        uVar4 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + 8) = &uStack_6c;
        FUN_004033a1(uVar4);
        iVar6 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00405a1d(iVar6);
        FUN_00402660();
        FUN_00404a02(iVar6);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_64 = 0x68812b;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + 0xc) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar6 != 0) {
          piStack_5c = (int *)(unaff_EBP + 0xc);
          puStack_60 = (undefined *)0x688141;
          piStack_5c = (int *)FUN_00404b30();
          if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
            puStack_60 = (undefined *)0x688152;
            FUN_00878dfb();
          }
        }
        piStack_5c = (int *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_60 = (undefined *)0x68815f;
        piStack_5c = (int *)FUN_00402bc3();
        if ((int)piStack_5c < 0) {
          puStack_60 = (undefined *)0x68816a;
          FUN_00878dfb();
        }
        piStack_5c = (int *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_60 = (undefined *)0x688177;
        piStack_5c = (int *)FUN_00402bc3();
        if ((int)piStack_5c < 0) {
          puStack_60 = (undefined *)0x688182;
          FUN_00878dfb();
        }
        piStack_5c = (int *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_60 = (undefined *)0x68818f;
        piStack_5c = (int *)FUN_00402bc3();
        if ((int)piStack_5c < 0) {
          puStack_60 = (undefined *)0x68819a;
          FUN_00878dfb();
        }
        piStack_5c = (int *)0x0;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
LAB_0068826a:
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_5c != (int *)0x0) {
            puStack_60 = (undefined *)0x688278;
            (**(code **)(*piStack_5c + 8))();
          }
          bVar9 = false;
        }
        else {
          piStack_5c = (int *)0x6881aa;
          iVar6 = FUN_0040cf4d();
          if (iVar6 == 0) {
            piStack_5c = *(int **)(unaff_EBP + -0x10);
            goto LAB_0068826a;
          }
          piStack_5c = (int *)0x6881ba;
          FUN_0087a1b0();
          puStack_60 = (undefined *)0x6881c5;
          piStack_5c = (int *)&stack0xffffffa8;
          FUN_0040263d();
          puStack_60 = (undefined *)0x6881cc;
          uVar10 = FUN_0040cf4d();
          puStack_60 = (undefined *)0x6881d3;
          uVar7 = _rand();
          puStack_60 = (undefined *)(uVar7 % uVar10);
          iStack_64 = 0x6881dd;
          puStack_60 = (undefined *)FUN_00412335();
          *(int ***)(unaff_EBP + 8) = &piStack_5c;
          iStack_64 = 0x6881e9;
          FUN_004033a1();
          puStack_60 = (undefined *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_64 = 0x6881f9;
          FUN_0040263d();
          iStack_64 = 0x688200;
          psVar8 = (short *)FUN_004048a4();
          sVar1 = *psVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (sVar1 == 8) {
            puStack_60 = *(undefined **)(psVar8 + 4);
          }
          else {
            puStack_60 = &DAT_0097812c;
          }
          puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
          piStack_5c = (int *)0xffffffff;
          iStack_64 = 0x688221;
          FUN_00454081();
          piStack_5c = (int *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          puStack_60 = (undefined *)0x68822e;
          piStack_5c = (int *)FUN_00402bc3();
          if ((int)piStack_5c < 0) {
            puStack_60 = (undefined *)0x688239;
            FUN_00878dfb();
          }
          if (((char *)*puVar5 == (char *)0x0) || (*(char *)*puVar5 == '\0')) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          bVar9 = !bVar9;
          piStack_5c = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_5c != (int *)0x0) {
            puStack_60 = (undefined *)0x688265;
            (**(code **)(*piStack_5c + 8))();
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_5c = (int *)0x688286;
        FUN_00402676();
        goto LAB_00688288;
      }
    }
  }
LAB_00688037:
  bVar9 = false;
LAB_00688288:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar9;
}


