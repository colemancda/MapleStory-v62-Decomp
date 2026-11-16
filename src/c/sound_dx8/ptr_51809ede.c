/* ptr_51809ede - 0x51809ede in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 ptr_51809ede(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar1 = *(undefined2 **)(unaff_EBP + 0xc);
  if (puVar1 == (undefined2 *)0x0) {
    uVar5 = 0x80004003;
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    puVar3 = *(undefined4 **)(iVar2 + 0x18);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar3;
    FUN_518017b5();
    piVar4 = *(int **)(iVar2 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar4 == (int *)0x0) {
      *puVar1 = 0;
    }
    else {
      *(int **)(puVar1 + 4) = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      *puVar1 = 0xd;
    }
    piVar4 = puVar3 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      *puVar3 = 0;
    }
    uVar5 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


