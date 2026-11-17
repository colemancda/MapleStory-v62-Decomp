/* FUN_004b6db0 - 0x004b6db0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b6db0(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  
  FUN_00879bb8();
  cVar4 = FUN_0042452b();
  if (cVar4 == '\0') {
    uVar7 = FUN_00424561();
    if ((uVar7 & 0xffff) != 0) {
      *(uint *)(unaff_EBP + 8) = uVar7 & 0xffff;
      do {
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        FUN_004b8b0a();
        puVar3 = *(undefined2 **)(unaff_EBP + -0x2c);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        uVar6 = FUN_00424561();
        *puVar3 = uVar6;
        iVar8 = *(int *)(unaff_EBP + -0x2c);
        uVar5 = FUN_0042452b();
        *(undefined1 *)(iVar8 + 2) = uVar5;
        iVar8 = FUN_004b98ff(0xffffffff);
        FUN_004b8b3d();
        FUN_004b8b5a();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(unaff_EBP + -0x2c);
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_004b8ba3(0);
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        piVar1 = (int *)(unaff_EBP + 8);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
    }
  }
  else {
    *(uint *)(unaff_EBP + -0x28) = (uint)*(ushort *)(DAT_00979168 + 0x34);
    uVar7 = FUN_00424561();
    *(uint *)(unaff_EBP + -0x34) = uVar7 & 0xffff;
    uVar5 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_00475c07(uVar5,unaff_EBP + 0xb);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004245d2(*(undefined4 *)(unaff_EBP + -0x1c),uVar5);
    uVar5 = FUN_0042452b();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00475c07(uVar5,unaff_EBP + -0xd);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004245d2(*(undefined4 *)(unaff_EBP + -0x14),uVar5);
    iVar8 = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    if (0 < *(int *)(unaff_EBP + -0x28)) {
      do {
        *(int *)(unaff_EBP + -0x2c) = 1 << ((byte)(iVar8 % 8) & 0x1f);
        if ((*(byte *)(iVar8 / 8 + *(int *)(unaff_EBP + -0x1c)) &
            (byte)*(undefined4 *)(unaff_EBP + -0x2c)) != 0) {
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
          FUN_004b8b0a();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          uVar6 = FUN_005df4ab(iVar8);
          iVar9 = *(int *)(unaff_EBP + -0x20);
          **(undefined2 **)(unaff_EBP + -0x38) = uVar6;
          bVar2 = *(byte *)(*(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x14));
          if (iVar9 == 0) {
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            *(byte *)(*(int *)(unaff_EBP + -0x38) + 2) = bVar2 >> 4;
          }
          else {
            *(byte *)(*(int *)(unaff_EBP + -0x38) + 2) = bVar2 & 0xf;
          }
          *(uint *)(unaff_EBP + -0x20) = (uint)(*(int *)(unaff_EBP + -0x20) == 0);
          iVar9 = unaff_EBP + -0x3c;
          FUN_004b98ff(0xffffffff);
          FUN_004b8adb(iVar9);
          *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x34) <= *(int *)(unaff_EBP + -0x24)) {
            FUN_004b8b5a();
            break;
          }
          FUN_004b8b5a();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_EBP + -0x28));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0045ebca();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


