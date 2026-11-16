/* FUN_5000502d - 0x5000502d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000502d(void)

{
  int *piVar1;
  short sVar2;
  undefined2 uVar3;
  short *psVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort uVar7;
  undefined2 extraout_var;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  void *this;
  uint uVar11;
  int unaff_EBP;
  undefined4 *puVar12;
  
  FUN_50012d80();
  psVar4 = *(short **)(unaff_EBP + 0x14);
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    uVar11 = *(uint *)((int)this + 0x18);
    puVar12 = (undefined4 *)((int)this + 0x3c);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar12;
    *(undefined4 **)(unaff_EBP + -0x18) = puVar12;
    *(uint *)(unaff_EBP + 0x18) = ((uVar11 >> 0x18) * *(int *)(unaff_EBP + 0x18)) / 0xff;
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0xc) + *(int *)(unaff_EBP + 0x1c);
    FUN_500024f7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    sVar2 = *psVar4;
    *(short **)(unaff_EBP + 0x14) = psVar4 + 1;
    uVar8 = CONCAT22(extraout_var,sVar2);
    while (uVar7 = (ushort)uVar8, uVar7 != 0) {
      if (uVar7 == 0x20) {
        pvVar9 = FUN_50004c91(this,0x20,(uint *)0x0);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + (int)pvVar9;
      }
      else if (uVar7 == 9) {
        pvVar9 = FUN_50004c91(this,0x20,(uint *)0x0);
        uVar11 = 1;
        if (1 < (uint)((int)pvVar9 * 4)) {
          uVar11 = (int)pvVar9 * 4;
        }
        *(uint *)(unaff_EBP + 0xc) =
             ((uint)(*(int *)(unaff_EBP + 0xc) - *(int *)(unaff_EBP + 0x1c)) / uVar11 + 1) * uVar11
             + *(int *)(unaff_EBP + 0x1c);
      }
      else if (0x1f < uVar7) {
        pvVar9 = FUN_50004c91(this,uVar8,(uint *)(unaff_EBP + -0x28));
        *(void **)(unaff_EBP + -0x10) = pvVar9;
        Ordinal_8(unaff_EBP + -0x38);
        iVar10 = FUN_50006336((short *)(unaff_EBP + -0x38),(short *)&DAT_50086448);
        if (iVar10 < 0) {
          FUN_50012c97(iVar10);
        }
        iVar10 = **(int **)(unaff_EBP + 8);
        uVar8 = *(undefined4 *)((int)this + 0x38);
        iVar5 = *(int *)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar10 = (**(code **)(iVar10 + 0x84))
                           (*(undefined4 *)(unaff_EBP + 8),iVar5,*(undefined4 *)(unaff_EBP + 0x10),
                            uVar8,*(undefined4 *)(unaff_EBP + 0x18),0,0,
                            *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                            *(int *)(unaff_EBP + -0x20) - *(int *)(unaff_EBP + -0x28),
                            *(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + -0x24),
                            *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                            *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
        if (iVar10 < 0) {
          FUN_50012ca5(iVar10,*(int **)(unaff_EBP + 8),&DAT_50018368);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar10 = FUN_5000630c((short *)(unaff_EBP + -0x38));
        if (iVar10 < 0) {
          FUN_50012c97(iVar10);
        }
        puVar12 = *(undefined4 **)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + 0xc) = iVar5 + *(int *)(unaff_EBP + -0x10);
      }
      puVar6 = *(undefined2 **)(unaff_EBP + 0x14);
      uVar3 = *puVar6;
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 2;
      uVar8 = CONCAT22((short)((uint)puVar6 >> 0x10),uVar3);
    }
    piVar1 = puVar12 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar12 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


