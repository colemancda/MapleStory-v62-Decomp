/* FUN_5180468e - 0x5180468e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5180468e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if ((*(int **)(unaff_EBP + 0x14) == (int *)0x0) ||
     (iVar3 = **(int **)(unaff_EBP + 0x14), iVar3 == 0)) {
    puVar1 = (undefined4 *)(extraout_ECX + 0x4c);
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
    FUN_518017b5();
    puVar5 = *(undefined4 **)(extraout_ECX + 100);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    do {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(unaff_EBP + 8);
        iVar3 = acmStreamOpen(puVar5,0,*(undefined4 *)(unaff_EBP + 0xc),
                              *(undefined4 *)(unaff_EBP + 0x10),0,0,0,4);
        if (iVar3 != 0) {
          piVar2 = (int *)(extraout_ECX + 0x50);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            *puVar1 = 0;
          }
          goto LAB_51804796;
        }
        uVar4 = *puVar5;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        iVar3 = acmDriverID(uVar4,unaff_EBP + -0x10,0);
        if (iVar3 != 0) goto LAB_5180478d;
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        iVar3 = acmDriverOpen(unaff_EBP + 0x10,*(undefined4 *)(unaff_EBP + -0x10),0);
        if (iVar3 != 0) goto LAB_5180478d;
        puVar5 = (undefined4 *)FUN_518103a3((void *)(*(int *)(unaff_EBP + -0x18) + 0x58));
        *puVar5 = *(undefined4 *)(unaff_EBP + 0x10);
        puVar5 = *(undefined4 **)(unaff_EBP + 0x14);
        if (puVar5 == (undefined4 *)0x0) goto LAB_5180478d;
        uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
        goto LAB_5180478b;
      }
      uVar4 = *puVar5;
      iVar3 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
      puVar5 = (undefined4 *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      iVar3 = acmStreamOpen(*(undefined4 *)(unaff_EBP + 8),uVar4,*(undefined4 *)(unaff_EBP + 0xc),
                            *(undefined4 *)(unaff_EBP + 0x10),0,0,0,4);
    } while (iVar3 != 0);
    puVar5 = *(undefined4 **)(unaff_EBP + 0x14);
    if (puVar5 != (undefined4 *)0x0) {
      uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
LAB_5180478b:
      *puVar5 = uVar4;
    }
LAB_5180478d:
    piVar2 = (int *)(extraout_ECX + 0x50);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = acmStreamOpen(*(undefined4 *)(unaff_EBP + 8),iVar3,*(undefined4 *)(unaff_EBP + 0xc),
                          *(undefined4 *)(unaff_EBP + 0x10),0,0,0,4);
  }
LAB_51804796:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


