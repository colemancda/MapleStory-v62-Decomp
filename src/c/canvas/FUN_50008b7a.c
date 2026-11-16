/* FUN_50008b7a - 0x50008b7a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50008b7a(void)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int unaff_EBP;
  ushort *puVar8;
  int iVar9;
  
  FUN_50012d80();
  FUN_50012e10();
  puVar8 = *(ushort **)(unaff_EBP + 0x18);
  puVar7 = *(uint **)(unaff_EBP + 0x24);
  *(ushort **)(unaff_EBP + 0x18) = puVar8;
  *(uint **)(unaff_EBP + 0x24) = puVar7;
  if ((*(int *)(unaff_EBP + 0x14) == 0) || (*(int *)(unaff_EBP + 0x10) == -2)) {
    if (*(int *)(unaff_EBP + 0x10) == -1) {
      if (0 < *(int *)(unaff_EBP + 0xc)) {
        *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0xc);
        do {
          if (0 < *(int *)(unaff_EBP + 8)) {
            *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x20) * 2;
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8);
            puVar6 = puVar7;
            do {
              uVar5 = *puVar6;
              puVar6 = (uint *)((int)puVar6 + *(int *)(unaff_EBP + 0xc));
              *puVar8 = (ushort)(uVar5 >> 8) & 0xf800 | (ushort)(uVar5 >> 5) & 0x7e0 |
                        (ushort)(uVar5 >> 3) & 0x1f;
              puVar8 = (ushort *)((int)puVar8 + *(int *)(unaff_EBP + 0x14));
              piVar1 = (int *)(unaff_EBP + 0x10);
              *piVar1 = *piVar1 + -1;
            } while (*piVar1 != 0);
          }
          puVar8 = (ushort *)(*(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x1c));
          puVar7 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0x28));
          piVar1 = (int *)(unaff_EBP + 0x24);
          *piVar1 = *piVar1 + -1;
          *(ushort **)(unaff_EBP + 0x18) = puVar8;
        } while (*piVar1 != 0);
      }
    }
    else if (*(int *)(unaff_EBP + 0x10) == 0xff) {
      if (0 < *(int *)(unaff_EBP + 0xc)) {
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0xc);
        do {
          *(uint **)(unaff_EBP + 0x24) = puVar7;
          if (0 < *(int *)(unaff_EBP + 8)) {
            iVar9 = *(int *)(unaff_EBP + 0x20);
            *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8);
            puVar6 = puVar7;
            do {
              uVar5 = *puVar6;
              if ((uVar5 & 0xff000000) < 0x80000000) {
                uVar2 = *puVar8;
              }
              else {
                uVar2 = (ushort)(((uVar5 >> 3 & 0x1f0000 | uVar5 & 0xfc00) >> 2 | uVar5 & 0xf8) >> 3
                                );
              }
              *puVar8 = uVar2;
              puVar6 = (uint *)(*(int *)(unaff_EBP + 0x24) + *(int *)(unaff_EBP + 0xc));
              puVar8 = puVar8 + iVar9;
              piVar1 = (int *)(unaff_EBP + 0x10);
              *piVar1 = *piVar1 + -1;
              *(uint **)(unaff_EBP + 0x24) = puVar6;
            } while (*piVar1 != 0);
          }
          puVar8 = (ushort *)(*(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x1c));
          puVar7 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0x28));
          piVar1 = (int *)(unaff_EBP + 0x14);
          *piVar1 = *piVar1 + -1;
          *(ushort **)(unaff_EBP + 0x18) = puVar8;
        } while (*piVar1 != 0);
      }
    }
    else if ((*(int *)(unaff_EBP + 0x10) != -2) && (0 < *(int *)(unaff_EBP + 0xc))) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 0xc);
      do {
        *(uint **)(unaff_EBP + 0x24) = puVar7;
        if (0 < *(int *)(unaff_EBP + 8)) {
          uVar5 = *(uint *)(unaff_EBP + 0x10);
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x20) * 2;
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
          puVar6 = puVar7;
          do {
            uVar3 = *puVar6;
            if ((byte)(&DAT_50071ad0)[uVar3 >> 0x15 & 0x7c0 | (int)(uVar5 & 0xfc | 0x3e000) >> 2] <
                0x80) {
              uVar2 = *puVar8;
            }
            else {
              uVar2 = (ushort)(((uVar3 >> 3 & 0x1f0000 | uVar3 & 0xfc00) >> 2 | uVar3 & 0xf8) >> 3);
            }
            *puVar8 = uVar2;
            puVar6 = (uint *)(*(int *)(unaff_EBP + 0x24) + *(int *)(unaff_EBP + 0xc));
            puVar8 = (ushort *)((int)puVar8 + *(int *)(unaff_EBP + 0x14));
            piVar1 = (int *)(unaff_EBP + -0x18);
            *piVar1 = *piVar1 + -1;
            *(uint **)(unaff_EBP + 0x24) = puVar6;
          } while (*piVar1 != 0);
        }
        puVar8 = (ushort *)(*(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x1c));
        puVar7 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0x28));
        piVar1 = (int *)(unaff_EBP + -0x10);
        *piVar1 = *piVar1 + -1;
        *(ushort **)(unaff_EBP + 0x18) = puVar8;
      } while (*piVar1 != 0);
    }
  }
  else if (*(int *)(unaff_EBP + 0x14) == 0x1201) {
    memset((void *)(unaff_EBP + -0x28),0,0x10);
    if (0 < *(int *)(unaff_EBP + 0xc)) {
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 0xc);
      do {
        puVar8 = *(ushort **)(unaff_EBP + 0x18);
        puVar6 = puVar7;
        if (0 < *(int *)(unaff_EBP + 8)) {
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x20) * 2;
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 8);
          do {
            if (*(int *)(unaff_EBP + 0x10) == -1) {
              uVar4 = *puVar7;
            }
            else {
              if (*(int *)(unaff_EBP + 0x10) == 0xff) {
                uVar5 = *puVar7;
                uVar3 = FUN_5000741d((uint)*puVar8);
                uVar4 = uVar5;
                if (((uVar5 & 0xff000000) != 0xff000000) &&
                   (uVar4 = uVar3, (uVar5 & 0xff000000) != 0)) {
                  iVar9 = 0xff;
                  goto LAB_50008c4e;
                }
              }
              else {
                iVar9 = *(int *)(unaff_EBP + 0x10);
                uVar5 = *puVar7;
                uVar3 = FUN_5000741d((uint)*puVar8);
LAB_50008c4e:
                uVar4 = FUN_500078f7(uVar3,uVar5,iVar9);
              }
              puVar6 = *(uint **)(unaff_EBP + 0x24);
            }
            uVar5 = FUN_5000a1b8((void *)(unaff_EBP + -0x28),uVar4);
            puVar7 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0xc));
            *puVar8 = (ushort)uVar5;
            puVar8 = (ushort *)((int)puVar8 + *(int *)(unaff_EBP + 0x14));
            piVar1 = (int *)(unaff_EBP + -0x10);
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
        }
        memset((void *)(unaff_EBP + -0x28),0,0x10);
        puVar7 = (uint *)((int)puVar6 + *(int *)(unaff_EBP + 0x28));
        *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x1c);
        piVar1 = (int *)(unaff_EBP + -0x14);
        *piVar1 = *piVar1 + -1;
        *(uint **)(unaff_EBP + 0x24) = puVar7;
      } while (*piVar1 != 0);
    }
  }
  else if (*(int *)(unaff_EBP + 0x14) == 0x201) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar9 = *(int *)(unaff_EBP + 0xc);
    FUN_5000a332((void *)(unaff_EBP + -0x2044),*(uint *)(unaff_EBP + 8),iVar9,puVar8,
                 *(undefined4 *)(unaff_EBP + 0x1c));
    if (0 < iVar9) {
      *(int *)(unaff_EBP + -0x18) = iVar9;
      do {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(ushort **)(unaff_EBP + -0x10) = puVar8;
        puVar6 = puVar7;
        if (0 < *(int *)(unaff_EBP + 8)) {
          *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x20) * 2;
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x2c) << 2;
          while( true ) {
            if (*(int *)(unaff_EBP + 0x10) == -1) {
              uVar5 = *puVar7;
            }
            else if (*(int *)(unaff_EBP + 0x10) == 0xff) {
              uVar3 = *puVar7;
              uVar4 = FUN_5000741d((uint)*puVar8);
              uVar5 = uVar3;
              if (((uVar3 & 0xff000000) != 0xff000000) && (uVar5 = uVar4, (uVar3 & 0xff000000) != 0)
                 ) {
                uVar5 = FUN_500078f7(uVar4,uVar3,0xff);
              }
              puVar6 = *(uint **)(unaff_EBP + 0x24);
            }
            else {
              iVar9 = *(int *)(unaff_EBP + 0x10);
              uVar5 = *puVar7;
              uVar3 = FUN_5000741d((uint)*puVar8);
              uVar5 = FUN_500078f7(uVar3,uVar5,iVar9);
            }
            FUN_5000a3d4((void *)(unaff_EBP + -0x2044),uVar5,*(int *)(unaff_EBP + -0x14));
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + 0x14);
            puVar7 = (uint *)((int)puVar7 + *(int *)(unaff_EBP + 0xc));
            if (*(int *)(unaff_EBP + 8) <= *(int *)(unaff_EBP + -0x14)) break;
            puVar8 = *(ushort **)(unaff_EBP + -0x10);
          }
        }
        FUN_5000a16e(unaff_EBP + -0x2044);
        puVar8 = (ushort *)(*(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x1c));
        puVar7 = (uint *)((int)puVar6 + *(int *)(unaff_EBP + 0x28));
        piVar1 = (int *)(unaff_EBP + -0x18);
        *piVar1 = *piVar1 + -1;
        *(ushort **)(unaff_EBP + 0x18) = puVar8;
        *(uint **)(unaff_EBP + 0x24) = puVar7;
      } while (*piVar1 != 0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_5000a303(unaff_EBP + -0x2044);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


