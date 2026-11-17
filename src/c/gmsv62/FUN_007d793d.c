/* FUN_007d793d - 0x007d793d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d793d(void)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  ushort *puVar6;
  ushort *puVar7;
  
  FUN_00879bb8();
  piVar5 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar4 = FUN_007d7a56();
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_007d7a7d(unaff_EBP + -0x24,unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 != 0) {
    *(int *)(unaff_EBP + -0x10) = iVar4;
    puVar6 = *(ushort **)(unaff_EBP + -0x1c);
    do {
      puVar7 = (ushort *)((int)puVar6 + *(int *)(unaff_EBP + -0x14));
      if (puVar6 < puVar7) {
        do {
          uVar2 = *puVar6;
          uVar3 = (ushort)(byte)((ulonglong)
                                 ((uVar2 >> 4 & 0xf) * 0x35 + (uVar2 >> 8 & 0xf) * 0x25 +
                                 (uVar2 & 0xf) * 10) / 100);
          *puVar6 = (uVar3 << 4 | uVar3) << 4 | uVar2 & 0xf000 | uVar3;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar7);
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      piVar1 = (int *)(unaff_EBP + -0x10);
      *piVar1 = *piVar1 + -1;
      puVar6 = puVar7;
    } while (*piVar1 != 0);
  }
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar4 = (**(code **)(*piVar5 + 0x20))(piVar5,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_0096c3a8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


