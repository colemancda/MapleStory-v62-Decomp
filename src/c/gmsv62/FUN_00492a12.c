/* FUN_00492a12 - 0x00492a12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00492a12(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_EBP;
  int iVar10;
  
  FUN_00879bb8();
  FUN_00492f16();
  puVar5 = (undefined4 *)(extraout_ECX + 0x198);
  iVar6 = 10;
  do {
    puVar5[-10] = 0xffffffff;
    *puVar5 = 0xffffffff;
    puVar5[10] = 0xffffffff;
    puVar5[0x14] = 0;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)(extraout_ECX + 0x168) = 0;
  *(undefined4 *)(extraout_ECX + 0x16c) = 0xffffffff;
  FUN_00493e2d(0xffffffff,0xffffffff);
  (**(code **)(*(int *)(extraout_ECX + 4) + 0x34))();
  iVar10 = *(int *)(extraout_ECX + 0x210);
  iVar6 = *(int *)(iVar10 + 0x500);
  if (iVar6 == 10) {
    iVar6 = *(int *)(iVar10 + 0x508);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uVar1 = FUN_00495f05(iVar6 * 10);
    if (uVar1 != 0) {
      *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x170;
      do {
        if (9 < *(int *)(unaff_EBP + -0x10)) break;
        iVar6 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
        uVar9 = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
        iVar6 = *(int *)(uVar1 + 4);
        *(int *)(unaff_EBP + -0x30) = iVar6;
        iVar10 = 0;
        if (iVar6 != 0) {
          InterlockedIncrement((LONG *)(iVar6 + 4));
          iVar10 = *(int *)(unaff_EBP + -0x30);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uVar2 = FUN_0045c1e1(iVar10 + 0xc);
        puVar5 = *(undefined4 **)(unaff_EBP + -0x18);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        iVar6 = *(int *)(unaff_EBP + -0x30);
        *puVar5 = uVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (iVar6 != 0) {
          FUN_0045e794(0);
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
        }
        uVar1 = uVar9;
      } while (uVar9 != 0);
    }
    uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  }
  else if (iVar6 == 9) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iVar6 = 0x49c;
    puVar5 = (undefined4 *)(extraout_ECX + 0x170);
    do {
      if (0 < *(int *)(iVar10 + iVar6)) {
        uVar2 = FUN_0045c1e1(iVar10 + iVar6);
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        *puVar5 = uVar2;
        iVar10 = *(int *)(extraout_ECX + 0x210);
        iVar8 = *(int *)(iVar10 + 0x48);
        puVar5 = puVar5 + 1;
        *(undefined4 **)(unaff_EBP + -0x30) = puVar5;
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = *(int *)(iVar8 + -4);
        }
        iVar7 = iVar7 + -1;
        if (-1 < iVar7) {
          piVar3 = (int *)(*(int *)(iVar10 + 0x48) + iVar7 * 8);
          do {
            if (*piVar3 == *(int *)(iVar10 + iVar6)) {
              *(int *)(extraout_ECX + -0x304 + iVar6) = piVar3[1];
              break;
            }
            iVar7 = iVar7 + -1;
            piVar3 = piVar3 + -2;
          } while (-1 < iVar7);
        }
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        while( true ) {
          iVar10 = *(int *)(extraout_ECX + 0x210);
          iVar8 = *(int *)(iVar10 + 0x4c);
          if (((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= *(uint *)(unaff_EBP + -0x14))) ||
             (*(int *)(unaff_EBP + -0x2c) != 0)) break;
          piVar4 = (int *)(iVar8 + *(int *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          piVar3 = piVar4;
          do {
            piVar3 = piVar3 + 1;
            if (*piVar3 == 0) break;
            if (*piVar3 == *(int *)(iVar10 + iVar6)) {
              *(int *)(extraout_ECX + -0x2dc + iVar6) = piVar4[0xb];
              *(undefined4 *)(unaff_EBP + -0x2c) = 1;
              break;
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          } while (*(int *)(unaff_EBP + -0x18) < 10);
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x68;
          puVar5 = *(undefined4 **)(unaff_EBP + -0x30);
        }
      }
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x4c4);
    uVar2 = *(undefined4 *)(unaff_EBP + -0x1c);
  }
  else {
    if (iVar6 == 8) {
      if (*(int *)(iVar10 + 0x504) == 0) {
        puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x30,0x4c7);
        uVar2 = *puVar5;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00492ea6(2,2,uVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x30,0x4c8);
        uVar2 = *puVar5;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00492ea6(2,2,uVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
    }
    else {
      iVar6 = FUN_0045c1ad(iVar6,*(undefined4 *)(iVar10 + 0x504));
      if ((-1 < iVar6) && (0 < *(int *)(*(int *)(extraout_ECX + 0x68) + 0x38))) {
        iVar10 = *(int *)(*(int *)(extraout_ECX + 0x210) + 0x44);
        iVar8 = *(int *)(*(int *)(extraout_ECX + 0x210) + 0x508);
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        iVar10 = iVar10 + iVar6 * 0x1c;
        *(int *)(unaff_EBP + -0x14) = DAT_00978368 + 0x3278;
        iVar8 = iVar8 * 10;
        *(int *)(unaff_EBP + -0x38) = iVar8;
        *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x198;
        do {
          iVar6 = *(int *)(iVar10 + 0x10);
          uVar1 = iVar6 + iVar8 + *(int *)(unaff_EBP + -0x18);
          if ((int)uVar1 < iVar6 + *(int *)(iVar10 + 0x14)) {
            if (*(int *)(*(int *)(**(int **)(unaff_EBP + -0x14) + 4 + uVar1 * 8) + 0x40) == 0)
            goto LAB_00492e18;
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
            *(uint *)(*(int *)(unaff_EBP + -0x10) + -0x28) = uVar1;
          }
          iVar6 = *(int *)(extraout_ECX + 0x210);
          iVar8 = *(int *)(iVar6 + 0x48);
          iVar7 = 0;
          if (iVar8 != 0) {
            iVar7 = *(int *)(iVar8 + -4);
          }
          iVar7 = iVar7 + -1;
          *(int *)(unaff_EBP + -0x1c) = iVar7;
          if (-1 < iVar7) {
            piVar3 = (int *)(*(int *)(iVar6 + 0x48) + iVar7 * 8);
            do {
              if ((((piVar3 != (int *)0x0) && (iVar6 = **(int **)(unaff_EBP + -0x14), iVar6 != 0))
                  && (uVar1 < *(uint *)(iVar6 + -4))) &&
                 ((iVar6 = *(int *)(iVar6 + 4 + uVar1 * 8), *piVar3 == *(int *)(iVar6 + 0xc) &&
                  (*(int *)(iVar6 + 0x40) == 1)))) {
                **(int **)(unaff_EBP + -0x10) = piVar3[1];
                break;
              }
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + -1;
              piVar3 = piVar3 + -2;
            } while (-1 < *(int *)(unaff_EBP + -0x1c));
          }
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          while (((iVar6 = *(int *)(*(int *)(extraout_ECX + 0x210) + 0x4c), iVar6 != 0 &&
                  (*(uint *)(unaff_EBP + -0x24) < *(uint *)(iVar6 + -4))) &&
                 (*(int *)(unaff_EBP + -0x30) == 0))) {
            iVar6 = iVar6 + *(int *)(unaff_EBP + -0x28);
            *(int *)(unaff_EBP + -0x20) = iVar6;
            if ((((iVar6 != 0) && (iVar6 = **(int **)(unaff_EBP + -0x14), iVar6 != 0)) &&
                (uVar1 < *(uint *)(iVar6 + -4))) &&
               (*(int *)(*(int *)(iVar6 + 4 + uVar1 * 8) + 0x40) == 1)) {
              iVar6 = FUN_0045e2eb();
              piVar3 = *(int **)(unaff_EBP + -0x20);
              if (iVar6 == *piVar3) {
                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                *(int **)(unaff_EBP + -0x1c) = piVar3 + 1;
                do {
                  if (**(int **)(unaff_EBP + -0x1c) == 0) break;
                  if (**(int **)(unaff_EBP + -0x1c) ==
                      *(int *)(*(int *)(**(int **)(unaff_EBP + -0x14) + 4 + uVar1 * 8) + 0xc)) {
                    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x28) = piVar3[0xb];
                    *(undefined4 *)(unaff_EBP + -0x30) = 1;
                    break;
                  }
                  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
                  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
                } while (*(int *)(unaff_EBP + -0x20) < 10);
              }
            }
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x68;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
          if (9 < *(int *)(unaff_EBP + -0x18)) goto LAB_00492e18;
          iVar8 = *(int *)(unaff_EBP + -0x38);
        } while( true );
      }
      puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x38,0x4c9);
      uVar2 = *puVar5;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_00492ea6(2,0x53,uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    FUN_00402676();
    uVar2 = 0;
  }
LAB_00492e50:
  FUN_004935fd(uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_00492e18:
  uVar2 = *(undefined4 *)(unaff_EBP + -0x2c);
  goto LAB_00492e50;
}


