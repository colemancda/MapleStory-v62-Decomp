/* FUN_008624da - 0x008624da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008624da(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 extraout_ECX;
  int iVar13;
  int *piVar14;
  int iVar15;
  int unaff_EBP;
  int iVar16;
  bool bVar17;
  bool bVar18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = extraout_ECX;
  FUN_0087b2f0(unaff_EBP + -0x208,0x1c,10,&LAB_00861fd2,FUN_00861fdd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(unaff_EBP + -0xb0,0x10,4,&LAB_008628a1,0x4cd5c9);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(unaff_EBP + -0xf0,0x10,4,&LAB_008628a1,0x4cd5c9);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  do {
    iVar13 = 0;
    piVar9 = (int *)(unaff_EBP + -0x70);
    do {
      *piVar9 = iVar13;
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar13 < 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    piVar9 = (int *)(unaff_EBP + -0x70);
    do {
      if (*(int *)(unaff_EBP + -0x10) < 5) {
        *(int *)(unaff_EBP + -0x14) = 5 - *(int *)(unaff_EBP + -0x10);
        piVar10 = piVar9;
        do {
          piVar10 = piVar10 + 1;
          iVar13 = *piVar9;
          iVar15 = *piVar10;
          *(int *)(unaff_EBP + -0x24) = iVar13;
          piVar14 = (int *)(iVar13 * 0x1c + 8 + *(int *)(unaff_EBP + 8));
          piVar6 = (int *)(iVar15 * 0x1c + 8 + *(int *)(unaff_EBP + 8));
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            if (*piVar6 < *piVar14) goto LAB_008625b7;
            if (*piVar14 == *piVar6) {
              iVar15 = piVar14[2];
              iVar13 = piVar6[2];
              bVar18 = SBORROW4(iVar15,iVar13);
              iVar16 = iVar15 - iVar13;
              bVar17 = iVar15 == iVar13;
LAB_008625b5:
              if (!bVar17 && bVar18 == iVar16 < 0) goto LAB_008625b7;
            }
          }
          else {
            if (piVar14[1] <= piVar6[1]) {
              if (piVar14[1] == piVar6[1]) {
                iVar15 = piVar14[3];
                iVar13 = piVar6[3];
                bVar18 = SBORROW4(iVar15,iVar13);
                iVar16 = iVar15 - iVar13;
                bVar17 = iVar15 == iVar13;
                goto LAB_008625b5;
              }
              goto LAB_008625c0;
            }
LAB_008625b7:
            *piVar9 = *piVar10;
            *piVar10 = *(int *)(unaff_EBP + -0x24);
          }
LAB_008625c0:
          piVar14 = (int *)(unaff_EBP + -0x14);
          *piVar14 = *piVar14 + -1;
        } while (*piVar14 != 0);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      piVar9 = piVar9 + 1;
    } while (*(int *)(unaff_EBP + -0x10) + -1 < 5);
    iVar15 = *(int *)(unaff_EBP + -0x18) * 0x8c;
    *(int *)(unaff_EBP + -0x14) = unaff_EBP + -0x70;
    iVar13 = unaff_EBP + -0x1f0 + iVar15;
    *(int *)(unaff_EBP + -0x10) = iVar13;
    *(undefined4 *)(unaff_EBP + -0x1c) = 5;
    while( true ) {
      puVar7 = (undefined4 *)(**(int **)(unaff_EBP + -0x14) * 0x1c + 8 + *(int *)(unaff_EBP + 8));
      *(undefined4 *)(iVar13 + -0x18) = *puVar7;
      *(undefined4 *)(iVar13 + -0x14) = puVar7[1];
      *(undefined4 **)(unaff_EBP + -0x24) = puVar7;
      *(undefined4 *)(iVar13 + -0x10) = puVar7[2];
      *(undefined4 *)(iVar13 + -0xc) = puVar7[3];
      FUN_008623dc(puVar7 + 4);
      puVar7 = *(undefined4 **)(unaff_EBP + -0x10);
      uVar12 = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x18);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x1c;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
      piVar9 = (int *)(unaff_EBP + -0x1c);
      *piVar9 = *piVar9 + -1;
      iVar13 = *piVar9;
      *puVar7 = uVar12;
      if (iVar13 == 0) break;
      iVar13 = *(int *)(unaff_EBP + -0x10);
    }
    puVar7 = (undefined4 *)(unaff_EBP + -0x208 + iVar15);
    *(undefined4 *)(unaff_EBP + -0x4c) = *puVar7;
    *(undefined4 *)(unaff_EBP + -0x48) = puVar7[1];
    *(undefined4 *)(unaff_EBP + -0x44) = puVar7[2];
    *(undefined4 *)(unaff_EBP + -0x40) = puVar7[3];
    puVar7 = (undefined4 *)(unaff_EBP + -0x198 + iVar15);
    *(undefined4 *)(unaff_EBP + -0x5c) = *puVar7;
    *(undefined4 *)(unaff_EBP + -0x58) = puVar7[1];
    *(undefined4 *)(unaff_EBP + -0x54) = puVar7[2];
    *(undefined4 *)(unaff_EBP + -0x50) = puVar7[3];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(int *)(unaff_EBP + -0x14) = unaff_EBP + -0x1ec + iVar15;
    iVar15 = unaff_EBP + -0x1b4 + iVar15;
    do {
      FUN_00862aa0(unaff_EBP + -0x4c,*(undefined4 *)(unaff_EBP + -0x14));
      FUN_00862aa0(unaff_EBP + -0x5c,iVar15);
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        iVar13 = (*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x18) * 2) * 0x10;
        puVar7 = (undefined4 *)(unaff_EBP + -0xc0 + iVar13);
        *puVar7 = *(undefined4 *)(unaff_EBP + -0x4c);
        puVar7[1] = *(undefined4 *)(unaff_EBP + -0x48);
        puVar7[2] = *(undefined4 *)(unaff_EBP + -0x44);
        puVar7[3] = *(undefined4 *)(unaff_EBP + -0x40);
        puVar7 = (undefined4 *)(unaff_EBP + -0x100 + iVar13);
        *puVar7 = *(undefined4 *)(unaff_EBP + -0x5c);
        puVar7[1] = *(undefined4 *)(unaff_EBP + -0x58);
        puVar7[2] = *(undefined4 *)(unaff_EBP + -0x54);
        puVar7[3] = *(undefined4 *)(unaff_EBP + -0x50);
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
      iVar15 = iVar15 + -0x1c;
    } while (*(int *)(unaff_EBP + -0x10) < 3);
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (1 < *(int *)(unaff_EBP + -0x18)) {
      iVar13 = 0;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      piVar9 = (int *)(unaff_EBP + -0x28);
      do {
        piVar10 = (int *)(unaff_EBP + -0xa4 + iVar13);
        piVar14 = (int *)(unaff_EBP + -0xd4 + iVar13);
        iVar15 = 2;
        do {
          piVar6 = piVar14 + -1;
          piVar1 = piVar14 + -3;
          piVar2 = piVar14 + -2;
          piVar3 = piVar10 + -3;
          piVar4 = piVar10 + -2;
          piVar5 = piVar10 + -1;
          iVar16 = *piVar14;
          piVar14 = piVar14 + -4;
          iVar8 = *piVar10;
          piVar10 = piVar10 + 4;
          *piVar9 = *piVar9 + ((((*piVar6 - *piVar1) - *piVar2) - *piVar3) - *piVar4) + *piVar5 +
                              iVar16 + iVar8;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        iVar13 = iVar13 + 0x20;
        piVar9 = piVar9 + 1;
      } while (iVar13 < 0x40);
      uVar11 = (uint)(*(int *)(unaff_EBP + -0x24) <= *(int *)(unaff_EBP + -0x28));
      *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(uint *)(unaff_EBP + -0x24) = uVar11;
      iVar13 = uVar11 * 0x20;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piVar9 = (int *)(unaff_EBP + -0xac + iVar13);
      piVar10 = (int *)(unaff_EBP + -0xdc + iVar13);
      do {
        iVar13 = FUN_00862ae8(piVar9 + -1,piVar10 + -1);
        if (iVar13 == 0) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        else {
          *(int *)(unaff_EBP + -0x18) =
               (*(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x38)) *
               (*(int *)(unaff_EBP + -0x34) - *(int *)(unaff_EBP + -0x3c));
        }
        iVar13 = *(int *)(unaff_EBP + -0x1c);
        iVar15 = (piVar9[2] - *piVar9) * (piVar9[1] - piVar9[-1]) +
                 (piVar10[2] - *piVar10) * (piVar10[1] - piVar10[-1]);
        if (((iVar13 == -1) || (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x14))) ||
           ((*(int *)(unaff_EBP + -0x18) == *(int *)(unaff_EBP + -0x14) &&
            (iVar15 < *(int *)(unaff_EBP + -0x20))))) {
          iVar13 = *(int *)(unaff_EBP + -0x10) + 2;
          *(int *)(unaff_EBP + -0x1c) = iVar13;
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
          *(int *)(unaff_EBP + -0x20) = iVar15;
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        piVar9 = piVar9 + 4;
        piVar10 = piVar10 + -4;
      } while (*(int *)(unaff_EBP + -0x10) < 2);
      uVar12 = FUN_00861f3c(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar12;
      FUN_00862bcc();
      iVar15 = *(int *)(unaff_EBP + -0x24);
      if (0 < iVar13) {
        iVar16 = unaff_EBP + -0x208 + iVar15 * 0x8c;
        *(int *)(unaff_EBP + -0x20) = iVar13;
        do {
          FUN_00862332(iVar16);
          iVar16 = iVar16 + 0x1c;
          piVar9 = (int *)(unaff_EBP + -0x20);
          *piVar9 = *piVar9 + -1;
        } while (*piVar9 != 0);
      }
      if (iVar13 < 5) {
        iVar15 = unaff_EBP + -0x208 + (iVar13 + iVar15 * 5) * 0x1c;
        iVar13 = 5 - iVar13;
        do {
          FUN_00862332(iVar15);
          iVar15 = iVar15 + 0x1c;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0087a0b8(unaff_EBP + -0xf0,0x10,4,0x4cd5c9);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0087a0b8(unaff_EBP + -0xb0,0x10,4,0x4cd5c9);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0087a0b8(unaff_EBP + -0x208,0x1c,10,FUN_00861fdd);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return *(undefined4 *)(unaff_EBP + -0x1c);
    }
  } while( true );
}


