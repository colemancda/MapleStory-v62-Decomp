/* FUN_004b6b18 - 0x004b6b18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b6b18(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int unaff_EBP;
  uint uVar6;
  int iVar7;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  iVar7 = *piVar1;
  uVar4 = FUN_004ba5de(*(undefined4 *)(unaff_EBP + 8));
  FUN_004bb212(piVar1,iVar7,uVar4);
  uVar6 = (uint)*(ushort *)(DAT_00979168 + 0x34);
  if (*piVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*piVar1 + -4);
  }
  if (*(int *)(unaff_EBP + -0x14) < (int)(uVar6 / 0x14)) {
    FUN_00457cda(0);
    FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x14));
    iVar7 = 0;
    if (0 < *(int *)(unaff_EBP + -0x14)) {
      do {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*piVar1 + iVar7 * 8 + 4);
        FUN_004b8b3d();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(undefined2 **)(unaff_EBP + -0x24) == (undefined2 *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = **(undefined2 **)(unaff_EBP + -0x24);
        }
        FUN_0045d247(uVar3);
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined1 *)(*(int *)(unaff_EBP + -0x24) + 2);
        }
        FUN_00457cda(uVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004b8b5a();
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_EBP + -0x14));
    }
  }
  else {
    FUN_00457cda(1);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_00475c07((uint)(uVar6 % 8 != 0) + uVar6 / 8,unaff_EBP + 0xf);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00475c07((uint)(*(int *)(unaff_EBP + -0x14) % 2 != 0) + *(int *)(unaff_EBP + -0x14) / 2,
                 unaff_EBP + -0xd);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    for (uVar6 = 0;
        (iVar7 = *(int *)(unaff_EBP + -0x1c), iVar7 != 0 && (uVar6 < *(uint *)(iVar7 + -4)));
        uVar6 = uVar6 + 1) {
      *(undefined1 *)(uVar6 + iVar7) = 0;
    }
    for (uVar6 = 0;
        (iVar7 = *(int *)(unaff_EBP + -0x18), iVar7 != 0 && (uVar6 < *(uint *)(iVar7 + -4)));
        uVar6 = uVar6 + 1) {
      *(undefined1 *)(uVar6 + iVar7) = 0;
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
    iVar7 = 0;
    if (0 < *(int *)(unaff_EBP + -0x14)) {
      do {
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*piVar1 + iVar7 * 8 + 4);
        FUN_004b8b3d();
        uVar3 = **(undefined2 **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uVar6 = FUN_005df4cb(CONCAT22((short)((uint)*(undefined2 **)(unaff_EBP + -0x2c) >> 0x10),
                                      uVar3));
        pbVar5 = (byte *)(((uVar6 & 0xffff) >> 3) + *(int *)(unaff_EBP + -0x1c));
        *pbVar5 = *pbVar5 | '\x01' << (sbyte)((ulonglong)(uVar6 & 0xffff) % 8);
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          pbVar5 = (byte *)(*(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x20));
          *pbVar5 = *pbVar5 | *(char *)(*(int *)(unaff_EBP + -0x2c) + 2) << 4;
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        }
        else {
          *(undefined1 *)(*(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x18)) =
               *(undefined1 *)(*(int *)(unaff_EBP + -0x2c) + 2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *(uint *)(unaff_EBP + -0x24) = (uint)(*(int *)(unaff_EBP + -0x24) == 0);
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_004b8ba3(0);
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_EBP + -0x14));
    }
    FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x14));
    uVar4 = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -4);
    }
    FUN_00457cda(uVar4);
    iVar7 = *(int *)(unaff_EBP + -0x1c);
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar7 + -4);
    }
    FUN_00457fa0(iVar7,uVar4);
    uVar4 = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + -4);
    }
    FUN_00457cda(uVar4);
    iVar7 = *(int *)(unaff_EBP + -0x18);
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar7 + -4);
    }
    FUN_00457fa0(iVar7,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0045ebca();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


