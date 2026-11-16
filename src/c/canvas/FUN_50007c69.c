/* FUN_50007c69 - 0x50007c69 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50007c69(void)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  int unaff_EBP;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  
  FUN_50012d80();
  FUN_50012e10();
  puVar9 = *(ushort **)(unaff_EBP + 0x18);
  puVar8 = *(uint **)(unaff_EBP + 0x24);
  *(ushort **)(unaff_EBP + -0x10) = puVar9;
  *(uint **)(unaff_EBP + 0x24) = puVar8;
  if ((*(int *)(unaff_EBP + 0x14) == 0) || (*(int *)(unaff_EBP + 0x10) == -2)) {
    if (*(int *)(unaff_EBP + 0x10) == -1) {
      if (0 < *(int *)(unaff_EBP + 0xc)) {
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0xc);
        do {
          if (0 < *(int *)(unaff_EBP + 8)) {
            iVar11 = *(int *)(unaff_EBP + 0x20);
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8);
            do {
              uVar5 = *puVar8;
              puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0xc));
              *puVar9 = (ushort)(uVar5 >> 0x10) & 0xf000 | (ushort)(uVar5 >> 0xc) & 0xf00 |
                        (ushort)(uVar5 >> 8) & 0xf0 | (ushort)(uVar5 >> 4) & 0xf;
              puVar9 = puVar9 + iVar11;
              piVar1 = (int *)(unaff_EBP + 0x10);
              *piVar1 = *piVar1 + -1;
            } while (*piVar1 != 0);
            puVar8 = *(uint **)(unaff_EBP + 0x24);
            puVar9 = *(ushort **)(unaff_EBP + -0x10);
          }
          puVar9 = (ushort *)((int)puVar9 + *(int *)(unaff_EBP + 0x1c));
          puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0x28));
          piVar1 = (int *)(unaff_EBP + 0x14);
          *piVar1 = *piVar1 + -1;
          *(ushort **)(unaff_EBP + -0x10) = puVar9;
          *(uint **)(unaff_EBP + 0x24) = puVar8;
        } while (*piVar1 != 0);
      }
    }
    else if (*(int *)(unaff_EBP + 0x10) == 0xff) {
      if (0 < *(int *)(unaff_EBP + 0xc)) {
        *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0xc);
        do {
          *(uint **)(unaff_EBP + 0x14) = puVar8;
          if (0 < *(int *)(unaff_EBP + 8)) {
            *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x20) * 2;
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8);
            puVar10 = puVar9;
            do {
              uVar5 = FUN_50008160((uint)*puVar10,**(uint **)(unaff_EBP + 0x14));
              *puVar10 = (ushort)uVar5;
              puVar10 = (ushort *)((int)puVar10 + *(int *)(unaff_EBP + 0x18));
              *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + 0xc);
              piVar1 = (int *)(unaff_EBP + 0x10);
              *piVar1 = *piVar1 + -1;
            } while (*piVar1 != 0);
          }
          puVar9 = (ushort *)((int)puVar9 + *(int *)(unaff_EBP + 0x1c));
          puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0x28));
          piVar1 = (int *)(unaff_EBP + 0x24);
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
      }
    }
    else {
      iVar11 = *(int *)(unaff_EBP + 0xc);
      if (*(int *)(unaff_EBP + 0x10) == -2) {
        if (0 < iVar11) {
          *(int *)(unaff_EBP + 0x24) = iVar11;
          do {
            *(uint **)(unaff_EBP + 0x14) = puVar8;
            if (0 < *(int *)(unaff_EBP + 8)) {
              *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x20) * 2;
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
              *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8);
              puVar7 = puVar8;
              puVar10 = puVar9;
              do {
                uVar2 = *puVar10;
                uVar6 = (ushort)(*puVar7 >> 0x1c);
                if (uVar6 < uVar2) {
                  uVar2 = uVar2 - uVar6 & 0xf000 | uVar2 & 0xfff;
                }
                else {
                  uVar2 = 0;
                }
                puVar7 = (uint *)(*(int *)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + 0xc));
                *puVar10 = uVar2;
                puVar10 = (ushort *)((int)puVar10 + *(int *)(unaff_EBP + 0x18));
                piVar1 = (int *)(unaff_EBP + 0x10);
                *piVar1 = *piVar1 + -1;
                *(uint **)(unaff_EBP + 0x14) = puVar7;
              } while (*piVar1 != 0);
            }
            puVar9 = (ushort *)((int)puVar9 + *(int *)(unaff_EBP + 0x1c));
            puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0x28));
            piVar1 = (int *)(unaff_EBP + 0x24);
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
        }
      }
      else if (0 < iVar11) {
        *(int *)(unaff_EBP + -0x18) = iVar11;
        do {
          *(uint **)(unaff_EBP + 0x14) = puVar8;
          if (0 < *(int *)(unaff_EBP + 8)) {
            *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x20) * 2;
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
            *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 8);
            puVar10 = puVar9;
            do {
              uVar5 = FUN_50008086((uint)*puVar10,**(uint **)(unaff_EBP + 0x14),
                                   *(int *)(unaff_EBP + 0x10));
              *puVar10 = (ushort)uVar5;
              puVar10 = (ushort *)((int)puVar10 + *(int *)(unaff_EBP + 0x18));
              *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + 0xc);
              piVar1 = (int *)(unaff_EBP + 0x24);
              *piVar1 = *piVar1 + -1;
            } while (*piVar1 != 0);
          }
          puVar9 = (ushort *)((int)puVar9 + *(int *)(unaff_EBP + 0x1c));
          puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0x28));
          piVar1 = (int *)(unaff_EBP + -0x18);
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
      }
    }
  }
  else if (*(int *)(unaff_EBP + 0x14) == 0x1001) {
    memset((void *)(unaff_EBP + -0x28),0,0x10);
    if (0 < *(int *)(unaff_EBP + 0xc)) {
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0xc);
      do {
        puVar7 = puVar8;
        if (0 < *(int *)(unaff_EBP + 8)) {
          *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x20) * 2;
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 8);
          do {
            if (*(int *)(unaff_EBP + 0x10) == -1) {
              uVar4 = *puVar8;
            }
            else {
              if (*(int *)(unaff_EBP + 0x10) == 0xff) {
                uVar5 = *puVar8;
                uVar3 = FUN_500073e6((uint)*puVar9);
                uVar4 = uVar5;
                if (((uVar5 & 0xff000000) != 0xff000000) &&
                   (uVar4 = uVar3, (uVar5 & 0xff000000) != 0)) {
                  iVar11 = 0xff;
                  goto LAB_50007d41;
                }
              }
              else {
                iVar11 = *(int *)(unaff_EBP + 0x10);
                uVar5 = *puVar8;
                uVar3 = FUN_500073e6((uint)*puVar9);
LAB_50007d41:
                uVar4 = FUN_500078f7(uVar3,uVar5,iVar11);
              }
              puVar7 = *(uint **)(unaff_EBP + 0x24);
            }
            uVar5 = FUN_50009dd9((void *)(unaff_EBP + -0x28),uVar4);
            puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0xc));
            *puVar9 = (ushort)uVar5;
            puVar9 = (ushort *)((int)puVar9 + *(int *)(unaff_EBP + 0x18));
            piVar1 = (int *)(unaff_EBP + 0x14);
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
        }
        memset((void *)(unaff_EBP + -0x28),0,0x10);
        puVar8 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0x28));
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + 0x1c);
        piVar1 = (int *)(unaff_EBP + -0x14);
        *piVar1 = *piVar1 + -1;
        *(uint **)(unaff_EBP + 0x24) = puVar8;
        if (*piVar1 == 0) break;
        puVar9 = *(ushort **)(unaff_EBP + -0x10);
      } while( true );
    }
  }
  else if (*(int *)(unaff_EBP + 0x14) == 1) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar11 = *(int *)(unaff_EBP + 0xc);
    FUN_5000a332((void *)(unaff_EBP + -0x2044),*(uint *)(unaff_EBP + 8),iVar11,puVar9,
                 *(undefined4 *)(unaff_EBP + 0x1c));
    if (0 < iVar11) {
      *(int *)(unaff_EBP + -0x18) = iVar11;
      do {
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        *(ushort **)(unaff_EBP + -0x14) = puVar9;
        puVar10 = puVar9;
        puVar7 = puVar8;
        if (0 < *(int *)(unaff_EBP + 8)) {
          *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x20) * 2;
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
          while( true ) {
            if (*(int *)(unaff_EBP + 0x10) == -1) {
              uVar5 = *puVar8;
            }
            else {
              if (*(int *)(unaff_EBP + 0x10) == 0xff) {
                uVar3 = *puVar8;
                uVar4 = FUN_500073e6((uint)*puVar9);
                uVar5 = uVar3;
                if (((uVar3 & 0xff000000) != 0xff000000) &&
                   (uVar5 = uVar4, (uVar3 & 0xff000000) != 0)) {
                  uVar5 = FUN_500078f7(uVar4,uVar3,0xff);
                }
                puVar7 = *(uint **)(unaff_EBP + 0x24);
              }
              else {
                iVar11 = *(int *)(unaff_EBP + 0x10);
                uVar5 = *puVar8;
                uVar3 = FUN_500073e6((uint)*puVar9);
                uVar5 = FUN_500078f7(uVar3,uVar5,iVar11);
              }
              puVar10 = *(ushort **)(unaff_EBP + -0x10);
            }
            FUN_50009f2d((void *)(unaff_EBP + -0x2044),uVar5,*(int *)(unaff_EBP + 0x14));
            *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 0x18);
            puVar8 = (uint *)((int)puVar8 + *(int *)(unaff_EBP + 0xc));
            if (*(int *)(unaff_EBP + 8) <= *(int *)(unaff_EBP + 0x14)) break;
            puVar9 = *(ushort **)(unaff_EBP + -0x14);
          }
        }
        FUN_5000a16e(unaff_EBP + -0x2044);
        puVar9 = (ushort *)((int)puVar10 + *(int *)(unaff_EBP + 0x1c));
        puVar8 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0x28));
        piVar1 = (int *)(unaff_EBP + -0x18);
        *piVar1 = *piVar1 + -1;
        *(ushort **)(unaff_EBP + -0x10) = puVar9;
        *(uint **)(unaff_EBP + 0x24) = puVar8;
      } while (*piVar1 != 0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_5000a303(unaff_EBP + -0x2044);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


