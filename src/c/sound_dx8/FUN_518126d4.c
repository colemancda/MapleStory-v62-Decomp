/* FUN_518126d4 - 0x518126d4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_518126d4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar4 = 0x80004003;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + 8);
    puVar1 = (undefined4 *)(iVar3 + 0x1c);
    *(undefined4 **)(unaff_EBP + 8) = puVar1;
    FUN_518017b5();
    this = *(void **)(iVar3 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar5 = FUN_51805650(this,*(undefined4 **)(unaff_EBP + 0xc));
    if (puVar5 == (undefined4 *)0x0) {
      piVar2 = (int *)(iVar3 + 0x20);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      uVar4 = 0x8007000e;
    }
    else {
      piVar2 = (int *)(iVar3 + 0x20);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *puVar1 = 0;
      }
      uVar4 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


