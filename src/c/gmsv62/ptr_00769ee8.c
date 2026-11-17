/* ptr_00769ee8 - 0x00769ee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00769ee8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar9;
  int unaff_EDI;
  
  do {
    do {
      pcVar7 = *(char **)(unaff_EDI + 4 + *(int *)(unaff_EBX + 0x40));
      if (pcVar7 == (char *)0x0) {
        pcVar7 = DAT_00980dfc;
      }
      pcVar4 = *(char **)(unaff_ESI + 4 + *(int *)(unaff_EBX + 0x40));
      if (pcVar4 == (char *)0x0) {
        pcVar4 = DAT_00980dfc;
      }
      iVar2 = _strcmp(pcVar4,pcVar7);
      if (0 < iVar2) {
        FUN_0076a211(unaff_ESI + *(int *)(unaff_EBX + 0x40));
        FUN_0076a211(unaff_EDI + *(int *)(unaff_EBX + 0x40));
        FUN_0076a211(unaff_EBP + -0xd8);
      }
      unaff_EDI = unaff_EDI + 0x5c;
      piVar1 = (int *)(unaff_EBP + -0x1c);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    do {
      iVar2 = unaff_ESI;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      unaff_ESI = iVar2 + 0x5c;
      if (*(int *)(unaff_EBP + -0x14) + -1 <= *(int *)(unaff_EBP + -0x10) + -1) {
        iVar2 = 0;
        if (*(int *)(unaff_EBX + 0x44) != 0) {
          iVar2 = *(int *)(*(int *)(unaff_EBX + 0x44) + -4);
        }
        *(int *)(unaff_EBP + -0x14) = iVar2;
        if (iVar2 != 1 && -1 < iVar2 + -1) {
          iVar2 = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 1;
          do {
            if (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x14)) {
              *(int *)(unaff_EBP + -0x1c) =
                   *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
              iVar9 = iVar2;
              do {
                pcVar7 = *(char **)(iVar9 + 0x60 + *(int *)(unaff_EBX + 0x44));
                if (pcVar7 == (char *)0x0) {
                  pcVar7 = DAT_00980dfc;
                }
                pcVar4 = *(char **)(iVar2 + 4 + *(int *)(unaff_EBX + 0x44));
                if (pcVar4 == (char *)0x0) {
                  pcVar4 = DAT_00980dfc;
                }
                iVar3 = _strcmp(pcVar4,pcVar7);
                if (0 < iVar3) {
                  FUN_0076a211(iVar2 + *(int *)(unaff_EBX + 0x44));
                  FUN_0076a211(iVar9 + 0x5c + *(int *)(unaff_EBX + 0x44));
                  FUN_0076a211(unaff_EBP + -0xd8);
                }
                piVar1 = (int *)(unaff_EBP + -0x1c);
                *piVar1 = *piVar1 + -1;
                iVar9 = iVar9 + 0x5c;
              } while (*piVar1 != 0);
            }
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            iVar2 = iVar2 + 0x5c;
          } while (*(int *)(unaff_EBP + -0x10) + -1 < *(int *)(unaff_EBP + -0x14) + -1);
        }
        iVar2 = 0;
        if (*(int *)(unaff_EBX + 0x48) != 0) {
          iVar2 = *(int *)(*(int *)(unaff_EBX + 0x48) + -4);
        }
        *(int *)(unaff_EBP + -0x14) = iVar2;
        if (0 < iVar2 + -1) {
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 1;
          do {
            if (*(int *)(unaff_EBP + -0x10) < iVar2) {
              iVar3 = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
              iVar2 = iVar9;
              do {
                iVar5 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x48);
                pcVar7 = *(char **)(iVar2 + 0x60 + iVar5);
                if (pcVar7 == (char *)0x0) {
                  pcVar7 = DAT_00980dfc;
                }
                pcVar4 = *(char **)(iVar5 + 4 + iVar9);
                if (pcVar4 == (char *)0x0) {
                  pcVar4 = DAT_00980dfc;
                }
                iVar5 = _strcmp(pcVar4,pcVar7);
                if (0 < iVar5) {
                  FUN_0076a211(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x48) + iVar9);
                  FUN_0076a211(iVar2 + 0x5c + *(int *)(*(int *)(unaff_EBP + -0x18) + 0x48));
                  FUN_0076a211(unaff_EBP + -0xd8);
                }
                iVar3 = iVar3 + -1;
                iVar2 = iVar2 + 0x5c;
              } while (iVar3 != 0);
            }
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            iVar2 = *(int *)(unaff_EBP + -0x14);
            iVar9 = iVar9 + 0x5c;
          } while (*(int *)(unaff_EBP + -0x10) + -1 < iVar2 + -1);
          unaff_EBX = *(int *)(unaff_EBP + -0x18);
        }
        if (*(int *)(unaff_EBX + 0x40) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(unaff_EBX + 0x40) + -4);
        }
        if (*(int *)(unaff_EBX + 0x44) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(*(int *)(unaff_EBX + 0x44) + -4);
        }
        iVar3 = 0;
        if (*(int *)(unaff_EBX + 0x48) != 0) {
          iVar3 = *(int *)(*(int *)(unaff_EBX + 0x48) + -4);
        }
        *(int *)(*(int *)(unaff_EBX + 0x3c) + 0x77c) = iVar3 + iVar9 + iVar2;
        iVar2 = 0;
        if (*(int *)(unaff_EBX + 0x44) != 0) {
          iVar2 = *(int *)(*(int *)(unaff_EBX + 0x44) + -4);
        }
        iVar9 = 0;
        if (*(int *)(unaff_EBX + 0x40) != 0) {
          iVar9 = *(int *)(*(int *)(unaff_EBX + 0x40) + -4);
        }
        if (iVar9 + iVar2 == 0) {
          *(undefined4 *)(*(int *)(unaff_EBX + 0x3c) + 0x780) = 1;
        }
        else {
          if (*(int *)(unaff_EBX + 0x44) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(*(int *)(unaff_EBX + 0x44) + -4);
          }
          if ((*(int *)(unaff_EBX + 0x40) == 0) ||
             (uVar6 = *(uint *)(*(int *)(unaff_EBX + 0x40) + -4), uVar6 <= uVar8)) {
            uVar6 = uVar8;
          }
          *(uint *)(*(int *)(unaff_EBX + 0x3c) + 0x780) = uVar6;
        }
        iVar2 = *(int *)(unaff_EBX + 0x48);
        if ((iVar2 == 0) || (*(int *)(iVar2 + -4) == 0)) {
          piVar1 = (int *)(*(int *)(unaff_EBX + 0x3c) + 0x780);
          *piVar1 = *piVar1 + 1;
        }
        else {
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + -4);
          }
          piVar1 = (int *)(*(int *)(unaff_EBX + 0x3c) + 0x780);
          *piVar1 = *piVar1 + (iVar2 + 1U >> 1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
    } while (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + -0x10));
    unaff_EDI = iVar2 + 0xb8;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10);
  } while( true );
}


