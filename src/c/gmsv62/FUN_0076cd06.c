/* FUN_0076cd06 - 0x0076cd06 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076cd06(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int extraout_ECX;
  char *pcVar6;
  uint uVar7;
  int unaff_EBP;
  int iVar8;
  int *piVar9;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_007825fd();
  FUN_007825fd();
  FUN_007825fd();
  iVar8 = DAT_00978368;
  iVar1 = FUN_00429303();
  if (iVar1 != 0) {
    FUN_00429303();
    uVar2 = FUN_004f162d();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    if (*(int *)(iVar8 + 0x2b40) == 0) {
      *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x77c) = 0;
      *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x780) = 2;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piVar9 = (int *)(iVar8 + 0x2b44);
      do {
        if (*piVar9 != 0) {
          *(undefined4 *)(unaff_EBP + -0x68) = 0;
          *(undefined4 *)(unaff_EBP + -0x60) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_0085c53b(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x6c,unaff_EBP + -0x68,
                       unaff_EBP + -100,unaff_EBP + -0x60,unaff_EBP + -0x5c,unaff_EBP + -0x58,
                       unaff_EBP + -0x54);
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          iVar8 = unaff_EBP + -0x6c;
          FUN_0078263c(0xffffffff);
          FUN_0076d1a5(iVar8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0076d16f();
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        piVar9 = piVar9 + 1;
      } while (*(int *)(unaff_EBP + -0x10) < 6);
      *(undefined4 *)(unaff_EBP + -0xb8) = 0;
      *(undefined4 *)(unaff_EBP + -0xb0) = 0;
      iVar8 = *(int *)(extraout_ECX + 0x28);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iVar1 = 0;
      if (iVar8 != 0) {
        iVar1 = *(int *)(iVar8 + -4);
      }
      *(int *)(unaff_EBP + -0x14) = iVar1;
      if (iVar1 != 1 && -1 < iVar1 + -1) {
        iVar8 = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        do {
          if (*(int *)(unaff_EBP + -0x10) < iVar1) {
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
            iVar1 = iVar8;
            do {
              pcVar6 = *(char **)(iVar1 + 0x54 + *(int *)(extraout_ECX + 0x28));
              if (pcVar6 == (char *)0x0) {
                pcVar6 = DAT_00980dfc;
              }
              pcVar4 = *(char **)(iVar8 + 4 + *(int *)(extraout_ECX + 0x28));
              if (pcVar4 == (char *)0x0) {
                pcVar4 = DAT_00980dfc;
              }
              iVar3 = _strcmp(pcVar4,pcVar6);
              if (0 < iVar3) {
                FUN_0076d1a5(iVar8 + *(int *)(extraout_ECX + 0x28));
                FUN_0076d1a5(iVar1 + 0x50 + *(int *)(extraout_ECX + 0x28));
                FUN_0076d1a5(unaff_EBP + -0xbc);
              }
              piVar9 = (int *)(unaff_EBP + -0x18);
              *piVar9 = *piVar9 + -1;
              iVar1 = iVar1 + 0x50;
            } while (*piVar9 != 0);
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          iVar1 = *(int *)(unaff_EBP + -0x14);
          iVar8 = iVar8 + 0x50;
        } while (*(int *)(unaff_EBP + -0x10) + -1 < iVar1 + -1);
      }
      iVar8 = 0;
      if (*(int *)(extraout_ECX + 0x30) != 0) {
        iVar8 = *(int *)(*(int *)(extraout_ECX + 0x30) + -4);
      }
      *(int *)(unaff_EBP + -0x14) = iVar8;
      if (iVar8 != 1 && -1 < iVar8 + -1) {
        iVar1 = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        do {
          if (*(int *)(unaff_EBP + -0x10) < iVar8) {
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
            iVar8 = iVar1;
            do {
              pcVar6 = *(char **)(iVar8 + 0x54 + *(int *)(extraout_ECX + 0x30));
              if (pcVar6 == (char *)0x0) {
                pcVar6 = DAT_00980dfc;
              }
              pcVar4 = *(char **)(iVar1 + 4 + *(int *)(extraout_ECX + 0x30));
              if (pcVar4 == (char *)0x0) {
                pcVar4 = DAT_00980dfc;
              }
              iVar3 = _strcmp(pcVar4,pcVar6);
              if (0 < iVar3) {
                FUN_0076d1a5(iVar1 + *(int *)(extraout_ECX + 0x30));
                FUN_0076d1a5(iVar8 + 0x50 + *(int *)(extraout_ECX + 0x30));
                FUN_0076d1a5(unaff_EBP + -0xbc);
              }
              piVar9 = (int *)(unaff_EBP + -0x18);
              *piVar9 = *piVar9 + -1;
              iVar8 = iVar8 + 0x50;
            } while (*piVar9 != 0);
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          iVar8 = *(int *)(unaff_EBP + -0x14);
          iVar1 = iVar1 + 0x50;
        } while (*(int *)(unaff_EBP + -0x10) + -1 < iVar8 + -1);
      }
      iVar8 = 0;
      if (*(int *)(extraout_ECX + 0x2c) != 0) {
        iVar8 = *(int *)(*(int *)(extraout_ECX + 0x2c) + -4);
      }
      *(int *)(unaff_EBP + -0x14) = iVar8;
      iVar1 = extraout_ECX;
      if (0 < iVar8 + -1) {
        iVar1 = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        do {
          if (*(int *)(unaff_EBP + -0x10) < iVar8) {
            iVar3 = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
            iVar8 = iVar1;
            do {
              iVar8 = iVar8 + 0x50;
              iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2c);
              pcVar6 = *(char **)(iVar5 + 4 + iVar8);
              if (pcVar6 == (char *)0x0) {
                pcVar6 = DAT_00980dfc;
              }
              pcVar4 = *(char **)(iVar5 + 4 + iVar1);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = DAT_00980dfc;
              }
              iVar5 = _strcmp(pcVar4,pcVar6);
              if (0 < iVar5) {
                FUN_0076d1a5(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2c) + iVar1);
                FUN_0076d1a5(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2c) + iVar8);
                FUN_0076d1a5(unaff_EBP + -0xbc);
              }
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          iVar8 = *(int *)(unaff_EBP + -0x14);
          iVar1 = iVar1 + 0x50;
        } while (*(int *)(unaff_EBP + -0x10) + -1 < iVar8 + -1);
        iVar1 = *(int *)(unaff_EBP + -0x1c);
      }
      if (*(int *)(iVar1 + 0x28) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar1 + 0x28) + -4);
      }
      if (*(int *)(iVar1 + 0x2c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x2c) + -4);
      }
      iVar5 = 0;
      if (*(int *)(iVar1 + 0x30) != 0) {
        iVar5 = *(int *)(*(int *)(iVar1 + 0x30) + -4);
      }
      *(int *)(*(int *)(iVar1 + 0x24) + 0x77c) = iVar5 + iVar3 + iVar8;
      iVar8 = *(int *)(iVar1 + 0x28);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar8 + -4);
      }
      if (*(int *)(iVar1 + 0x30) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x30) + -4);
      }
      if (*(int *)(iVar1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar1 + 0x2c) + -4);
      }
      *(uint *)(*(int *)(iVar1 + 0x24) + 0x780) =
           ((2 - (uint)(iVar5 != 0)) - (uint)(iVar3 + iVar8 != 0)) +
           *(int *)(*(int *)(iVar1 + 0x24) + 0x77c);
      iVar8 = 0;
      for (uVar7 = 0;
          (iVar3 = *(int *)(iVar1 + 0x28), iVar3 != 0 && (uVar7 < *(uint *)(iVar3 + -4)));
          uVar7 = uVar7 + 1) {
        if (*(int *)(iVar8 + iVar3) == *(int *)(*(int *)(iVar1 + 0x24) + 0x818)) goto LAB_0076d13f;
        iVar8 = iVar8 + 0x50;
      }
      iVar8 = 0;
      for (uVar7 = 0;
          (iVar3 = *(int *)(iVar1 + 0x2c), iVar3 != 0 && (uVar7 < *(uint *)(iVar3 + -4)));
          uVar7 = uVar7 + 1) {
        if (*(int *)(iVar3 + iVar8) == *(int *)(*(int *)(iVar1 + 0x24) + 0x818)) goto LAB_0076d13f;
        iVar8 = iVar8 + 0x50;
      }
      iVar8 = 0;
      for (uVar7 = 0;
          (iVar3 = *(int *)(iVar1 + 0x30), iVar3 != 0 && (uVar7 < *(uint *)(iVar3 + -4)));
          uVar7 = uVar7 + 1) {
        if (*(int *)(iVar3 + iVar8) == *(int *)(*(int *)(iVar1 + 0x24) + 0x818)) goto LAB_0076d13f;
        iVar8 = iVar8 + 0x50;
      }
      *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x818) = 0;
LAB_0076d13f:
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


