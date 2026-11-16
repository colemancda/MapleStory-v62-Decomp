/* FUN_5000533e - 0x5000533e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_5000533e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  short *psVar3;
  void *pvVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  int extraout_ECX;
  undefined2 extraout_var;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBP;
  ushort *puVar11;
  
  FUN_50012d80();
  psVar3 = *(short **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
    iVar5 = 0;
  }
  else {
    puVar1 = (undefined4 *)(extraout_ECX + 0x3c);
    uVar10 = -*(int *)(unaff_EBP + 0x10);
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
    FUN_500024f7();
    sVar6 = *psVar3;
    uVar8 = CONCAT22(extraout_var,sVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    puVar11 = (ushort *)(psVar3 + 1);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
    if (sVar6 != 0) {
      do {
        if ((ushort)uVar8 == 9) {
          pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x18),0x20,(uint *)0x0);
          uVar9 = 1;
          if (1 < (uint)((int)pvVar4 * 4)) {
            uVar9 = (int)pvVar4 * 4;
          }
          uVar10 = (uVar10 / uVar9 + 1) * uVar9;
LAB_500053d2:
          uVar8 = *(undefined4 *)(unaff_EBP + -0x10);
        }
        else if (0x1f < (ushort)uVar8) {
          pvVar4 = FUN_50004c91(*(void **)(unaff_EBP + -0x18),uVar8,(uint *)0x0);
          uVar10 = uVar10 + (int)pvVar4;
          goto LAB_500053d2;
        }
        sVar6 = (short)uVar8;
        if ((*(int *)(unaff_EBP + -0x14) == 0) && (sVar6 == 0x20)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 1;
        }
        iVar5 = *(int *)(unaff_EBP + 0x10) + uVar10;
        if (*(int *)(unaff_EBP + 0xc) < iVar5) {
          if ((*(int *)(unaff_EBP + -0x14) == 0) || (puVar11[-1] == 0x20)) {
            iVar5 = ((int)puVar11 - *(int *)(unaff_EBP + 8) >> 1) + -1;
          }
          else {
            uVar7 = *puVar11;
            if (((((0x1f < uVar7) && (sVar6 != 0x20)) && (sVar6 != 0x2e)) &&
                ((sVar6 != 0x2c && (sVar6 != 0x21)))) && (sVar6 != 0x3f)) goto LAB_50005450;
            iVar5 = (int)puVar11 - *(int *)(unaff_EBP + 8) >> 1;
          }
          piVar2 = (int *)(extraout_ECX + 0x40);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            *puVar1 = 0;
          }
          goto LAB_500054ac;
        }
        uVar7 = *puVar11;
        puVar11 = puVar11 + 1;
        *(uint *)(unaff_EBP + -0x10) = CONCAT22((short)((uint)iVar5 >> 0x10),uVar7);
        if (uVar7 == 0) break;
        uVar8 = *(undefined4 *)(unaff_EBP + -0x10);
      } while( true );
    }
    piVar2 = (int *)(extraout_ECX + 0x40);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    iVar5 = ((int)puVar11 - *(int *)(unaff_EBP + 8) >> 1) + -1;
  }
  goto LAB_500054ac;
LAB_50005450:
  puVar11 = puVar11 + -1;
  if (uVar7 == 0) goto LAB_50005483;
  if (((uVar7 == 0x20) || (uVar7 == 0x2e)) ||
     ((uVar7 == 0x2c || ((uVar7 == 0x21 || (uVar7 == 0x3f)))))) {
    iVar5 = ((int)puVar11 - *(int *)(unaff_EBP + 8) >> 1) + 2;
    goto LAB_50005489;
  }
  uVar7 = *puVar11;
  goto LAB_50005450;
LAB_50005483:
  iVar5 = ((int)puVar11 - *(int *)(unaff_EBP + 8) >> 1) + -1;
LAB_50005489:
  piVar2 = (int *)(extraout_ECX + 0x40);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
LAB_500054ac:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


