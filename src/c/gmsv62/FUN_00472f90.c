/* FUN_00472f90 - 0x00472f90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00472f90(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    *puVar1 = 0;
    FUN_00414f8b(uVar2);
    puVar3 = puVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


