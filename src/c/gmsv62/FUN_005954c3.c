/* FUN_005954c3 - 0x005954c3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005954c3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = 0;
    FUN_00414f8b(puVar1 + 2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


