/* FUN_51810164 - 0x51810164 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51810164(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *this;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x2c) = *puVar2;
  *(undefined4 *)(unaff_EBP + -0x28) = puVar2[1];
  *(undefined4 *)(unaff_EBP + -0x24) = puVar2[2];
  *(undefined4 *)(unaff_EBP + -0x20) = puVar2[3];
  *(undefined4 *)(unaff_EBP + -0x1c) = puVar2[4];
  *(undefined4 *)(unaff_EBP + -0x18) = puVar2[5];
  *(undefined4 *)(unaff_EBP + -0x14) = puVar2[6];
  *(undefined4 *)(unaff_EBP + -0x10) = puVar2[7];
  puVar2 = (undefined4 *)(extraout_ECX + 0x7c);
  *(undefined4 **)(unaff_EBP + 8) = puVar2;
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = (void *)FUN_5181056b((void *)(extraout_ECX + 0x84),(int *)(unaff_EBP + -0x2c),(void *)0x0);
  if ((this == (void *)0x0) || (*(int *)((int)this + 8) == 0)) {
    piVar1 = (int *)(extraout_ECX + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar2 = 0;
    }
    uVar5 = 0;
  }
  else {
    puVar3 = *(undefined4 **)((int)this + 0x10);
    uVar5 = *puVar3;
    puVar4 = *(undefined4 **)(unaff_EBP + 0xc);
    *puVar3 = 0;
    *puVar4 = uVar5;
    uVar5 = puVar3[1];
    puVar3[1] = 0;
    **(undefined4 **)(unaff_EBP + 0x10) = uVar5;
    FUN_51810459(this,*(int *)((int)this + 0x10));
    piVar1 = (int *)(extraout_ECX + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar2 = 0;
    }
    uVar5 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


