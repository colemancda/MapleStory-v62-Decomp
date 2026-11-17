/* FUN_006fe99b - 0x006fe99b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fe99b(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  size_t sVar7;
  int *piVar8;
  uint uVar9;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar8 = *(int **)(unaff_EBP + 0xc);
  iVar3 = *piVar8;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar3 != 0) {
    FUN_00434e38(iVar3 + -0xc);
    *piVar8 = 0;
  }
  piVar1 = *(int **)(unaff_EBP + 0x10);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    FUN_00434e38(iVar3 + -0xc);
    *piVar1 = 0;
  }
  iVar3 = FUN_006fc790(*(undefined4 *)(unaff_EBP + 8));
  if (iVar3 == 0) {
    uVar4 = FUN_00679d22(unaff_EBP + 0x10,0xc57);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00414f8b(uVar4);
    iVar3 = *(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc58);
      uVar4 = *(undefined4 *)(iVar3 + 0x1c);
      uVar2 = *puVar5;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00434e21(piVar8,uVar2,uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
      }
    }
    if (*(int *)(iVar3 + 0x20) != 0) {
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc59);
      uVar4 = *(undefined4 *)(iVar3 + 0x20);
      uVar2 = *puVar5;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(piVar8,uVar2,uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
      }
    }
    piVar8 = (int *)(iVar3 + 0x48);
    if ((*(int *)(iVar3 + 0x48) != 0) && (*(int *)(*(int *)(iVar3 + 0x48) + -4) != 0)) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      for (uVar9 = 0; (iVar3 = *piVar8, iVar3 != 0 && (uVar9 < *(uint *)(iVar3 + -4)));
          uVar9 = uVar9 + 1) {
        piVar1 = (int *)(iVar3 + uVar9 * 4);
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + 8) = 1;
        }
        iVar3 = iVar3 / 100;
        if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || ((iVar3 == 4 || (iVar3 == 5)))) {
          piVar6 = (int *)FUN_0045f1e3(0xffffffff);
          *piVar6 = *piVar1;
        }
      }
      if (((*piVar8 == 0) || (*(int *)(*piVar8 + -4) != 0x29)) || (*(int *)(unaff_EBP + 8) != 0)) {
        FUN_007054ba(piVar8);
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar3 = FUN_0070566b(unaff_EBP + -0x20);
        if (iVar3 == 0) {
          if (*(int *)(unaff_EBP + 8) == 0) {
            puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
          }
          else {
            uVar4 = FUN_00679d22(unaff_EBP + 8,0x14);
            puVar5 = *(undefined4 **)(unaff_EBP + 0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00414f8b(uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00414ebb();
          }
          iVar3 = *(int *)(unaff_EBP + -0x1c);
          if ((iVar3 == 0) || (*(int *)(iVar3 + -4) != 10)) {
            for (uVar9 = 0; (iVar3 != 0 && (uVar9 < *(uint *)(iVar3 + -4))); uVar9 = uVar9 + 1) {
              if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
                sVar7 = _strlen(&DAT_00965738);
                FUN_0045efbb(&DAT_00965738,sVar7);
                iVar3 = *(int *)(unaff_EBP + -0x1c);
              }
              uVar4 = FUN_00482a39(*(undefined4 *)(iVar3 + uVar9 * 4));
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
              FUN_00414edd(uVar4,0xffffffff);
              iVar3 = *(int *)(unaff_EBP + 0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar3 + -4);
              }
              FUN_0045efbb(iVar3,uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              FUN_00414ebb();
              iVar3 = *(int *)(unaff_EBP + -0x1c);
            }
          }
          else {
            if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
              sVar7 = _strlen(&DAT_00965738);
              FUN_0045efbb(&DAT_00965738,sVar7);
            }
            piVar8 = (int *)FUN_00679d22(unaff_EBP + 0x10,0x15);
            iVar3 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + -4);
            }
            FUN_0045efbb(iVar3,uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00414ebb();
          }
          iVar3 = *(int *)(unaff_EBP + -0x14);
          if ((iVar3 == 0) || (*(int *)(iVar3 + -4) != 10)) {
            for (uVar9 = 0; (iVar3 != 0 && (uVar9 < *(uint *)(iVar3 + -4))); uVar9 = uVar9 + 1) {
              if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
                sVar7 = _strlen(&DAT_00965738);
                FUN_0045efbb(&DAT_00965738,sVar7);
                iVar3 = *(int *)(unaff_EBP + -0x14);
              }
              uVar4 = FUN_00482a39(*(undefined4 *)(iVar3 + uVar9 * 4));
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
              FUN_00414edd(uVar4,0xffffffff);
              iVar3 = *(int *)(unaff_EBP + 0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar3 + -4);
              }
              FUN_0045efbb(iVar3,uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              FUN_00414ebb();
              iVar3 = *(int *)(unaff_EBP + -0x14);
            }
          }
          else {
            if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
              sVar7 = _strlen(&DAT_00965738);
              FUN_0045efbb(&DAT_00965738,sVar7);
            }
            piVar8 = (int *)FUN_00679d22(unaff_EBP + 0x10,0x16);
            iVar3 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + -4);
            }
            FUN_0045efbb(iVar3,uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00414ebb();
          }
          iVar3 = *(int *)(unaff_EBP + -0x10);
          if ((iVar3 == 0) || (*(int *)(iVar3 + -4) != 7)) {
            for (uVar9 = 0; (iVar3 != 0 && (uVar9 < *(uint *)(iVar3 + -4))); uVar9 = uVar9 + 1) {
              if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
                sVar7 = _strlen(&DAT_00965738);
                FUN_0045efbb(&DAT_00965738,sVar7);
                iVar3 = *(int *)(unaff_EBP + -0x10);
              }
              uVar4 = FUN_00482a39(*(undefined4 *)(iVar3 + uVar9 * 4));
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
              FUN_00414edd(uVar4,0xffffffff);
              iVar3 = *(int *)(unaff_EBP + 0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x12;
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar3 + -4);
              }
              FUN_0045efbb(iVar3,uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              FUN_00414ebb();
              iVar3 = *(int *)(unaff_EBP + -0x10);
            }
          }
          else {
            if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
              sVar7 = _strlen(&DAT_00965738);
              FUN_0045efbb(&DAT_00965738,sVar7);
            }
            piVar8 = (int *)FUN_00679d22(unaff_EBP + 0x10,0x17);
            iVar3 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + -4);
            }
            FUN_0045efbb(iVar3,uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00414ebb();
          }
          iVar3 = *(int *)(unaff_EBP + -0x18);
          if ((iVar3 == 0) || (*(int *)(iVar3 + -4) != 7)) {
            for (uVar9 = 0; (iVar3 != 0 && (uVar9 < *(uint *)(iVar3 + -4))); uVar9 = uVar9 + 1) {
              if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
                sVar7 = _strlen(&DAT_00965738);
                FUN_0045efbb(&DAT_00965738,sVar7);
                iVar3 = *(int *)(unaff_EBP + -0x18);
              }
              uVar4 = FUN_00482a39(*(undefined4 *)(iVar3 + uVar9 * 4));
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
              FUN_00414edd(uVar4,0xffffffff);
              iVar3 = *(int *)(unaff_EBP + 0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x14;
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar3 + -4);
              }
              FUN_0045efbb(iVar3,uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              FUN_00414ebb();
              iVar3 = *(int *)(unaff_EBP + -0x18);
            }
          }
          else {
            if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
              sVar7 = _strlen(&DAT_00965738);
              FUN_0045efbb(&DAT_00965738,sVar7);
            }
            piVar8 = (int *)FUN_00679d22(unaff_EBP + 0x10,0x18);
            iVar3 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + -4);
            }
            FUN_0045efbb(iVar3,uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00414ebb();
          }
          iVar3 = *(int *)(unaff_EBP + 0xc);
          if ((iVar3 == 0) || (*(int *)(iVar3 + -4) != 7)) {
            for (uVar9 = 0; (iVar3 != 0 && (uVar9 < *(uint *)(iVar3 + -4))); uVar9 = uVar9 + 1) {
              if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
                sVar7 = _strlen(&DAT_00965738);
                FUN_0045efbb(&DAT_00965738,sVar7);
                iVar3 = *(int *)(unaff_EBP + 0xc);
              }
              uVar4 = FUN_00482a39(*(undefined4 *)(iVar3 + uVar9 * 4));
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
              FUN_00414edd(uVar4,0xffffffff);
              iVar3 = *(int *)(unaff_EBP + 0x10);
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar3 + -4);
              }
              FUN_0045efbb(iVar3,uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              FUN_00414ebb();
              iVar3 = *(int *)(unaff_EBP + 0xc);
            }
          }
          else {
            if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
              sVar7 = _strlen(&DAT_00965738);
              FUN_0045efbb(&DAT_00965738,sVar7);
            }
            piVar8 = (int *)FUN_00679d22(unaff_EBP + 0x10,0x19);
            iVar3 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar3 + -4);
            }
            FUN_0045efbb(iVar3,uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00414ebb();
          }
          FUN_00679d22(unaff_EBP + -0x24,0x1b);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_004653c5(unaff_EBP + -0x28,&DAT_00964364);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          uVar4 = FUN_0045e02d(unaff_EBP + -0x2c,puVar5);
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_00414f8b(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
        }
        else {
          FUN_00414f8b(unaff_EBP + -0x20);
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_0087a0b8(unaff_EBP + -0xa4,8,0xf,FUN_00705c2c);
      }
      else {
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc5b);
        uVar4 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00434e21(*(undefined4 *)(unaff_EBP + 0x10),uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00445a30();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00445a30();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00445a30();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00445a30();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00445a30();
      goto LAB_006ff0ba;
    }
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xc5a);
    uVar4 = *puVar5;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(*(undefined4 *)(unaff_EBP + 0x10),uVar4);
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (iVar3 != 0) {
    FUN_00434e38(iVar3 + -0xc);
  }
LAB_006ff0ba:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


