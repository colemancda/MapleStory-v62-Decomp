/* ptr_0047521c - 0x0047521c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0047521c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  while( true ) {
    iVar3 = FUN_00866da3();
    if (iVar3 == 0) break;
    FUN_006014d3(unaff_ESI + 0x50,0x3e,unaff_EDI);
    uVar4 = FUN_00865db5();
    *unaff_EDI = uVar4;
  }
  puVar2 = (undefined4 *)(unaff_ESI + 0x84);
  FUN_006014d3(unaff_ESI + 0x50,0x3e,puVar2);
  uVar4 = FUN_00865db5(puVar2);
  *puVar2 = uVar4;
  FUN_004752aa();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045ebca();
  piVar1 = unaff_EBX + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *unaff_EBX = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


