/* ptr_00429597 - 0x00429597 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00429597(void)

{
  int iVar1;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(unaff_EBP + -0x20);
  uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar2 = &DAT_0097bb30;
  FUN_00424df4(&DAT_0097bb30,uVar3,uVar4);
  FUN_00429635(puVar2,uVar3,uVar4);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_004125d9();
  FUN_004125d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


