/* FUN_51812aa9 - 0x51812aa9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812aa9(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar3 = 0x80004003;
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar2 + 0x18);
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    FUN_518017b5();
    uVar3 = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = (*DAT_5181fa1c)(uVar3,0);
    if (iVar4 == 0) {
      piVar5 = (int *)(iVar2 + 0x1c);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *puVar1 = 0;
      }
      uVar3 = 0x80040227;
    }
    else {
      piVar5 = (int *)FUN_51813041((void *)(iVar2 + 0x50));
      FUN_51804af0(piVar5,*(int **)(unaff_EBP + 0xc));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar5[1] = *(int *)(unaff_EBP + 0x10);
      piVar5 = (int *)(iVar2 + 0x1c);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        *puVar1 = 0;
      }
      (*DAT_5181fa08)(*(undefined4 *)(iVar2 + 0x4c),1,0);
      uVar3 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


