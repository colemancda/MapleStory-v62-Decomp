/* FUN_51801359 - 0x51801359 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51801359(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_518017b5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_51801b43((void *)(extraout_ECX + 0x20),(ulong *)(unaff_EBP + 8),
                       (void *)(unaff_EBP + -0x1c));
  if (iVar2 != 0) {
    FUN_51807d63((void *)(extraout_ECX + 0x38),*(int *)(*(int *)(unaff_EBP + -0x18) + 0xc));
    iVar2 = *(int *)(unaff_EBP + -0x18);
    pvVar3 = FUN_518018b6((void *)(extraout_ECX + 0x38),unaff_EBP + -0x1c);
    *(void **)(iVar2 + 0xc) = pvVar3;
    iVar2 = *(int *)(unaff_EBP + -0x18);
    iVar4 = (*DAT_5181fadc)();
    *(int *)(iVar2 + 0x10) = iVar4 + -1000000;
    *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + 1;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_51801991(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = (int *)(extraout_ECX + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    (*DAT_5181fa10)(*(undefined4 *)(extraout_ECX + 0x18));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


