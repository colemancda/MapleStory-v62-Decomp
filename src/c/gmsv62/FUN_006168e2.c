/* FUN_006168e2 - 0x006168e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006168e2(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  
  FUN_00879bb8();
  FUN_0060142b(0x91,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457fa0(extraout_ECX + 0x90,8);
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *piVar1;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_00457cda(uVar3);
  for (uVar4 = 0; (iVar2 = *piVar1, iVar2 != 0 && (uVar4 < *(uint *)(iVar2 + -4)));
      uVar4 = uVar4 + 1) {
    FUN_00457d37(*(undefined4 *)(iVar2 + uVar4 * 4));
  }
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


