/* FUN_50407cf6 - 0x50407cf6 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50407cf6(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  pcVar1 = *(code **)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(((*(uint *)(extraout_ECX + 0x30) >> 1) - *(int *)(extraout_ECX + 0x20)) +
                      *(int *)(extraout_ECX + 0x28),
                      ((*(uint *)(extraout_ECX + 0x34) >> 1) - *(int *)(extraout_ECX + 0x24)) +
                      *(int *)(extraout_ECX + 0x2c),
                      *(undefined4 *)(*(int *)(extraout_ECX + 0x1c) + 0x328));
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_50407d47;
    }
  }
  uVar3 = 1;
LAB_50407d47:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


