/* FUN_007d7bec - 0x007d7bec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d7bec(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  short *psVar11;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar8 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar8 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar5 = FUN_007d7a56();
  *(int *)(unaff_EBP + -0x20) = iVar5;
  if (iVar8 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar6 = FUN_007d7f8b();
  *(int *)(unaff_EBP + -0x18) = iVar6;
  if (iVar8 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_007d7a7d(unaff_EBP + -0x5c,unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar7 = FUN_004029b9(iVar6 * iVar5 * 2);
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  iVar8 = iVar6;
  if (iVar6 <= iVar5) {
    iVar8 = iVar5;
  }
  uVar7 = FUN_004029b9(iVar8 * 2);
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
  iVar8 = iVar6;
  if (iVar6 <= iVar5) {
    iVar8 = iVar5;
  }
  uVar7 = FUN_004029b9(iVar8 * 2);
  *(undefined4 *)(unaff_EBP + -0x40) = uVar7;
  iVar8 = (uint)*(ushort *)(unaff_EBP + 0x10) * 2 + 1;
  uVar7 = FUN_004029b9(iVar8 * 0x200);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = uVar7;
  if (iVar8 != 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
    do {
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      puVar3 = *(undefined2 **)(unaff_EBP + -0x24);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 2;
      iVar9 = *(int *)(unaff_EBP + -0x1c);
      *puVar3 = (short)(iVar5 / iVar8);
    } while (iVar9 < iVar8 * 0x100);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    *(uint *)(unaff_EBP + -0x1c) = (uint)*(ushort *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + -0x1c) = -*(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x2c);
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      for (iVar8 = *(int *)(unaff_EBP + -0x1c); iVar8 <= (int)(uint)*(ushort *)(unaff_EBP + 0x10);
          iVar8 = iVar8 + 1) {
        iVar5 = iVar8;
        if (iVar8 < 1) {
          iVar5 = 0;
        }
        iVar9 = iVar6 + -1;
        if (iVar5 <= iVar6 + -1) {
          iVar9 = iVar5;
        }
        *(int *)(unaff_EBP + -0x10) =
             *(int *)(unaff_EBP + -0x10) +
             (uint)(*(ushort *)
                     (*(int *)(unaff_EBP + -0x28) + (iVar9 + *(int *)(unaff_EBP + -0x30)) * 2) >>
                   0xc);
      }
      iVar8 = 0;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      if (0 < iVar6) {
        puVar10 = *(ushort **)(unaff_EBP + -0x40);
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + iVar6;
        *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x34);
        iVar5 = *(int *)(unaff_EBP + -0x3c) - (int)puVar10;
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + iVar6 * 2;
        do {
          iVar6 = *(int *)(unaff_EBP + -0x14);
          **(undefined2 **)(unaff_EBP + -0x38) =
               *(undefined2 *)(*(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x10) * 2);
          if (iVar6 == 0) {
            iVar9 = *(int *)(unaff_EBP + -0x18) + -1;
            iVar6 = *(ushort *)(unaff_EBP + 0x10) + 1 + iVar8;
            if (iVar6 < iVar9) {
              iVar9 = iVar6;
            }
            *(short *)(iVar5 + (int)puVar10) = (short)iVar9;
            iVar8 = iVar8 - (uint)*(ushort *)(unaff_EBP + 0x10);
            if (iVar8 < 1) {
              iVar8 = 0;
            }
            *puVar10 = (ushort)iVar8;
          }
          uVar1 = *(ushort *)
                   (*(int *)(unaff_EBP + -0x28) +
                   ((uint)*(ushort *)(iVar5 + (int)puVar10) + *(int *)(unaff_EBP + -0x24)) * 2);
          uVar2 = *(ushort *)
                   (*(int *)(unaff_EBP + -0x28) + ((uint)*puVar10 + *(int *)(unaff_EBP + -0x24)) * 2
                   );
          *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 2;
          *(int *)(unaff_EBP + -0x10) =
               *(int *)(unaff_EBP + -0x10) + ((int)((uVar1 & 0xf000) - (uVar2 & 0xf000)) >> 0xc);
          iVar8 = *(int *)(unaff_EBP + -0x48) + 1;
          puVar10 = puVar10 + 1;
          *(int *)(unaff_EBP + -0x48) = iVar8;
        } while (iVar8 < *(int *)(unaff_EBP + -0x18));
        iVar6 = *(int *)(unaff_EBP + -0x18);
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + iVar6;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x20));
  }
  iVar8 = 0;
  if (0 < *(int *)(unaff_EBP + -0x18)) {
    iVar5 = -((uint)*(ushort *)(unaff_EBP + 0x10) * *(int *)(unaff_EBP + -0x18));
    *(uint *)(unaff_EBP + -0x1c) = (uint)*(ushort *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + -0x1c) = -*(int *)(unaff_EBP + -0x1c);
    *(int *)(unaff_EBP + -0x34) = iVar5;
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(int *)(unaff_EBP + -0x24) = iVar5;
      if (*(int *)(unaff_EBP + -0x1c) <= (int)(uint)*(ushort *)(unaff_EBP + 0x10)) {
        iVar6 = ((uint)*(ushort *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + -0x1c)) + 1;
        do {
          iVar9 = 0;
          if (-1 < *(int *)(unaff_EBP + -0x24)) {
            iVar9 = *(int *)(unaff_EBP + -0x24);
          }
          *(int *)(unaff_EBP + -0x10) =
               *(int *)(unaff_EBP + -0x10) +
               (uint)*(ushort *)(*(int *)(unaff_EBP + -0x2c) + (iVar9 + iVar8) * 2);
          *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x18);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (0 < *(int *)(unaff_EBP + -0x20)) {
        psVar11 = *(short **)(unaff_EBP + -0x40);
        *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + 0xc) & 0xfff;
        *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x28) + iVar8 * 2;
        iVar5 = *(int *)(unaff_EBP + -0x3c) - (int)psVar11;
        do {
          **(ushort **)(unaff_EBP + -0x38) =
               *(short *)(*(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x10) * 2) << 0xc |
               (ushort)*(undefined4 *)(unaff_EBP + -0x48);
          if (iVar8 == 0) {
            uVar1 = *(ushort *)(unaff_EBP + 0x10);
            iVar9 = *(int *)(unaff_EBP + -0x20) + -1;
            iVar6 = uVar1 + 1 + *(int *)(unaff_EBP + -0x14);
            if (iVar6 < iVar9) {
              iVar9 = iVar6;
            }
            *(short *)((int)psVar11 + iVar5) =
                 (short)iVar9 * (short)*(undefined4 *)(unaff_EBP + -0x18);
            iVar6 = *(int *)(unaff_EBP + -0x14) - (uint)uVar1;
            if (iVar6 < 1) {
              iVar6 = 0;
            }
            *psVar11 = (short)iVar6 * (short)*(undefined4 *)(unaff_EBP + -0x18);
          }
          *(int *)(unaff_EBP + -0x10) =
               *(int *)(unaff_EBP + -0x10) +
               ((uint)*(ushort *)
                       (*(int *)(unaff_EBP + -0x2c) +
                       (uint)(ushort)(*(short *)((int)psVar11 + iVar5) + (short)iVar8) * 2) -
               (uint)*(ushort *)
                      (*(int *)(unaff_EBP + -0x2c) + (uint)(ushort)(*psVar11 + (short)iVar8) * 2));
          *(int *)(unaff_EBP + -0x38) =
               *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x18) * 2;
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          psVar11 = psVar11 + 1;
        } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x20));
        iVar5 = *(int *)(unaff_EBP + -0x34);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(unaff_EBP + -0x18));
  }
  FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x2c));
  FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x3c));
  FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x40));
  FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x44));
  piVar4 = *(int **)(unaff_EBP + 8);
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar8 = (**(code **)(*piVar4 + 0x20))(piVar4,0);
  if (iVar8 < 0) {
    FUN_00878e09(iVar8,piVar4,&DAT_0096c3a8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar8 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar8 < 0) {
    FUN_00878dfb(iVar8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


