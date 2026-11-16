/* FUN_50811a8c - 0x50811a8c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50811a8c(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  byte bVar8;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff78;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_50811dc6();
    return;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  bVar4 = FUN_5080fbc6((void *)(iVar2 + 0x18),0);
  if (!bVar4) {
    FUN_50811dc6();
    return;
  }
  FUN_5080d5b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar5 = (**(code **)(*(int *)(unaff_EBP + -100) + 0x14))();
  if (iVar5 != 4) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x1c),(ThrowInfo *)&DAT_5081ae30);
  }
  if (*(int *)(unaff_EBP + -0x18) == 0x31474b50) {
    iVar5 = (**(code **)(*(int *)(unaff_EBP + -100) + 0x14))(unaff_EBP + -0x40);
    if (iVar5 != 4) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_5081ae30);
    }
    iVar5 = (**(code **)(*(int *)(unaff_EBP + -100) + 0x14))(unaff_EBP + -0x3c,4);
    if (iVar5 != 4) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x24),(ThrowInfo *)&DAT_5081ae30);
    }
    iVar5 = (**(code **)(*(int *)(unaff_EBP + -100) + 0x14))(unaff_EBP + -0x18,4);
    if (iVar5 != 4) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_5081ae30);
    }
    FUN_5080d7cd((void *)(unaff_EBP + -100),*(int *)(unaff_EBP + -0x18),0);
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_5080dad0();
      FUN_50811dc6();
      return;
    }
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(unaff_EBP + -0x40);
    piVar6 = (int *)FUN_50811f3b((int *)(unaff_EBP + -0x48));
    piVar6 = FUN_5080d6f8(piVar6);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x40);
    *(int **)(iVar2 + 0x1c) = piVar6;
    piVar6 = (int *)FUN_5080dd92((void *)(unaff_EBP + -100),(undefined4 *)(unaff_EBP + -0x2c),0,
                                 uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_50812461((void *)(unaff_EBP + -0x14),piVar6);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_5080fc91((int *)(unaff_EBP + -0x2c));
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      *(undefined1 **)(unaff_EBP + 0x14) = &stack0xffffff6c;
      FUN_508050d0();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_50811f3b((int *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_5080dc25();
      puVar7 = *(ushort **)(unaff_EBP + 0xc);
      iVar5 = 0;
      if (puVar7 != (ushort *)0x0) {
        for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
          iVar5 = iVar5 * 0x20 + 1 + (uint)*puVar7;
        }
      }
      *(int *)(iVar2 + 0x24) = iVar5;
      bVar8 = (byte)((uint)iVar5 >> 0x18) ^ (byte)((uint)iVar5 >> 0x10) ^ (byte)((uint)iVar5 >> 8) ^
              *(byte *)(iVar2 + 0x24);
      *(byte *)(unaff_EBP + 0x17) = ~bVar8;
      FUN_5080d5b5();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_5080dd3e((void *)(unaff_EBP + -0x88),&DAT_5081ead8);
      iVar5 = (**(code **)(*(int *)(unaff_EBP + -0x88) + 0x14))(unaff_EBP + 0xb);
      if (iVar5 != 1) {
        *(undefined4 *)(unaff_EBP + -0x30) = 0x26;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x30),(ThrowInfo *)&DAT_5081ae30);
      }
      bVar1 = *(byte *)(unaff_EBP + 0xb);
      if ((bVar1 != bVar8) && (bVar1 != *(byte *)(unaff_EBP + 0x17))) {
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_5080dad0();
        FUN_50811f51((int *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_5080dad0();
        FUN_50811dc6();
        return;
      }
      FUN_5080dcdd(unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + -0x6c),(uint)(bVar1 == bVar8));
      FUN_508052b4((undefined4 *)(unaff_EBP + 0x14));
      iVar5 = FUN_50810e59((void *)(iVar2 + 0x18),(int *)(unaff_EBP + -0x14));
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        FUN_5080dfed(iVar5);
      }
      FUN_50811f5e(iVar2 + 0x10);
      iVar5 = *(int *)(iVar2 + 0x14);
      *(int *)(unaff_EBP + 0x14) = iVar2 + -0x3c;
      FUN_50812013((void *)(iVar5 + 8),(int *)(iVar2 + 0x40),(undefined4 *)(unaff_EBP + 0x14));
      FUN_50811dd7();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_5080dad0();
      FUN_50811f51((int *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_5080dad0();
      FUN_50811dc6();
      return;
    }
    FUN_50811f51((int *)(unaff_EBP + -0x14));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5080dad0();
  FUN_50811dc6();
  return;
}


