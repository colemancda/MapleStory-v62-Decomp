/* FUN_007cc26b - 0x007cc26b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cc26b(void)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int unaff_EBP;
  uint *puVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  uVar3 = FUN_0042452b();
  iVar8 = (int)(uVar3 & 0xff) >> 4;
  *(uint *)(unaff_EBP + -0x30) = uVar3 & 0xf;
  uVar3 = FUN_0042452b();
  uVar3 = uVar3 & 0xff;
  *(uint *)(unaff_EBP + -0x1c) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    uVar4 = FUN_0064d61f();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  }
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    iVar5 = FUN_00650e14();
    *(uint *)(unaff_EBP + -0x1c) = uVar3;
    if (iVar5 <= (int)uVar3) {
      *(int *)(unaff_EBP + -0x1c) = iVar5;
    }
  }
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x54) = uVar3 & 0x20;
  if ((*(int *)(unaff_EBP + -0x14) != 0x2f9f6c) && (*(int *)(unaff_EBP + -0x14) != 0x4faa8c)) {
    iVar5 = *(int *)(unaff_EBP + -0x24);
    iVar6 = FUN_0043f6fe();
    if (-1 < iVar6) {
      *(undefined4 *)(iVar5 + 0x530) = 0xffffffff;
      FUN_00441501();
      (**(code **)(*(int *)(iVar5 + 0x78) + 0x10))(6,100,0);
    }
    iVar5 = *(int *)(unaff_EBP + -0x24);
    FUN_00432942();
    *(undefined4 *)(iVar5 + 0x27d8) = 0;
  }
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x2c) = (uVar3 & 0xff) >> 7;
  *(uint *)(unaff_EBP + -0x28) = uVar3 & 0x7f;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x48) = uVar3 & 0xff;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x34) = uVar3 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x58) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_0067fb02(iVar8,unaff_EBP + -0xd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar8 != 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(int *)(unaff_EBP + -0x44) = iVar8;
    do {
      piVar7 = (int *)(*(int *)(unaff_EBP + -0x40) + *(int *)(unaff_EBP + -0x18));
      iVar8 = FUN_0042459a();
      *piVar7 = iVar8;
      if (iVar8 != 0) {
        uVar3 = FUN_0042452b();
        iVar8 = *(int *)(unaff_EBP + -0x14);
        piVar7[1] = uVar3 & 0xff;
        if (iVar8 == 0x40413e) {
          uVar3 = FUN_0042452b();
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          piVar7[5] = uVar3 & 0xff;
          if ((uVar3 & 0xff) != 0) {
            piVar10 = piVar7 + 6;
            do {
              iVar8 = FUN_0042459a();
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
              *piVar10 = iVar8;
              if (*piVar7 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = FUN_004308f4();
              }
              if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x15c), iVar8 != 0)) {
                iVar8 = FUN_00413367(iVar8 + 0x1a4,*(undefined4 *)(iVar8 + 0x1ac));
                *(int *)(unaff_EBP + -0x50) = iVar8;
                if ((0 < iVar8) && (0 < *piVar10)) {
                  *(undefined4 *)(unaff_EBP + -0x38) = 1;
                }
                iVar8 = FUN_005dcae0();
                if (iVar8 == 0) {
                  *(undefined4 *)(unaff_EBP + -0x38) = 1;
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)(unaff_EBP + -0x50);
                }
                if (*(int *)(unaff_EBP + -0x38) != 0) {
                  *piVar10 = iVar8;
                }
              }
              *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 1;
              piVar10 = piVar10 + 1;
            } while (*(int *)(unaff_EBP + -0x3c) < piVar7[5]);
          }
        }
        else {
          iVar8 = *(int *)(unaff_EBP + -0x30);
          if (0 < iVar8) {
            puVar9 = (uint *)(piVar7 + 6);
            do {
              uVar3 = FUN_0042459a();
              puVar9[0xf] = uVar3 >> 0x1f;
              *puVar9 = uVar3 & 0x7fffffff;
              puVar9 = puVar9 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
      }
      *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + 0x98;
      piVar7 = (int *)(unaff_EBP + -0x44);
      *piVar7 = *piVar7 + -1;
    } while (*piVar7 != 0);
  }
  iVar8 = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (((*(int *)(unaff_EBP + -0x14) == 0x205d29) || (*(int *)(unaff_EBP + -0x14) == 0x21e3c9)) ||
     (*(int *)(unaff_EBP + -0x14) == 0x236a69)) {
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  }
  for (uVar3 = 0;
      (iVar5 = *(int *)(unaff_EBP + -0x18), iVar5 != 0 && (uVar3 < *(uint *)(iVar5 + -4)));
      uVar3 = uVar3 + 1) {
    if (*(int *)(iVar8 + iVar5) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004308f4();
      iVar5 = *(int *)(unaff_EBP + -0x18);
    }
    if (iVar6 == 0) {
      uVar3 = uVar3 - 1;
      iVar8 = iVar8 + -0x98;
      FUN_0067fabb();
    }
    else {
      *(int *)(iVar8 + iVar5) = iVar6;
    }
    iVar8 = iVar8 + 0x98;
  }
  iVar8 = *(int *)(unaff_EBP + -0x24);
  if (*(int *)(unaff_EBP + 8) != 0x91) {
    piVar7 = *(int **)(unaff_EBP + -0x20);
    *(uint *)(iVar8 + 0x52c) =
         (*(uint *)(iVar8 + 0x52c) ^ *(uint *)(unaff_EBP + -0x2c)) & 1 ^ *(uint *)(iVar8 + 0x52c);
    if (((piVar7 == (int *)0x0) ||
        (((pcVar1 = (code *)*piVar7, pcVar1 != (code *)0x231c4a && (pcVar1 != (code *)0x2f9f6c)) &&
         ((pcVar1 != (code *)0x4faa8c && (pcVar1 != ptr_004f5c6a)))))) &&
       (iVar5 = FUN_0078c1bd(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x48),
                             piVar7,*(undefined4 *)(unaff_EBP + -0x1c)), iVar5 == 0))
    goto LAB_007cc7ae;
    if (((((piVar7 != (int *)0x0) && (pcVar1 = (code *)*piVar7, pcVar1 != (code *)0x2f9f6c)) &&
         (pcVar1 != (code *)0x4faa8c)) && ((pcVar1 != ptr_004f5c6a && (pcVar1 != (code *)0x4f5c6e)))
        ) && ((piVar7[3] != 4 || (*(int *)(unaff_EBP + -0x54) == 0)))) {
      FUN_00790b31();
    }
    iVar5 = *(int *)(unaff_EBP + -0x28);
    uVar3 = FUN_0043f6fe();
    *(int *)(unaff_EBP + -0x50) =
         (*(int *)((uint)(uVar3 < 0x80000000) * 0x3f4 + iVar8 + 0x53c) * (&DAT_00978688)[iVar5 * 6])
         / (int)(&DAT_00978684)[iVar5 * 6];
    if (((*(int *)(unaff_EBP + -0x14) == 0x10f3e0) || (*(int *)(unaff_EBP + -0x14) == 0x14011e)) ||
       (*(int *)(unaff_EBP + -0x14) == 0x895829)) {
      piVar7 = (int *)(DAT_00978358 + 4);
      piVar10 = (int *)(*(int *)(unaff_EBP + -0x24) + 4);
      uVar4 = (**(code **)(*piVar10 + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
      piVar7 = (int *)(**(code **)(*piVar7 + 0x10))();
      iVar5 = *piVar7 - **(int **)(unaff_EBP + -0x54);
      uVar4 = (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
      iVar8 = *piVar10;
      *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
      iVar8 = (**(code **)(iVar8 + 0x10))();
      iVar8 = *(int *)(*(int *)(unaff_EBP + -0x54) + 4) - *(int *)(iVar8 + 4);
      bVar11 = *(int *)(unaff_EBP + -0x14) == 0x10f3e0;
      uVar2 = _DAT_008f19e8;
      if (bVar11) {
        uVar2 = _DAT_008f19f0;
      }
      *(undefined8 *)(unaff_EBP + -0x4c) = uVar2;
      *(int *)(unaff_EBP + -0x54) = iVar8 * iVar8 + iVar5 * iVar5;
      fVar12 = (float10)FUN_0087af44((double)*(int *)(unaff_EBP + -0x54));
      if ((float10)_DAT_008ea320 < fVar12) {
        fVar12 = (float10)_DAT_008ea320;
      }
      FUN_0042dc18((double)(((float10)_DAT_008ea320 - fVar12) /
                           (float10)*(double *)(unaff_EBP + -0x4c)),bVar11,
                   *(undefined4 *)(unaff_EBP + -0x50),0,0);
    }
  }
  iVar8 = *(int *)(unaff_EBP + 8);
  if (iVar8 == 0x8e) {
    FUN_007cca17(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x34),
                 unaff_EBP + -0x18);
  }
  else if (iVar8 == 0x8f) {
    FUN_007ccf09(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x34),
                 *(undefined4 *)(unaff_EBP + -0x58),unaff_EBP + -0x18);
  }
  else if (iVar8 == 0x90) {
    FUN_007cddc7(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x34),
                 unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc));
  }
  else if (iVar8 == 0x91) {
    FUN_007ce67c(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x28),
                 *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x34),
                 unaff_EBP + -0x18);
  }
LAB_007cc7ae:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0067fa99();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


