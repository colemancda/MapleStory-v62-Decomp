/* FUN_50402e0e - 0x50402e0e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


bool FUN_50402e0e(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  void *pvVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  FUN_5042a430();
  if (*(int *)(extraout_ECX + 0x1c) == 0) {
    bVar11 = false;
  }
  else {
    memset(*(void **)(unaff_EBP + 8),0,0x5c);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piVar4 = *(int **)(extraout_ECX + 0x1c);
    iVar1 = *piVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = (**(code **)(iVar1 + 0x18))(piVar4,0);
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      do {
        memset((void *)(unaff_EBP + -0x74),0,0x5c);
        iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x1c) + 0x1c))
                          (*(int **)(extraout_ECX + 0x1c),0,*(undefined4 *)(unaff_EBP + -0x14),
                           unaff_EBP + -0x74);
        if (((-1 < iVar1) && (*(int *)(unaff_EBP + -0x74) == *(int *)(unaff_EBP + 0x10))) &&
           (*(int *)(unaff_EBP + -0x70) == *(int *)(unaff_EBP + 0x14))) {
          iVar1 = *(int *)(unaff_EBP + 0xc);
          if (iVar1 == -1) {
            iVar9 = *(int *)(unaff_EBP + -0x68);
          }
          else {
            iVar9 = *(int *)(unaff_EBP + -0x68);
            if ((iVar1 == 0) && (iVar9 == *(int *)(extraout_ECX + 0x88))) {
              bVar11 = *(int *)(unaff_EBP + -0x6c) == *(int *)(extraout_ECX + 0x84);
            }
            else {
              if ((iVar1 == 0x10) && (iVar9 == 0x17)) goto LAB_50402edd;
              if (iVar1 != 0x20) goto LAB_50402f9c;
              bVar11 = iVar9 == 0x16;
            }
            if (!bVar11) goto LAB_50402f9c;
          }
LAB_50402edd:
          *(uint *)(unaff_EBP + -0x48) = (uint)(iVar1 == 0);
          iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x1c) + 0x28))
                            (*(int **)(extraout_ECX + 0x1c),0,1,iVar9,0,3,0x1a);
          piVar4 = *(int **)(extraout_ECX + 0x1c);
          *(uint *)(unaff_EBP + -0x30) = (uint)(-1 < iVar1);
          iVar1 = (**(code **)(*piVar4 + 0x28))
                            (piVar4,0,1,*(undefined4 *)(unaff_EBP + -0x68),0,3,0x15);
          piVar4 = *(int **)(extraout_ECX + 0x1c);
          *(uint *)(unaff_EBP + -0x2c) = (uint)(-1 < iVar1);
          iVar1 = (**(code **)(*piVar4 + 0x28))
                            (piVar4,0,1,*(undefined4 *)(unaff_EBP + -0x68),0,3,0x17);
          piVar4 = *(int **)(extraout_ECX + 0x1c);
          *(uint *)(unaff_EBP + -0x28) = (uint)(-1 < iVar1);
          iVar1 = (**(code **)(*piVar4 + 0x28))
                            (piVar4,0,1,*(undefined4 *)(unaff_EBP + -0x68),0,3,0x33545844);
          *(uint *)(unaff_EBP + -0x24) = (uint)(-1 < iVar1);
          if ((*(int *)(unaff_EBP + -0x30) != 0) || (*(int *)(unaff_EBP + -0x2c) != 0)) {
            if (*(int *)(unaff_EBP + -0x24) == 0) {
              *(uint *)(unaff_EBP + -0x20) = (-(uint)(*(int *)(unaff_EBP + -0x30) != 0) & 5) + 0x15;
            }
            else {
              *(undefined4 *)(unaff_EBP + -0x20) = 0x33545844;
            }
            puVar2 = (undefined4 *)FUN_504055ff((void *)(unaff_EBP + -0x10),-1);
            puVar10 = (undefined4 *)(unaff_EBP + -0x74);
            for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar2 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar2 = puVar2 + 1;
            }
          }
        }
LAB_50402f9c:
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      } while (*(uint *)(unaff_EBP + -0x14) < *(uint *)(unaff_EBP + -0x18));
    }
    bVar11 = false;
    iVar1 = *(int *)(unaff_EBP + -0x10);
    if ((iVar1 != 0) && (*(uint *)(iVar1 + -4) != 0)) {
      bVar11 = false;
      piVar4 = (int *)(iVar1 + 0xc);
      for (uVar6 = 0; uVar6 < *(uint *)(iVar1 + -4); uVar6 = uVar6 + 1) {
        if (*piVar4 == 0x17) {
          bVar11 = true;
        }
        piVar4 = piVar4 + 0x17;
      }
      if (bVar11) {
        iVar9 = 0;
        for (uVar6 = 0; (iVar1 != 0 && (uVar6 < *(uint *)(iVar1 + -4))); uVar6 = uVar6 + 1) {
          if (*(int *)(iVar9 + 0xc + iVar1) == 0x16) {
            pvVar3 = (void *)(iVar9 + iVar1);
            uVar6 = uVar6 - 1;
            iVar9 = iVar9 + -0x5c;
            FUN_50405663((void *)(unaff_EBP + -0x10),pvVar3);
            iVar1 = *(int *)(unaff_EBP + -0x10);
          }
          iVar9 = iVar9 + 0x5c;
        }
      }
      if (*(int *)(unaff_EBP + 0x18) != 0) {
        piVar4 = (int *)(iVar1 + 8);
        for (uVar6 = 0; (iVar1 != 0 && (uVar6 < *(uint *)(iVar1 + -4))); uVar6 = uVar6 + 1) {
          if (*piVar4 == *(int *)(unaff_EBP + 0x18)) goto LAB_50403050;
          piVar4 = piVar4 + 0x17;
        }
      }
      uVar6 = 0;
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      puVar5 = (uint *)(iVar1 + 8);
      for (uVar8 = 0; (iVar1 != 0 && (uVar8 < *(uint *)(iVar1 + -4))); uVar8 = uVar8 + 1) {
        if (*(uint *)(unaff_EBP + 0x10) <= *puVar5) {
          *(uint *)(unaff_EBP + 0x10) = *puVar5;
          uVar6 = uVar8;
        }
        puVar5 = puVar5 + 0x17;
      }
LAB_50403050:
      puVar10 = (undefined4 *)(uVar6 * 0x5c + iVar1);
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar10 = *(undefined4 **)(unaff_EBP + 8);
      puVar2 = (undefined4 *)(-(uint)(puVar10 != (undefined4 *)0x0) & (uint)(puVar10 + 4));
      *puVar2 = *puVar10;
      puVar2[1] = puVar10[1];
      puVar2[2] = puVar10[3];
      puVar2[5] = (puVar2[7] == 0) + 1;
      if (puVar2[7] == 0) {
        uVar7 = puVar10[2];
      }
      else {
        uVar7 = 0;
      }
      puVar2[0xb] = uVar7;
      puVar10[0x16] = *(undefined4 *)(unaff_EBP + 0xc);
      bVar11 = puVar10[3] != 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_504055dd((int *)(unaff_EBP + -0x10));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar11;
}


