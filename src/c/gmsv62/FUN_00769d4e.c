/* FUN_00769d4e - 0x00769d4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00769d4e(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  char *pcVar8;
  uint uVar9;
  int unaff_EBP;
  int *piVar10;
  int iVar11;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_0078253c();
  FUN_0078253c();
  FUN_0078253c();
  iVar11 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(DAT_00978368 + 0x204c);
  iVar2 = FUN_00455c59(unaff_EBP + -0x20);
  iVar2 = *(int *)(iVar2 + 4);
  FUN_0045e4a2();
  uVar3 = *(undefined4 *)(iVar2 + 0x473);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(extraout_ECX + 0x4c) = uVar3;
  iVar2 = FUN_0076a1a9();
  if (0 < iVar2) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    do {
      piVar10 = (int *)(*(int *)(unaff_EBP + -0x1c) + **(int **)(iVar11 + 0x2c74));
      if (*piVar10 != 0) {
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
        iVar2 = *piVar10;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x7c) = iVar2;
        FUN_00414edd(piVar10 + 1,0xffffffff);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)((int)piVar10 + 0x12);
        *(undefined1 *)(unaff_EBP + -0x24) = *(undefined1 *)((int)piVar10 + 0x11);
        uVar3 = FUN_0076a1c6(*(undefined4 *)(unaff_EBP + -0x14));
        *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
        uVar3 = FUN_0085c909(*(undefined4 *)(unaff_EBP + -0x14),0);
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
        uVar3 = FUN_0085c909(*(undefined4 *)(unaff_EBP + -0x14),1);
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        cVar1 = *(char *)((int)piVar10 + 0x11);
        if ((((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == '\x04')) || (cVar1 == '\x02')) {
          iVar2 = unaff_EBP + -0x7c;
          FUN_00782578(0xffffffff);
          FUN_0076a211(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x78) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x78) + -0xc);
        }
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x16;
      iVar2 = FUN_0076a1a9();
    } while (*(int *)(unaff_EBP + -0x14) < iVar2);
  }
  *(undefined4 *)(unaff_EBP + -0xd4) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar11 = 0;
  if (iVar2 != 0) {
    iVar11 = *(int *)(iVar2 + -4);
  }
  *(int *)(unaff_EBP + -0x14) = iVar11;
  if (iVar11 != 1 && -1 < iVar11 + -1) {
    iVar2 = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    do {
      if (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x14)) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
        iVar11 = iVar2;
        do {
          pcVar8 = *(char **)(iVar11 + 0x60 + *(int *)(extraout_ECX + 0x40));
          if (pcVar8 == (char *)0x0) {
            pcVar8 = DAT_00980dfc;
          }
          pcVar5 = *(char **)(iVar2 + 4 + *(int *)(extraout_ECX + 0x40));
          if (pcVar5 == (char *)0x0) {
            pcVar5 = DAT_00980dfc;
          }
          iVar4 = _strcmp(pcVar5,pcVar8);
          if (0 < iVar4) {
            FUN_0076a211(iVar2 + *(int *)(extraout_ECX + 0x40));
            FUN_0076a211(iVar11 + 0x5c + *(int *)(extraout_ECX + 0x40));
            FUN_0076a211(unaff_EBP + -0xd8);
          }
          piVar10 = (int *)(unaff_EBP + -0x1c);
          *piVar10 = *piVar10 + -1;
          iVar11 = iVar11 + 0x5c;
        } while (*piVar10 != 0);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar2 = iVar2 + 0x5c;
    } while (*(int *)(unaff_EBP + -0x10) + -1 < *(int *)(unaff_EBP + -0x14) + -1);
  }
  iVar2 = 0;
  if (*(int *)(extraout_ECX + 0x44) != 0) {
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x44) + -4);
  }
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (iVar2 != 1 && -1 < iVar2 + -1) {
    iVar2 = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    do {
      if (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x14)) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
        iVar11 = iVar2;
        do {
          pcVar8 = *(char **)(iVar11 + 0x60 + *(int *)(extraout_ECX + 0x44));
          if (pcVar8 == (char *)0x0) {
            pcVar8 = DAT_00980dfc;
          }
          pcVar5 = *(char **)(iVar2 + 4 + *(int *)(extraout_ECX + 0x44));
          if (pcVar5 == (char *)0x0) {
            pcVar5 = DAT_00980dfc;
          }
          iVar4 = _strcmp(pcVar5,pcVar8);
          if (0 < iVar4) {
            FUN_0076a211(iVar2 + *(int *)(extraout_ECX + 0x44));
            FUN_0076a211(iVar11 + 0x5c + *(int *)(extraout_ECX + 0x44));
            FUN_0076a211(unaff_EBP + -0xd8);
          }
          piVar10 = (int *)(unaff_EBP + -0x1c);
          *piVar10 = *piVar10 + -1;
          iVar11 = iVar11 + 0x5c;
        } while (*piVar10 != 0);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar2 = iVar2 + 0x5c;
    } while (*(int *)(unaff_EBP + -0x10) + -1 < *(int *)(unaff_EBP + -0x14) + -1);
  }
  iVar2 = 0;
  if (*(int *)(extraout_ECX + 0x48) != 0) {
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x48) + -4);
  }
  *(int *)(unaff_EBP + -0x14) = iVar2;
  iVar11 = extraout_ECX;
  if (0 < iVar2 + -1) {
    iVar11 = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    do {
      if (*(int *)(unaff_EBP + -0x10) < iVar2) {
        iVar4 = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
        iVar2 = iVar11;
        do {
          iVar6 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x48);
          pcVar8 = *(char **)(iVar2 + 0x60 + iVar6);
          if (pcVar8 == (char *)0x0) {
            pcVar8 = DAT_00980dfc;
          }
          pcVar5 = *(char **)(iVar6 + 4 + iVar11);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = DAT_00980dfc;
          }
          iVar6 = _strcmp(pcVar5,pcVar8);
          if (0 < iVar6) {
            FUN_0076a211(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x48) + iVar11);
            FUN_0076a211(iVar2 + 0x5c + *(int *)(*(int *)(unaff_EBP + -0x18) + 0x48));
            FUN_0076a211(unaff_EBP + -0xd8);
          }
          iVar4 = iVar4 + -1;
          iVar2 = iVar2 + 0x5c;
        } while (iVar4 != 0);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar2 = *(int *)(unaff_EBP + -0x14);
      iVar11 = iVar11 + 0x5c;
    } while (*(int *)(unaff_EBP + -0x10) + -1 < iVar2 + -1);
    iVar11 = *(int *)(unaff_EBP + -0x18);
  }
  if (*(int *)(iVar11 + 0x40) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar11 + 0x40) + -4);
  }
  if (*(int *)(iVar11 + 0x44) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar11 + 0x44) + -4);
  }
  iVar6 = 0;
  if (*(int *)(iVar11 + 0x48) != 0) {
    iVar6 = *(int *)(*(int *)(iVar11 + 0x48) + -4);
  }
  *(int *)(*(int *)(iVar11 + 0x3c) + 0x77c) = iVar6 + iVar4 + iVar2;
  iVar2 = 0;
  if (*(int *)(iVar11 + 0x44) != 0) {
    iVar2 = *(int *)(*(int *)(iVar11 + 0x44) + -4);
  }
  iVar4 = 0;
  if (*(int *)(iVar11 + 0x40) != 0) {
    iVar4 = *(int *)(*(int *)(iVar11 + 0x40) + -4);
  }
  if (iVar4 + iVar2 == 0) {
    *(undefined4 *)(*(int *)(iVar11 + 0x3c) + 0x780) = 1;
  }
  else {
    if (*(int *)(iVar11 + 0x44) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(*(int *)(iVar11 + 0x44) + -4);
    }
    if ((*(int *)(iVar11 + 0x40) == 0) ||
       (uVar7 = *(uint *)(*(int *)(iVar11 + 0x40) + -4), uVar7 <= uVar9)) {
      uVar7 = uVar9;
    }
    *(uint *)(*(int *)(iVar11 + 0x3c) + 0x780) = uVar7;
  }
  iVar2 = *(int *)(iVar11 + 0x48);
  if ((iVar2 == 0) || (*(int *)(iVar2 + -4) == 0)) {
    piVar10 = (int *)(*(int *)(iVar11 + 0x3c) + 0x780);
    *piVar10 = *piVar10 + 1;
  }
  else {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    piVar10 = (int *)(*(int *)(iVar11 + 0x3c) + 0x780);
    *piVar10 = *piVar10 + (iVar2 + 1U >> 1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


